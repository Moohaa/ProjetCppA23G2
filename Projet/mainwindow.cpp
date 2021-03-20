#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "utilisateur.h"
#include "droitacces.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Login_ins_clicked()
{

QSqlQueryModel *model=new QSqlQueryModel();
        QSqlQuery qry;
        qry.prepare("select LIBELLE_DROIT from DROITS_ACCES");
        qry.exec();
        model->setQuery(qry);
        ui->droit->setModel(model);
        ui->droit->setCurrentIndex(-1);
        ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Login_connexion_clicked()
{
       QString email=ui->login_email->text();
       QString mdp=ui->login_mdp->text();
       QSqlQuery qry;
       qry.prepare("select * from UTILISATEURS where EMAIL_UTILISATEUR=:email and MDP_UTILISATEUR=:mdp");
        qry.bindValue(":email",email);
        qry.bindValue(":mdp",mdp);
       qry.exec();
   qry.next();
   if(email.isEmpty()&& mdp.isEmpty())
   {QMessageBox :: critical(nullptr,QObject::tr("Erreur "),
                            QObject::tr("Vérifier votre login ou mot de passe\n"
                                        "click cancel to exit "),QMessageBox ::Cancel);}
   else
    if(email==qry.value(3).toString() && mdp==qry.value(4).toString())
    {
    ui->stackedWidget->setCurrentIndex(8);
    }

    else
       { QMessageBox :: critical(nullptr,QObject::tr("Erreur "),
                                 QObject::tr("Vérifier votre login ou mot de passe\n"
                                             "click cancel to exit "),QMessageBox ::Cancel);}




}

void MainWindow::on_affiche_utilisateur_clicked()
{
   ui->stackedWidget->setCurrentIndex(4);
ui->tab_affiche->setModel(tmputilisateur.afficher_utilisateur());
}

void MainWindow::on_pushButton_clicked()
{
        int row =ui->tab_affiche->selectionModel()->currentIndex().row();
        QString id=ui->tab_affiche->model()->index(row,0).data().toString();

        bool test =tmputilisateur.supprimer_utilisateur(id);
        if(row==-1)
        { QMessageBox::critical(nullptr, QObject::tr("Supprimer un utilisateur"),
                                QObject::tr("Erreur ! selectionnez utilisateur que vous voulez le supprimer !.\n"
                                            "Click Cancel to exit."), QMessageBox::Cancel);}
        else
        {
        if(test)
        {
            ui->tab_affiche->setModel(tmputilisateur.afficher_utilisateur());
            QMessageBox::information(nullptr, QObject::tr("Supprimer un utilisateur"),
                        QObject::tr("utilisateur  supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
                    ui->tab_affiche->setModel(tmputilisateur.afficher_utilisateur());

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un utilisateur"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
    }


void MainWindow::on_tab_affiche_doubleClicked(const QModelIndex &index)
{

    int row =ui->tab_affiche->selectionModel()->currentIndex().row();
    ui->stackedWidget->setCurrentIndex(2);
    ui->inscription_id_3->setText(ui->tab_affiche->model()->index(row,0).data().toString());
    ui->inscription_nom_3->setText(ui->tab_affiche->model()->index(row,1).data().toString());
    ui->inscription_prenom_3->setText(ui->tab_affiche->model()->index(row,2).data().toString());
    ui->inscription_email_3->setText(ui->tab_affiche->model()->index(row,3).data().toString());
    ui->inscription_mdp_3->setText(ui->tab_affiche->model()->index(row,4).data().toString());
    ui->inscription_role_3->setCurrentText(ui->tab_affiche->model()->index(row,5).data().toString());
}





void MainWindow::on_modifier_utilisateur_clicked()
{
    int id=ui->inscription_id_3->text().toInt();
    QString nom=ui->inscription_nom_3->text();
      QString prenom=ui->inscription_prenom_3->text();
      QString email=ui->inscription_email_3->text();
        QString mdp=ui->inscription_mdp_3->text();
        QString role=ui->inscription_role_3->currentText();

      if(nom.isEmpty()|| prenom.isEmpty()||nom.contains(QRegExp("^[a-z+$+A-Z]"))==0||prenom.contains(QRegExp("^[a-z+$+A-Z]"))==0||email.isEmpty()||mdp.isEmpty()||role.isEmpty())
        {


          QMessageBox::information(nullptr, QObject::tr("erreur"),
                            QObject::tr("Vérifier vos champs.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
   {
         Utilisateur u( id,nom, prenom , email, mdp ,role);
          bool test=u.modifier_utilisateur(id,nom,prenom,email,mdp,role);
      if(test)
      {



          QMessageBox::information(nullptr, QObject::tr("Modifier un utilisateur"),
                            QObject::tr("UTILISATEUR modifie.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }


      }
}

void MainWindow::on_ajouter_droit_clicked()
{
    int code_droit=ui->inscription_id_3->text().toInt();
    QString libelle_droit=ui->inscription_nom->text();
        droit_acces d;


      if(libelle_droit.isEmpty()|| libelle_droit.contains(QRegExp("^[a-z+$+A-Z]"))==0)
        {


          QMessageBox::information(nullptr, QObject::tr("erreur"),
                            QObject::tr("Vérifier vos champs.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
   {
         droit_acces d( code_droit,libelle_droit);
          bool test=d.Ajouter_droit();
      if(test)
      {



          QMessageBox::information(nullptr, QObject::tr("Ajouter un droit"),
                            QObject::tr("droit ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }


      }
}


void MainWindow::on_inscription_inscrit_2_clicked()
{
    QString nom=ui->inscription_nom->text();
      QString prenom=ui->inscription_prenom->text();
      QString email=ui->inscription_email->text();
        QString mdp=ui->inscription_mdp->text();
        QString role=ui->inscription_role->currentText();
        Utilisateur u;


      if(nom.isEmpty()|| prenom.isEmpty()||nom.contains(QRegExp("^[a-z+$+A-Z]"))==0||prenom.contains(QRegExp("^[a-z+$+A-Z]"))==0||email.isEmpty()||mdp.isEmpty()||role.isEmpty())
        {


          QMessageBox::information(nullptr, QObject::tr("erreur"),
                            QObject::tr("Vérifier vos champs.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
   {
          int id=u.lastId();
         Utilisateur u( id,nom, prenom , email, mdp ,role);
          bool test=u.Ajouter_utilisateur();
      if(test)
      {



          QMessageBox::information(nullptr, QObject::tr("Ajouter un utilisateur"),
                            QObject::tr("UTILISATEUR ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }


      }
}

void MainWindow::on_inscription_inscrit_clicked()
{
    QString nom=ui->inscription_nom->text();
      QString prenom=ui->inscription_prenom->text();
      QString email=ui->inscription_email->text();
        QString mdp=ui->inscription_mdp->text();
        QString role=ui->inscription_role->currentText();
        Utilisateur u;


      if(nom.isEmpty()|| prenom.isEmpty()||nom.contains(QRegExp("^[a-z+$+A-Z]"))==0||prenom.contains(QRegExp("^[a-z+$+A-Z]"))==0||email.isEmpty()||mdp.isEmpty()||role.isEmpty())
        {


          QMessageBox::information(nullptr, QObject::tr("erreur"),
                            QObject::tr("Vérifier vos champs.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
   {
          int id=u.lastId();
         Utilisateur u( id,nom, prenom , email, mdp ,role);
          bool test=u.Ajouter_utilisateur();
      if(test)
      {



          QMessageBox::information(nullptr, QObject::tr("Ajouter un utilisateur"),
                            QObject::tr("UTILISATEUR ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }


}
}

