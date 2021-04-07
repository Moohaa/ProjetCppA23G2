#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "utilisateur.h"
#include "droitacces.h"
#include "login.h"
#include <QDateTime>
#include <QMessageBox>
#include "string.h"
#include <QDateTime>
#include <QCalendarWidget>
#include <QFile>
#include <QPrintDialog>
#include <QFileDialog>
#include <QDebug>
#include <QPainter>
#include <QKeyEvent>
#include <QGraphicsOpacityEffect>
#include <QCompleter>
#include <QKeyEvent>
#include <QMediaPlayer>
#include<QGraphicsOpacityEffect>
#include<QMessageBox>
#include <QCoreApplication>
#include <QPdfWriter>
#include <QPainter>
#include <QPdfWriter>
#include <QUrl>
#include <QSqlTableModel>
#include <QSortFilterProxyModel>
#include <QSqlRelationalTableModel>
#include <QPrintPreviewDialog>
#include <QPainter>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include"QMessageBox"
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPushButton>
#include<QFileInfo>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    QSqlQueryModel *model=new QSqlQueryModel();
            QSqlQuery qry;
            qry.prepare("select LIBELLE_DROIT from DROITS_ACCES");
            qry.exec();
            model->setQuery(qry);
            ui->liste_droit->setModel(model);
            ui->liste_droit_3->setModel(model);

}

Login::~Login()
{
    delete ui;
}



void Login::on_Login_ins_clicked()
{
        ui->stackedWidget->setCurrentIndex(1);
}

void Login::on_Login_connexion_clicked()
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
        if(qry.value(5).toString() == "Gerant"){
            ui->stackedWidget->setCurrentIndex(11);
            MainWindow *w =new MainWindow(this);
            w->show();
        }else{
            //ui->stackedWidget->setCurrentIndex(3);
             MainWindow *w =new MainWindow(this);
             w->show();
             this->setVisible(false);
        }
    }
    else
       { QMessageBox :: critical(nullptr,QObject::tr("Erreur "),
                                 QObject::tr("Vérifier votre login ou mot de passe\n"
                                             "click cancel to exit "),QMessageBox ::Cancel);}
}

void Login::on_affiche_utilisateur_clicked()
{
   ui->stackedWidget->setCurrentIndex(6);
ui->tab_affiche->setModel(tmputilisateur.afficher_utilisateur());
}

void Login::on_pushButton_clicked()
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


void Login::on_tab_affiche_doubleClicked(const QModelIndex &index)
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





void Login::on_modifier_utilisateur_clicked()
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
          ui->tab_affiche->setModel(tmputilisateur.afficher_utilisateur());


   }
ui->stackedWidget->setCurrentIndex(5);

      }
}

void Login::on_ajouter_droit_clicked()
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


void Login::on_inscription_inscrit_2_clicked()
{

    QString nom=ui->inscription_nom_2->text();
      QString prenom=ui->inscription_prenom_2->text();
      QString email=ui->inscription_email_2->text();
        QString mdp=ui->inscription_mdp_2->text();
        QString role=ui->inscription_role->currentText();
        Utilisateur u;


      if(nom.isEmpty()|| prenom.isEmpty()||nom.contains(QRegExp("^[a-z+$+A-Z]"))==0||prenom.contains(QRegExp("^[a-z+$+A-Z]"))==0||email.isEmpty()||mdp.isEmpty())
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
           ui->stackedWidget->setCurrentIndex(4);


          QMessageBox::information(nullptr, QObject::tr("Ajouter un utilisateur"),
                            QObject::tr("UTILISATEUR ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }


      }
}

void Login::on_inscription_inscrit_clicked()
{
    QString nom=ui->inscription_nom->text();
      QString prenom=ui->inscription_prenom->text();
      QString email=ui->inscription_email->text();
        QString mdp=ui->inscription_mdp->text();
        QString role=ui->inscription_role->currentText();
        Utilisateur u;


      if(nom.isEmpty()|| prenom.isEmpty()||nom.contains(QRegExp("^[a-z+$+A-Z]"))==0||prenom.contains(QRegExp("^[a-z+$+A-Z]"))==0||email.isEmpty()||mdp.isEmpty()||role.isEmpty()||u.controlsaisieMail(email)==false)
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


void Login::on_liste_droit_currentIndexChanged(const QString &arg1)
{
    QString nom=arg1;
     QSqlQuery qry;
     qry.prepare("select CODE_DROIT from DROITS_ACCES where LIBELLE_DROIT =:nom");
     qry.bindValue(":nom", nom);
 if(qry.exec())
 {while(qry.next())
     {

     ui->codedroit_inscri->setText(qry.value(0).toString());
 }
 }
}

void Login::on_ajoute_droit_clicked()
{
    Utilisateur u;
      QString Code_droit=ui->codedroit_inscri->text();

          bool test=u.affecter_droit(Code_droit);
      if(test)
      {

          QMessageBox::information(nullptr, QObject::tr("Ajouter un droit"),
                            QObject::tr("droit ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }
 ui->tab_droit->setModel(tmpdroit_u.afficher_droit());

}

void Login::on_supp_droit_clicked()
{
    int row =ui->tab_droit->selectionModel()->currentIndex().row();
    QString id=ui->tab_droit->model()->index(row,2).data().toString();

    bool test =tmpdroit_u.supprimer_droit(id);
    if(row==-1)
    { QMessageBox::critical(nullptr, QObject::tr("Supprimer un droit"),
                            QObject::tr("Erreur ! selectionnez droit que vous voulez le supprimer !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
    else
    {
    if(test)
    {
        ui->tab_droit->setModel(tmpdroit_u.afficher_droit());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un droit"),
                    QObject::tr("droit  supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tab_droit->setModel(tmpdroit_u.afficher_droit());

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("supprimer un droit"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void Login::on_modifier_droit_clicked()
{
    int code=ui->modif_code->text().toInt();
    QString libelle=ui->modif_lib->text();;

      if(libelle.isEmpty())
        {
          QMessageBox::information(nullptr, QObject::tr("erreur"),
                            QObject::tr("Vérifier vos champs.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
   {
         Utilisateur u;
          bool test=u.modifier_droit(code,libelle);
      if(test)
      {

          QMessageBox::information(nullptr, QObject::tr("Modifier un droit"),
                            QObject::tr("DROIT modifie.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);
          ui->tab_droit->setModel(tmpdroit_u.afficher_droit());


   }

      }
}

void Login::on_tab_droit_doubleClicked(const QModelIndex &index)
{
    int row =ui->tab_droit->selectionModel()->currentIndex().row();
    ui->modif_code->setText(ui->tab_droit->model()->index(row,2).data().toString());
    ui->modif_lib->setText(ui->tab_droit->model()->index(row,3).data().toString());

}

void Login::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Login::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
    ui->affiche_droit->setModel(tmpdroit.afficher_droit());
}

void Login::on_supprimer_droit_clicked()
{
    int row =ui->affiche_droit->selectionModel()->currentIndex().row();
    QString id=ui->affiche_droit->model()->index(row,0).data().toString();

    bool test =tmpdroit.supprimer_droit(id);
    if(row==-1)
    { QMessageBox::critical(nullptr, QObject::tr("Supprimer un droit"),
                            QObject::tr("Erreur ! selectionnez droit que vous voulez le supprimer !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
    else
    {
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Supprimer un droit"),
                    QObject::tr("droit  supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
                ui->affiche_droit->setModel(tmpdroit.afficher_droit());

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("supprimer un droit"),
                    QObject::tr("Erreur ! Ce droit est affecté a un utilisateur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void Login::on_ajout_droit_clicked()
{
    int code=ui->ajout_codedroit->text().toInt();
      QString libelle=ui->ajout_libelledroit->text();
        Utilisateur u;


      if(libelle.isEmpty())
        {
          QMessageBox::information(nullptr, QObject::tr("erreur"),
                            QObject::tr("Vérifier vos champs.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      else
   {
        droit_acces d(code,libelle);
          bool test=d.Ajouter_droit();
      if(test)
      {



          QMessageBox::information(nullptr, QObject::tr("droit un utilisateur"),
                            QObject::tr("droit ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);
   }


}
}

void Login::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void Login::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->aff_droitutilisateur->setModel(tmputilisateur.afficher_droitutilisateur());
}

void Login::on_tri_clicked()
{
        Utilisateur u;
        /*QString critere=ui->cb_historique->currentText();*/
            QString mode;
             if (ui->id_asc->isChecked()==true)
        {
                 ui->tab_affiche->setModel(u.trie_id_asc());


       }
             else if(ui->id_des->isChecked()==true)

                { ui->tab_affiche->setModel(u.trie2_id_des());}

             else if(ui->nom_asc->isChecked()==true)

             {ui->tab_affiche->setModel(u.trie_nom_asc());}

             else if(ui->nom_desc->isChecked()==true)

             {ui->tab_affiche->setModel(u.trie2_nom_des());}

             else if(ui->role_asc->isChecked()==true)

             {ui->tab_affiche->setModel(u.trie_role_asc());}

             else if(ui->role_desc->isChecked()==true)

             {ui->tab_affiche->setModel(u.trie2_role_des());}
}

void Login::on_recherche_clicked()
{
    Utilisateur u;
        QString text;
        if (ui->radio_id->isChecked()==true)
    {
    text=ui->rech_line->text();
         if(text == "")

         {

             ui->tab_affiche->setModel(u.afficher_utilisateur());

         }

         else

         {



             ui->tab_affiche->setModel(u.chercher_ut(text));

         }
        }
         if(ui->radio_role->isChecked()==true)
        {
            text=ui->rech_line->text();
                 if(text == "")

                 {

                     ui->tab_affiche->setModel(u.afficher_utilisateur());

                 }

                 else

                 {



                     ui->tab_affiche->setModel(u.chercher_ut1(text));

                 }

        }
         else if     (ui->radio_nom->isChecked()==true)
         {

             text=ui->rech_line->text();
                  if(text == "")

                  {

                      ui->tab_affiche->setModel(u.afficher_utilisateur());

                  }

                  else

                  {



                      ui->tab_affiche->setModel(u.chercher_ut2(text));

                  }
}}

void Login::on_Supp_droitut_clicked()
{
    int row =ui->aff_droitutilisateur->selectionModel()->currentIndex().row();
    QString id=ui->aff_droitutilisateur->model()->index(row,0).data().toString();

    bool test =tmputilisateur.supprimer_droit_utilisateur(id);
    if(row==-1)
    { QMessageBox::critical(nullptr, QObject::tr("Supprimer un droit"),
                            QObject::tr("Erreur ! selectionnez droit que vous voulez le supprimer !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
    else
    {
    if(test)
    {
        ui->aff_droitutilisateur->setModel(tmputilisateur.afficher_droitutilisateur());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un droit"),
                    QObject::tr("droit  supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
                ui->aff_droitutilisateur->setModel(tmputilisateur.afficher_droitutilisateur());

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un droit"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void Login::on_pushButton_6_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
   int row =ui->tab_affiche->selectionModel()->currentIndex().row();
   QString id=ui->tab_affiche->model()->index(row,0).data().toString();
   ui->line_id->setText(id);
   ui->AJT_DROIT->setModel(tmpdroit_u.afficher_droit_1(id));

}

void Login::on_ajoute_droit_3_clicked()
{
    Utilisateur u;
      QString Code_droit=ui->codedroit_inscri_3->text();
      QString id=ui->line_id->text();

          bool test=u.affecter_nvdroit(Code_droit,id);
      if(test)
      {

          QMessageBox::information(nullptr, QObject::tr("Ajouter un droit"),
                            QObject::tr("droit ajoutée.\n"
                                        "Cliquez sur  cancel Pour Quitter."), QMessageBox::Cancel);

   }
 ui->AJT_DROIT->setModel(tmpdroit_u.afficher_droit_1(id));
}

void Login::on_liste_droit_3_currentIndexChanged(const QString &arg2)
{
    QString nom=arg2;
     QSqlQuery qry;
     qry.prepare("select CODE_DROIT from DROITS_ACCES where LIBELLE_DROIT =:nom");
     qry.bindValue(":nom", nom);
 if(qry.exec())
 {while(qry.next())
     {

     ui->codedroit_inscri_3->setText(qry.value(0).toString());
 }
 }
}


void Login::on_pushButton_7_clicked()
{

    QTableView *table;
            table = ui->tab_affiche;

            QString filters("CSV files (.csv);;All files (.*)");
            QString defaultFilter("CSV files (*.csv)");
            QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                               filters, &defaultFilter);
            QFile file(fileName);

            QAbstractItemModel *model =  table->model();
            if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                QTextStream data(&file);
                QStringList strList;
                for (int i = 0; i < model->columnCount(); i++) {
                    if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                        strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                    else
                        strList.append("");
                }
                data << strList.join(";") << "\n";
                for (int i = 0; i < model->rowCount(); i++) {
                    strList.clear();
                    for (int j = 0; j < model->columnCount(); j++) {

                        if (model->data(model->index(i, j)).toString().length() > 0)
                            strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                        else
                            strList.append("");
                    }
                    data << strList.join(";") + "\n";
                }
                file.close();
                QMessageBox::information(nullptr, QObject::tr("Export excel"),
                                          QObject::tr("Export avec succes .\n"
                                                      "Click OK to exit."), QMessageBox::Ok);
            }

}
