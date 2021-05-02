#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QSortFilterProxyModel>
#include <QAbstractSocket>//mail

#include "produit.h"
#include "stock.h"
#include "transaction.h"
#include "evaluation.h"
#include "plat.h"
#include "menu.h"
#include "table.h"
#include "commande.h"
#include "smtp.h"
#include "fournisseur.h"
#include "offrefournisseur.h"
#include "commandefournisseur.h"
#include "notification.h"

#include <QMap>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtWidgets/QGridLayout>

#include "produit.h"
#include "stock.h"
#include "transaction.h"
#include "evaluation.h"
#include "plat.h"
#include "menu.h"
#include "table.h"
#include "commande.h"
#include "smtp.h"
#include "smtp.h"
#include "stat.h"
#include<QAbstractSocket>
#include "fournisseur.h"
#include "offrefournisseur.h"
#include "commandefournisseur.h"
#include "statstock.h"
#include "arduino.h"

#include <QDebug>
#include "connection.h"

#include <string>
#include <QSqlQuery>
#include <QTableView>
#include <QLabel>
#include <QDate>
#include <QtWidgets/QMessageBox>
#include <QMainWindow>
#include <QCalendarWidget>

#include <QPixmap>
#include <QMediaPlayer>
#include <QMovie>
#include <QSsl>
#include <QSslSocket>
#include <QNetworkAccessManager>
#include <QPrinter>
#include <QFileDialog>
#include <QSystemTrayIcon>
#include <QIcon>
#include <QDesktopWidget>
#include <QTimer>


#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

#include <QFileDialog>

#include <QPlainTextEdit>
#include <QPropertyAnimation>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)

{
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }

    ui->setupUi(this);
     ui->lineEdit_28->setValidator(new QIntValidator(0,99999999,this));
      ui->lineEdit_33->setValidator(new QIntValidator(0,99999999,this));


            mSystemTrayIcon = new QSystemTrayIcon(this);
            mSystemTrayIcon->setIcon(QIcon("C:/Users/PC/Desktop/ProjetCppA23G2/Projet/ProjetCpp/hat.png"));
            mSystemTrayIcon->setVisible(true);


    media = new QMediaPlayer (this);
    media->setMedia( QUrl::fromLocalFile("C:/Users/PC/Desktop/ProjetCppA23G2/Projet/ProjetCpp/theme.mp3"));
    media->play();

    QPixmap pix150("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/koujniti_logo.png");
    QPixmap pix1("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/Calque 0.png");
    QPixmap pix2("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/stock.png");
    QPixmap pix3("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/cash.png");
    QPixmap pix4("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/icons8-face-id-32.png");
    QPixmap pix5("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/stars.png");
    QPixmap pix6("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/cor.png");
    QPixmap pix7("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/modi.png");
    QPixmap pix8("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/mui.png");
    QPixmap pix9("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/icons8-search-client-48.png");
    QPixmap pix10("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/casic.png");
    QPixmap pix11("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/food.png");
    QPixmap pix12("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/table.png");
    QPixmap pix13("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/prod.png");
    QPixmap pix14("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/prov.png");


     setFixedSize(1296,880);  //fixe la taille de la fenêtre


     myMoviebg = new QMovie(this);
     myMoviebg = new QMovie("C:/Users/PC/Desktop/ProjetCppA23G2/ProjetCpp/gif.gif");

       ui->gif->setMovie(myMoviebg);

    myMoviebg->start();

    ui->label_94->setToolTip("Music");
    ui->label_5->setPixmap(pix150);
    ui->label_3->setPixmap(pix1);
    ui->label_28->setPixmap(pix2);
    ui->label_34->setPixmap(pix2);
    ui->label_85->setPixmap(pix3);
    ui->label_87->setPixmap(pix3);
    ui->label_851->setPixmap(pix3);
    ui->label_841->setPixmap(pix5);
    ui->label_42->setPixmap(pix4);
    ui->label_84->setPixmap(pix5);
    ui->label_89->setPixmap(pix5);
    ui->label_90->setPixmap(pix4);
    ui->label_48->setPixmap(pix6);
    ui->label_91->setPixmap(pix6);
    ui->label_92->setPixmap(pix7);
    ui->label_93->setPixmap(pix7);
    ui->label_94->setPixmap(pix8);
    ui->label_95->setPixmap(pix6);
    ui->label_27->setPixmap(pix9);
    ui->label_96->setPixmap(pix9);
    ui->label_97->setPixmap(pix10);
    ui->label_98->setPixmap(pix11);
    ui->label_99->setPixmap(pix12);
    ui->label_100->setPixmap(pix13);
    ui->label_101->setPixmap(pix14);


   // ui->label_28->setPixmap(pix2.scaled(100,100,Qt::KeepAspectRatio));

    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));


     produit test;
    ui->tableView_A->setModel(test.afficher()); //Afficher Produit
    //ui->tableView_A->setModel(test.tri(ui->tableView_A->currentIndex().column()));

   stock test1;
   ui->tableView_B->setModel(test1.afficher_stock());//Afficher Stock
   //ui->tableView_B->setModel(test1.tri(ui->tableView_B->currentIndex().column()));

   /*animation = new QPropertyAnimation(ui->msg, "geometry");
           animation->setDuration(10000);*/
//-----------------------------------AHMED AFFICHAGE----------------------------------------------------

  Transaction test3;
  Evaluation test4;
  ui->tableView_2->setModel(test3.afficher());
  ui->tableView->setModel(test4.afficher());

  QSqlQueryModel *modelF=new QSqlQueryModel();
  QSqlQuery qryF;
  qryF.prepare("select ID_FOURNISSEUR from FOURNISSEUR");
  qryF.exec();
  modelF->setQuery(qryF);
  ui->comboF->setModel(modelF);
//------------------------------Mariem-------------------------------------------
  //ui->cadre_time->setPixmap(pix150);
  QTimer * timer = new QTimer(this);
  connect(timer ,SIGNAL(timeout()),this,SLOT(showTime()));
  timer->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//---------------------------------------------------~MENU PRINCIPALE~----------------------------------------------------

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_8_clicked(){

    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

//--------------------------------~PRODUIT~----------------------------------------------

void MainWindow::on_Afficher_Produit_clicked()//afficher Stock
{
    produit p;
        ui->tableView_A->setModel(p.afficher());
}

void MainWindow::on_pushButton_clicked()//Ajouter Produit
{
    produit p;

    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->comboBox_3->currentText());

    //p.ajouter();
    ui->tableView_A->setModel(p.afficher());

    bool test= p.ajouter();

                if(test){
                    QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

                else

                    QMessageBox::critical(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);

}

void MainWindow::on_pushButton_6_clicked()//suuprimer Produit
{
    produit p;
    QMessageBox msgBox;
    p.setID_PRODUIT(ui->textDelete_2->text().toInt());
    if(p.check()==0){
    bool test =p.supprimer(p.getID_PRODUIT());

      if(test)
         {msgBox.setText("supression avec succés");
             ui->tableView_A->setModel(p.afficher());
            }}
      else
        msgBox.setText("Vérifier l'ID à supprimer");
    msgBox.exec();

}

void MainWindow::on_tableView_A_doubleClicked() // modifier produit depuis l'affichage
{

    int row =ui->tableView_A->selectionModel()->currentIndex().row();
    //ui->stackedWidget->setCurrentIndex(2);
    ui->lineEdit->setText(ui->tableView_A->model()->index(row,0).data().toString());
    ui->textDelete_2->setText(ui->tableView_A->model()->index(row,0).data().toString());
    ui->comboBox_3->setCurrentText(ui->tableView_A->model()->index(row,2).data().toString());
    ui->lineEdit_2->setText(ui->tableView_A->model()->index(row,1).data().toString());

}
void MainWindow::on_pushButton_4_clicked()//modifier produit
{

    produit p;

       p.setID_PRODUIT(ui->lineEdit->text().toUInt());
               if(p.check()==0)
     {
                   p.setNOM_PRODUIT(ui->lineEdit_2->text());
                   p.setCATEGORIE_PRODUIT(ui->comboBox_3->currentText());
    p.update();
      ui->tableView_A->setModel(p.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
               else {   QMessageBox::information(nullptr,QObject::tr("erreur"),QObject::tr("impossible de modifier un produit qui n'existe pas "),  QMessageBox::Cancel); }


           ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            ui->comboBox_3->setCurrentText("");

}

void MainWindow::on_TRI_clicked()//tri Produit
{
        produit p;

      //ui->tableView_A->setModel(p.tri(ui->tableView_A->currentIndex().column()));

         QTableView *table=ui->tableView_A;

               if(ui->choixTrie->currentIndex() == 0)
                 { p.tri(table);
               // ui->listeCitoyen->setModel(c.afficherCitoyen());

               }

               if(ui->choixTrie->currentIndex() == 1)
                 { p.tri1(table);
                //ui->listeCitoyen->setModel(c.afficherCitoyen());
               }
               if(ui->choixTrie->currentIndex() == 2)
                 { p.tri2(table);
                //ui->listeCitoyen->setModel(c.afficherCitoyen());
               }
}

/*void MainWindow::on_tableView_A_clicked()//rechercher un produit
{
    QString findText;
        QString text = ui->recherche_produit_2->text();
    produit p;
    QTableView* table=ui->tableView_A;


            findText = text;
            p.rechercher(table,findText);


            //QMessageBox::information(this, tr("Empty Field"),
                //tr("Entrez l'ID a rechercher."));
            ui->tableView_A->setModel(p.afficher());

}*/

void MainWindow::on_recherche_produit_clicked()//rechercher un produit
{//
    produit p;
     QString textA;
     int textB;
     QTableView* table1=ui->tableView_A;

     if(ui->produit2->isChecked()==true)
    {
        textA=ui->recherche_produit_2->text();
             if(textA == "")

             {
  ui->tableView_A->setModel(p.afficher());
             }

             else
             {
  ui->tableView_A->setModel(p.rechercher_cr1(textA));
              }
             if (textA.isEmpty()) {
                           QMessageBox::information(this, tr("Empty Field"),
                               tr("Entrez une specialité a rechercher."));}


    }

      if(ui->produit3->isChecked()==true)
     {
         textA=ui->recherche_produit_2->text();
              if(textA == "")

              {
   ui->tableView_A->setModel(p.afficher());
              }

              else

              {
   ui->tableView_A->setModel(p.rechercher_cr2(textA));
               }
              if (textA.isEmpty()) {
                            QMessageBox::information(this, tr("Empty Field"),
                                tr("Entrez une specialité a rechercher."));}


     }
      if (ui->produit1->isChecked()==true)
  {
  textB=ui->recherche_produit_2->text().toUInt();
  p.rechercher_cr3(table1,textB);
  }

}


//---------------------------------~STOCK~----------------------------------------------

//mail debut
void   MainWindow::sendMail()
{

    Smtp* smtp = new Smtp("mariem.nacib@esprit.tn","191JFT2771", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    /*if( !files.isEmpty() )
        smtp->sendMail("mariem.nacib@esprit.tn", ui->rcpt->currentText() , ui->subject->text(),ui->msg->toPlainText(), files );
    else*/
        smtp->sendMail("mariem.nacib@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   MainWindow::mailSent(QString)
{

    /*if(status == "Message sent")
       QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    {
        ui->msg->setPlainText("Email sent!") ;
        animation->setDuration(1000);
        animation->setStartValue(ui->msg->geometry());
        animation->setEndValue(QRect(200,200,100,50));
        animation->start();
    }*/
    ui->rcpt->clear();
    ui->subject->clear();
    //ui->file->clear();
    ui->msg->clear();
    ui->paswd->clear();
}
//mail fin

void MainWindow::on_Afficher_Stock_clicked()//afficher Stock
{
    stock s;
        ui->tableView_B->setModel(s.afficher_stock());
}

void MainWindow::on_pushButton_3_clicked()//Ajouter Stock
{
    stock s;

    s.setCATEGORIE_STOCK(ui->comboBox->currentText());
    s.setTEMPERATURE(ui->spinBox->text().toInt());
    s.setEMPLACEMENT(ui->comboBox_2->currentText());
    s.setDATE_STOCK(ui->calendarWidget->selectedDate());
    s.setQUANTITE(ui->lineEdit_22->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_23->text().toInt());

    //s.ajouter_stock();
    ui->tableView_B->setModel(s.afficher_stock());

    bool test= s.ajouter_stock();
//-------------------Notification
notification no;

                ui->tableView_B->setModel(s.afficher_stock());

                if(test){

                    QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

                else

                    QMessageBox::critical(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);


    if (s.getQUANTITE() > 500)
    {
        no.stock_exces();
    Smtp* smtp = new Smtp("mariem.nacib@esprit.tn", "191JFT2771", "smtp.gmail.com", 465);

         smtp->sendMail("mariem.nacib@esprit.tn", "mahmoud.cheikh@esprit.tn", "STOCK LIMITE", "vous ne pouvez pas stocker plus de 500 produits dans la catégorie '"+s.getCATEGORIE_STOCK()+"'");
          QMessageBox::information(this,"message envoyee", "stock saturé verifier votre mail");//fonctionne
    }
    if (s.getQUANTITE() < 50)
    {
        no.stock_manquant();
   Smtp* smtp = new Smtp("mariem.nacib@esprit.tn", "191JFT2771", "smtp.gmail.com", 465);

         smtp->sendMail("mariem.nacib@esprit.tn", "mahmoud.cheikh@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits dans la catégorie '"+s.getCATEGORIE_STOCK()+"'");
          QMessageBox::information(this,"message envoyee", "stock manquant verifier votre mail");/// fonctionne
    }

 //--------------------------------------------------------------HISTORIQUE-------------------------


    QString textajouter;

if ( s.getCATEGORIE_STOCK() =="" || s.getQUANTITE() == 0 || s.getID_STOCK() ==0 )
{
    qDebug () <<"problem d ajout dans le base ";
          QMessageBox::critical(this,"Enregister","les valeurs sont null");
}
else
{
       if (test)
        {

         qDebug () <<"data ajoutés dans la base avec succes";
               QMessageBox::information(this,"Enregister","success !! " );
        }
        else
        {
         qDebug () <<"problem d ajout dans le base ";
               QMessageBox::critical(this,"Enregister","erreur !! ");
        }
        QSqlQuery qry;
        qry.prepare("select * from STOCKAGE");
        int idS;
        if (qry.exec())
        {
            while (qry.next())
            {
                idS =qry.value(0).toInt();
            }
        }

        textajouter="L'ajout dans la base de donnees de id = "+QString::number(idS)+" a ete effectuee avec succees";
        s.write(textajouter);
       }
}



void MainWindow::on_pushButton_7_clicked()//suuprimer Stock
{
    stock s;
    QMessageBox msgBox;
    s.setID_STOCK(ui->textDelete->text().toUInt());
    if(s.check()==0){
    bool test =s.supprimer_stock(s.getID_STOCK());
notification no;
      if(test)
         {

          //-------------------Notification

          msgBox.setText("supression avec succés");
             ui->tableView_B->setModel(s.afficher_stock());
            }
      int idS;
      QString textajouter;
    //QModelIndex  modele =ui->tableView_B->currentIndex().sibling(ui->tableView_B->currentIndex().row(),0);
    QSqlQuery qry;
    qry.prepare("select * from STOCKAGE");
    if (qry.exec())
    {
        while (qry.next())
        {

idS =qry.value(0).toInt();
        }
    }
        //qDebug () << value;
    textajouter="L'suppresion dans la base de donnees de id = "+QString::number(idS)+" a ete effectuee avec succees";
     s.write(textajouter);
    }
      else
        msgBox.setText("Vérifier l'ID à supprimer");
    msgBox.exec();

}

void MainWindow::on_tableView_B_clicked()
{
}

void MainWindow::on_tableView_B_doubleClicked() // recuperer data du stockage depuis l'affichage
{
stock s;
QSqlQueryModel * modelS =s.afficher_stock();

QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(modelS);
    int row =ui->tableView_B->selectionModel()->currentIndex().row();
    ui->stackedWidget->setCurrentIndex(0);
    s.setID_STOCK(ui->lineEdit_21->text().toInt());

    ui->lineEdit_21->setText(ui->tableView_B->model()->index(row,0).data().toString());
    ui->textDelete->setText(ui->tableView_B->model()->index(row,0).data().toString());
    ui->id_consomme_2->setText(ui->tableView_B->model()->index(row,0).data().toString());
    ui->comboBox->setCurrentText(ui->tableView_B->model()->index(row,1).data().toString());
    ui->spinBox->setValue(ui->tableView_B->model()->index(row,2).data().toInt());
    ui->comboBox_2->setCurrentText(ui->tableView_B->model()->index(row,3).data().toString());
    ui->calendarWidget->setSelectedDate(ui->tableView_B->model()->index(row,4).data().toDate());
    ui->lineEdit_22->setText(ui->tableView_B->model()->index(row,5).data().toString());
    ui->quantite_consomme->setText(ui->tableView_B->model()->index(row,5).data().toString());
    ui->lineEdit_23->setText(ui->tableView_B->model()->index(row,6).data().toString());

    proxyModel->setSourceModel(modelS);
    ui->tableView_B->setSortingEnabled(true);
     ui->tableView_B->setModel(proxyModel);
    ui->tableView_B->setModel(s.afficher_stock());
}

void MainWindow::on_pushButton_5_clicked()//modifier Stock
{

    stock s;
       s.setID_STOCK(ui->lineEdit_21->text().toInt());
               if(s.check()==0)
     {
                   s.setCATEGORIE_STOCK(ui->comboBox->currentText());
                   s.setTEMPERATURE(ui->spinBox->text().toInt());
                   s.setEMPLACEMENT(ui->comboBox_2->currentText());
                   s.setDATE_STOCK(ui->calendarWidget->selectedDate());
                   s.setQUANTITE(ui->lineEdit_22->text().toInt());
                   s.setID_PRODUIT(ui->lineEdit_23->text().toInt());
    s.update_stock();
      ui->tableView_B->setModel(s.afficher_stock());
      notification no;
      no.notification_modifier();
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
               else {   QMessageBox::information(nullptr,QObject::tr("erreur"),QObject::tr("impossible de modifier un stock qui n'existe pas "),  QMessageBox::Cancel); }


           ui->lineEdit_21->setText("");
           ui->comboBox->setCurrentText("");
           //ui->spinBox->setText("");
           ui->comboBox_2->setCurrentText("");
           //ui->calendarWidget->setSelectedDate("");
           ui->lineEdit_22->setText("");
           ui->lineEdit_23->setText("");

}


void MainWindow::on_TRI_2_clicked()//tri stock
{
    stock s;

  //ui->tableView_B->setModel(s.tri(ui->tableView_B->currentIndex().column()));

   //QTableView* table=ui->tableView_B;
  //s.tri_quantite(table);

           QTableView *table=ui->tableView_B;

               if(ui->Trie->currentIndex() == 0)
                 { s.tri_id(table);
               //ui->tableView_B->setModel(s.afficher_stock());

               }

               if(ui->Trie->currentIndex() == 1)
                 { s.tri_quantite(table);
                //ui->tableView_B->setModel(s.afficher_stock());
               }
               if(ui->Trie->currentIndex() == 2)
                 { s.tri_etage(table);
                //ui->tableView_B->setModel(s.afficher_stock());
               }

}



void MainWindow::on_pushButton_43_clicked()//Afficher Stock
{
    stock s;
        ui->tableView_B->setModel(s.afficher_stock());
}


void MainWindow::on_rechercherStock_clicked()//recherche stock
{
    stock s;
            QString text;
            int text1;
            QTableView* table=ui->tableView_B;

             if (ui->radioButton->isChecked()==true)
         {
         text1=ui->rechercherStock_2->text().toUInt();
         s.rechercher_cr1(table,text1);

         }

             if(ui->radioButton_2->isChecked()==true)
            {
                text=ui->rechercherStock_2->text();
                     if(text == "")

                     {
                         ui->tableView_B->setModel(s.afficher_stock());

                     }

                     else

                     {
                         ui->tableView_B->setModel(s.rechercher_cr2(text));

                      }
                     if (text.isEmpty()) {
                                   QMessageBox::information(this, tr("Empty Field"),
                                       tr("Entrez une specialité a rechercher."));}

            }
             if (ui->radioButton_3->isChecked()==true)
         {
         text1=ui->rechercherStock_2->text().toUInt();
         s.rechercher_cr3(table,text1);

         }

}
void MainWindow::on_PDF_STOCK_clicked()//PDF STOCK
{
    QString str;
                 str.append("<html><head></head><body>"
                            "<center><img src=\"C:/Users/PC/Desktop/ProjetSmartRestaurant2A23/ProjetCppA23G2/Projet/ProjetCpp/koujinti.png\"><br><br><br>"
                            "<center>"+QString("Les Donnée du Stockage"));
                 str.append("<table border=1><tr>") ;
                 str.append("<td>"+QString("ID_STOCK")+"</td>") ;
                 str.append("<td>"+QString("CATEGORIE_STOCK")+"</td>") ;
                 str.append("<td>"+QString("TEMPERATURE")+"</td>") ;
                 str.append("<td>"+QString("EMPLACEMENT")+"</td>") ;
                 str.append("<td>"+QString("DATE_STOCK")+"</td>") ;
                 str.append("<td>"+QString("QUANTITE")+"</td>") ;
                 //str.append("<td>"+QString("ID_PRODUIT")+"</td>") ;


                 QSqlQuery* query=new QSqlQuery();
                 query->exec("SELECT * FROM STOCKAGE");

                 while(query->next())
                 {
                 str.append("<tr><td>");
                 str.append(query->value(0).toString()) ;
                 str.append("</td><td>") ;
                 str.append(query->value(1).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(2).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(3).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(4).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(5).toString());
                 str.append("</td></td>");
                 }
              str.append("</table></center></body></html>") ;

              QPrinter printer ;
              printer.setOrientation(QPrinter::Portrait);
              printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setPaperSize(QPrinter::A4) ;

              QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

              if (path.isEmpty()) return ;
              printer.setOutputFileName(path) ;

              QTextDocument doc;
              doc.setHtml(str) ;
              doc.print(&printer);
}
void MainWindow::on_statis_clicked()
{
    statStock *s = new statStock();
    s->show();

}

void MainWindow::on_historique_clicked()
{
    stock s;
    ui->tableView_B->setModel(s.afficher_stock());

    ui->textBrowser->show();
    ui->textBrowser->setPlainText(s.read());
    //myMovie->stop();
    ui->historique->setIcon(QIcon("C:/Users/PC/Desktop/ProjetSmartRestaurant2A23/ProjetCppA23G2/Projet/ProjetCpp/hat.png"));

}



void MainWindow::setButtonIcon()// icon historique
{
    ui->historique->setIcon(QIcon(myMoviebg->currentPixmap()));
}

void MainWindow::showTime()//TIMER
{
QTime time = QTime::currentTime();
QString time_text=time.toString("hh : mm : ss");
ui->Time->setText(time_text);

}
void MainWindow::on_consommer_clicked()//CONSOMMER UNE QUANTITE
{
    stock s;

       s.setID_STOCK(ui->id_consomme_2->text().toInt());

       double number=(ui->quantite_consomme->text().toDouble());
       double d=(ui->lineEdit_22->text().toDouble());
       d-=number;
 QString stringInt = QString::number(d);
 ui->hidden->hide();
        ui->hidden->setText(stringInt);

                   s.setCATEGORIE_STOCK(ui->comboBox->currentText());
                   s.setTEMPERATURE(ui->spinBox->text().toInt());
                   s.setEMPLACEMENT(ui->comboBox_2->currentText());
                   s.setDATE_STOCK(ui->calendarWidget->selectedDate());
                   s.setQUANTITE(ui->hidden->text().toDouble());
                   s.setID_PRODUIT(ui->lineEdit_23->text().toInt());
    s.update_stock();
      ui->tableView_B->setModel(s.afficher_stock());
      //    mail + historique
notification no;
int idS;
QString textajouter;
      if (s.getQUANTITE() < 50)
      {
          no.stock_manquant();
     Smtp* smtp = new Smtp("mariem.nacib@esprit.tn", "191JFT2771", "smtp.gmail.com", 465);

           smtp->sendMail("mariem.nacib@esprit.tn", "mariem.nacib@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits dans la categorie '"+s.getCATEGORIE_STOCK()+"'");
           QMessageBox::information(nullptr,QObject::tr("Consommation abuse"),QObject::tr("Le stock est moins de 50! "),  QMessageBox::Cancel);
      }

      QSqlQuery qry;
      qry.prepare("select * from STOCKAGE");

     if (qry.exec())
     {


         while(qry.next())
         {
             idS = qry.value(1).toInt();
             //mSystemTrayIcon->showMessage("alerte", "quantite nulle", QSystemTrayIcon::Critical, 10000);
         //mSystemTrayIcon->show();
         }
         textajouter="La consommation de la quantite de stock de "+QString::number(number)+" produits a ete effectuee et sauvegarde avec succees";
         s.write(textajouter);
         }
}



//--------------------------------------------~MUSIC_PLAY~-------------------------------------------------------

void MainWindow::on_play_clicked()
{
    media->play() ;
}

void MainWindow::on_pause_clicked()
{
    media->pause();
}

void MainWindow::on_mute_clicked()
{
    media->setMuted(true);
}
//------------------------------------------------~AHMED~----------------------------------------------------------------
void MainWindow::on_pushButton_12_clicked()//Ajouter Transaction
{
    Transaction t;

    t.setNOM_CLIENT(ui->lineEdit_3->text());
    t.setNUM_CLIENT(ui->lineEdit_4->text());
    t.setADRESSE_CLIENT(ui->comboBox_4->currentText());
    t.setDATE_HEURE(ui->dateTimeEdit_2->date());
    t.setPRIX(ui->lineEdit_5->text().toInt());
    t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

        bool test= t.ajouter();


            ui->tableView_2->setModel(t.afficher());

            if(test){
                QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

            else

                QMessageBox::critical(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);
        }


void MainWindow::on_pushButton_14_clicked()//Supprimer Transaction
{
    Transaction Transaction(ui->textDelete_3->text().toUInt());
    bool test= Transaction.supprimer();


    ui->tableView_2->setModel(Transaction.afficher());


    if(test){
        QMessageBox::information(nullptr,QObject::tr("Supprimer"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
    else if(test!=Transaction.supprimer())
        QMessageBox::critical(nullptr,QObject::tr("Supprimer"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);
}


void MainWindow::on_pushButton_13_clicked() // ModifierTransaction
{

    Transaction t;

      t.setID_FACTURE(ui->textEdit_2->text().toInt());
      t.setNOM_CLIENT(ui->lineEdit_3->text());
      t.setNUM_CLIENT(ui->lineEdit_4->text());
      t.setADRESSE_CLIENT(ui->comboBox_4->currentText());
      t.setDATE_HEURE(ui->dateTimeEdit_2->date());
      t.setPRIX(ui->lineEdit_5->text().toInt());
      t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

      bool test= t.update();


      ui->tableView_2->setModel(t.afficher());

      if(test){
          QMessageBox::information(nullptr,QObject::tr("Modifier  Facture"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
      else

          QMessageBox::critical(nullptr,QObject::tr("Modifier  Facture"),QObject::tr("Modfication non effectuée"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_40_clicked()// trier Transaction
{
    Transaction t;
       QTableView* table=ui->tableView_2;
      t.trie(table);

}

void MainWindow::on_pushButton_58_clicked()// tri2 Transaction
{
    Transaction t;
       QTableView* table=ui->tableView_2;
      t.tri1(table);

}


void MainWindow::on_pushButton_59_clicked() // Tri Par Facture Trans
{
    Transaction t;
       QTableView* table=ui->tableView_2;
      t.tri2(table);
}


void MainWindow::on_rechercher_clicked()//Rechercher Transaction
{
    QString findText;
          QString text = ui->lineEdit_6->text();
      Transaction t;
      QTableView* table=ui->tableView_2;
          if (text.isEmpty()) {
              QMessageBox::information(this, tr("Empty Field"),
                  tr("Entrez une specialité a rechercher."));
              ui->tableView_2->setModel(t.afficher());
              return;
          } else {
              findText = text;
              t.recherche1(table,findText.toUInt());


  }
  }

void MainWindow::on_pushButton_41_clicked() //Afficher Les Factures
{
    Transaction t;
        ui->tableView_2->setModel(t.afficher());

}

void MainWindow::on_rechercher_3_clicked() // Recherche Par Nom
{
    QString findText;
        QString text = ui->lineEdit_41->text();
    Transaction t;
    QTableView* table=ui->tableView_2;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView_2->setModel(t.afficher());
            return;
        } else {
            findText = text;
            t.recherche2(table,findText);


}
}


void MainWindow::on_rechercher_4_clicked() // Recherche Par Region
{
    QString findText;
        QString text = ui->lineEdit_42->text();
    Transaction t;
    QTableView* table=ui->tableView_2;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView_2->setModel(t.afficher());
            return;
        } else {
            findText = text;
            t.recherche3(table,findText);


}
}



/*void MainWindow::on_rechercher_4_clicked() // Recherche Par Region
{
    QString findText;
        QString text = ui->lineEdit_42->text();
    Transaction t;
    QTableView* table=ui->tableView_2;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView_2->setModel(t.afficher());
            return;
        } else {
            findText = text;
            t.recherche3(table,findText);


}
}*/



void MainWindow::on_pushButton_42_clicked() // PDF
 {
    QString str;
                 str.append("<html><head></head><body><center>"+QString("Les Factures Du Caisse"));
                 str.append("<table border=1><tr>") ;
                 str.append("<td>"+QString("ID_FACTURE")+"</td>") ;
                 str.append("<td>"+QString("NOM_CLIENT")+"</td>") ;
                 str.append("<td>"+QString("NUM_CLIENT")+"</td>") ;
                 str.append("<td>"+QString("ADRESSE_CLIENT")+"</td>") ;
                 str.append("<td>"+QString("DATE_HEURE")+"</td>") ;
                 str.append("<td>"+QString("PRIX")+"</td>") ;
                 str.append("<td>"+QString("ID_UTLISATEUR")+"</td>") ;




                 QSqlQuery* query=new QSqlQuery();
                 query->exec("SELECT * FROM TRANSACTION");

                 while(query->next())
                 {
                 str.append("<tr><td>");
                 str.append(query->value(0).toString()) ;
                 str.append("</td><td>") ;
                 str.append(query->value(1).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(2).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(3).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(4).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(5).toString());
                 str.append("</td></td>");
                 str.append(query->value(6).toString());
                 str.append("</td></td>");


                 }
              str.append("</table></center></body></html>") ;

              QPrinter printer ;
              printer.setOrientation(QPrinter::Portrait);
              printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setPaperSize(QPrinter::A4) ;

              QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

              if (path.isEmpty()) return ;
              printer.setOutputFileName(path) ;

              QTextDocument doc;
              doc.setHtml(str) ;
              doc.print(&printer);
}
//-----------------------------------~Evaluation~--------------------------------------
void MainWindow::on_pushButton_16_clicked()//Ajouter Evaluation
{
    Evaluation e(ui->lineEdit_8->text(), ui->comboBox_5->currentText().toUInt(),
                  ui->comboBox_6->currentText(),ui->lineEdit_9->text().toUInt());


        bool test= e.ajouter();

            ui->tableView->setModel(e.afficher());


            if(test){
                QMessageBox::information(nullptr,QObject::tr("Ajouter Eva"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}
            else

                QMessageBox::critical(nullptr,QObject::tr("Ajouter Eva"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_18_clicked()//Supprimer Evaluation
{
    Evaluation e(ui->textDelete_4->text().toUInt());
    bool test = e.supprimer();

    ui->tableView->setModel(e.afficher());


    if(test){
        QMessageBox::information(nullptr,QObject::tr("Supprimer Eva"),QObject::tr("Supp effectuée"),  QMessageBox::Cancel);}
    else

        QMessageBox::critical(nullptr,QObject::tr("Supprimer Eva"),QObject::tr("Supp non effectuée"),  QMessageBox::Cancel);}



void MainWindow::on_pushButton_17_clicked() // Modifier Evaluation
{

    Evaluation e;

      e.setID_NOTE(ui->textEdit_4->text().toInt());
      e.setNOM_CLIENT(ui->lineEdit_8->text());
      e.setNOTE_CLIENT(ui->comboBox_5->currentText().toUInt());
      e.setREMARQUE_CLIENT(ui->comboBox_6->currentText());
      e.setID_FACTURE(ui->lineEdit_9->text().toInt());
      bool test = e.update();
      ui->tableView->setModel(e.afficher());
      if(test){
          QMessageBox::information(nullptr,QObject::tr("Supprimer Eva"),QObject::tr("Supp effectuée"),  QMessageBox::Cancel);
      }
      else
          QMessageBox::critical(nullptr,QObject::tr("Supprimer Eva"),QObject::tr("Supp non effectuée"),  QMessageBox::Cancel);
      if(test){
          QMessageBox::information(nullptr,QObject::tr("Modifier Eva"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
      else
          QMessageBox::critical(nullptr,QObject::tr("Modifier Eva"),QObject::tr("Modification non effectuée"),  QMessageBox::Cancel);
}



void MainWindow::on_rechercher_2_clicked() // Recherche Evaluation Par Button
{

             Evaluation e;

             QTableView* table=ui->tableView;
                QString text;
                int text1;

                if (ui->radioButton_4->isChecked()==true)
                        {

                        text1=ui->lineEdit_10->text().toUInt();

                                 ui->tableView->setModel(e.afficher());


                                 text1=ui->lineEdit_10->text().toUInt();
                                         e.rechercher1(table,text1);


                }

                 if(ui->radioButton_5->isChecked()==true)
                {
                    text=ui->lineEdit_10->text();
                         if(text == "")

                         {

                             ui->tableView->setModel(e.afficher());

                         }

                         else

                         {
                             ui->tableView->setModel(e.rechercher2(text));

                         }

                }
                 else if     (ui->radioButton_6->isChecked()==true)
                 {

                     text=ui->lineEdit_10->text();
                          if(text == "")

                          {
                              ui->tableView->setModel(e.afficher());

                          }

                          else

                          {
                              ui->tableView->setModel(e.rechercher3(text));

                          }
        }

    }




void MainWindow::on_rechercher_5_clicked()// Trier Evaluation
{
    Evaluation e;

    QTableView* table=ui->tableView;
       QString text;

       if(ui->radioButton_5->isChecked()==true)

      {
          e.tri1(table);
       }


       else if     (ui->radioButton_6->isChecked()==true)
       {

           e.tri2(table);
}

       else if     (ui->radioButton_4->isChecked()==true)
       {
        e.tri3(table);
}
}


void MainWindow::on_pushButton_57_clicked()
{
    Evaluation e;
        ui->tableView->setModel(e.afficher());
}

//-----------------------------------------AZIZ------------------------------------------------
void MainWindow::on_pushButton_21_clicked()//ajouter plat
{
    plat p(ui->lineEdit_16->text(), ui->lineEdit_17->text(),
         ui->lineEdit_18->text(),ui->lineEdit_19->text().toFloat(),ui->lineEdit_20->text().toUInt());
bool test=p.ajouter();
ui->tableView_2->setModel(p.afficher());

 if(test){
    QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

            else

     QMessageBox::critical(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);
        }

void MainWindow::on_pushButton_22_clicked()//modifier plat
{
    plat p;

     // p.setNOM_PLAT(ui->lineEdit7_2->text());
      p.setNOM_PLAT(ui->lineEdit_16->text());
      p.setINGREDIENTS_PLAT(ui->lineEdit_17->text());
      p.setSPECIALITE_PLAT(ui->lineEdit_18->text());
      p.setPRIX_PLAT(ui->lineEdit_19->text().toFloat());
      p.setID_MENU(ui->lineEdit_20->text().toUInt());
      bool test=p.modifier();
      ui->tableView_3->setModel(p.afficher());
      if(test){
          QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
      else

          QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Nom plat introuvable"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_23_clicked()//supprimer plat
{
    QSqlQuery query;
     plat p;
        plat plat(ui->textDelete_5->text());

  bool test=plat.supprimer();

        ui->tableView_3->setModel(plat.afficher());
        /* if(ui->textDelete_3->text()!=p.getNOM_PLAT()){
             QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);*/

        if(test){
 QMessageBox::information(nullptr,QObject::tr("Supprimer"),QObject::tr("suppression effectuée"),  QMessageBox::Cancel);}
     else
 QMessageBox::critical(nullptr,QObject::tr("Supprimer"),QObject::tr("suppression non effectuée"),  QMessageBox::Cancel);


}

void MainWindow::on_pushButton_27_clicked()//ajouter menu
{
    //QSqlQuery req;
    menu m;
    QDate d=QDate::currentDate();
  //req.prepare("INSERT INTO MENU VALUES(4,:DATE_MENU,:NOM_MENU,:CATEGORIE_MENU");
    m.setDATE_MENU(d);
    m.setNOM_MENU(ui->lineEdit_25->text());
    m.setCATEGORIE_MENU(ui->comboBox_7->currentText());
    /*req.bindValue(":DATE_MENU",m.getDATE_MENU());
    req.bindValue(":NOM_MENU",m.getNOM_MENU());
    req.bindValue(":CATEGORIE_MENU",m.getCATEGORIE_MENU());
    */
    ui->tableView_4->setModel(m.afficher());
    if(ui->lineEdit_25->text()!=0){
QMessageBox::information(nullptr,QObject::tr("AJOUT"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);
      m.ajouter();}

 else if(ui->lineEdit_25->text()==0)

QMessageBox::critical(nullptr,QObject::tr("AJOUT"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);

}

void MainWindow::on_pushButton_29_clicked()//supprimer menu
{
    QSqlQuery query;
    menu m;
       menu menu(ui->textDelete_6->text().toUInt());

      bool test= menu.supprimer();

      ui->tableView_4->setModel(menu.afficher());
       if(test){
           QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
       else

           QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_28_clicked()//modifier menu
{
    menu m;
   m.setID_MENU(ui->lineEdit7_3->text().toUInt());
   m.setDATE_MENU(ui->lineEdit_26->date());
   m.setNOM_MENU(ui->lineEdit_25->text());
   m.setCATEGORIE_MENU(ui->comboBox_7->currentText());
m.modifier();
  ui->tableView_4->setModel(m.afficher());

}

void MainWindow::on_pushButton_24_clicked()//rechercher plat
{
    plat p;
            QString text;
            int text1;
            QTableView* table=ui->tableView_3;
            if (ui->radioButton_7->isChecked()==true)
        {
        text=ui->lineEdit_24->text();
             if(text == "")

             {
        ui->tableView_3->setModel(p.afficher());
             }

             else

             {
      ui->tableView_3->setModel(p.chercher_ut(text));

             }
            }
             if(ui->radioButton_8->isChecked()==true)
            {
                text=ui->lineEdit_24->text();
                     if(text == "")

                     {
          ui->tableView_3->setModel(p.afficher());
                     }

                     else

                     {
          ui->tableView_3->setModel(p.chercher_ut1(text));
                      }

            }
             if (ui->radioButton_9->isChecked()==true)
         {
         text1=ui->lineEdit_24->text().toUInt();
         p.chercher_ut2(table,text1); }


}

void MainWindow::on_pushButton_25_clicked()//trier plat
{
    plat p;
            /*QString critere=ui->cb_historique->currentText();*/
                QString mode;
                 if (ui->tri_azizA->isChecked()==true)
            {
                     ui->tableView_3->setModel(p.tri());


            }
                 else if(ui->tri_azizB->isChecked()==true)

                     ui->tableView_3->setModel(p.tri2());
}

void MainWindow::on_pushButton_26_clicked()//reinitialiser plat
{ plat p;
    ui->tableView_3->setModel(p.afficher());
}
void MainWindow::on_afficher_menu_clicked()//afficher menu
{   menu m;
        ui->tableView_4->setModel(m.afficher());
}
void MainWindow::on_pushButton_30_clicked()//generation menu
{
    int text = ui->lineEdit_27->text().toUInt();
menu m;
plat p;
QTableView* table=ui->tableView_5;
QTableView* table1=ui->tableView_6;
        ui->tableView_5->setModel(m.afficher());
        m.recherche(table,text);
        p.recherche1(table1,text);

}

void MainWindow::on_tableView_3_clicked()//recuperation des données au niveau de modiff plat
{
    int row =ui->tableView_3->selectionModel()->currentIndex().row();
     //ui->stackedWidget->setCurrentIndex(2);
     ui->lineEdit_16->setText(ui->tableView_3->model()->index(row,0).data().toString());
     ui->lineEdit_17->setText(ui->tableView_3->model()->index(row,1).data().toString());
     ui->lineEdit_18->setText(ui->tableView_3->model()->index(row,2).data().toString());
      ui->lineEdit_19->setText(ui->tableView_3->model()->index(row,3).data().toString());
     ui->lineEdit_20->setText(ui->tableView_3->model()->index(row,4).data().toString());

}

void MainWindow::on_tableView_4_clicked()//recuperation donnée menu
{
    int row =ui->tableView_4->selectionModel()->currentIndex().row();
       //ui->stackedWidget->setCurrentIndex(2);
       ui->lineEdit7_3->setText(ui->tableView_4->model()->index(row,0).data().toString());
       ui->lineEdit_26->setDate(ui->tableView_4->model()->index(row,1).data().toDate());
       ui->lineEdit_25->setText(ui->tableView_4->model()->index(row,2).data().toString());
       ui->comboBox_7->setCurrentText(ui->tableView_4->model()->index(row,3).data().toString());

}
void MainWindow::on_PDF_aziz_clicked()//pdf
{
    QString str;
    int spec=ui->lineEdit_27->text().toUInt();
               str.append("<html><head></head><body><center>"+QString("LE MENU"));
               str.append("<table border=1><tr>") ;
               str.append("<td>"+QString("ID_MENU")+"</td>") ;
               str.append("<td>"+QString("DATE_MENU")+"</td>") ;
               str.append("<td>"+QString("NOM_MENU")+"</td>") ;
               str.append("<td>"+QString("CATEGORIE_MENU")+"</td>") ;

               QSqlQuery* query=new QSqlQuery();
               QSqlQuery* query1=new QSqlQuery();

               query->prepare("select * from MENU  where ID_MENU=:ID_MENU");
               query->bindValue(":ID_MENU",spec);
               query->exec();
               query1->prepare("select * from PLAT  where ID_MENU=:ID_MENU");
               query1->bindValue(":ID_MENU",spec);
               query1->exec();
               while((query->next()))
               {
               str.append("<tr><td>");
               str.append(query->value(0).toString()) ;
               str.append("</td><td>") ;
               str.append(query->value(1).toString());
               str.append("</td><td>") ;
               str.append(query->value(2).toString());
               str.append("</td><td>") ;
               str.append(query->value(3).toString());
               str.append("</td></td>") ;
               str.append(query->value(4).toString());
               str.append("</td></tr>") ;
               }

            str.append("</table></center></body></html>") ;

            str.append("<html><head></head><body><center>"+QString("PLATS"));
            str.append("<table border=1><tr>") ;
            str.append("<td>"+QString("NOM_PLAT")+"</td>") ;
            str.append("<td>"+QString("INGREDIENTS_PLAT")+"</td>") ;
            str.append("<td>"+QString("SPECIALITE_PLAT")+"</td>") ;
            str.append("<td>"+QString("PRIX_PLAT")+"</td>") ;
             str.append("<td>"+QString("ID_MENU")+"</td>") ;
             while((query1->next()))
             {
                 str.append("<tr><td>");
             str.append(query1->value(0).toString());
             str.append("</td><td>") ;
             str.append(query1->value(1).toString());
             str.append("</td><td>") ;
             str.append(query1->value(2).toString());
             str.append("</td><td>") ;
             str.append(query1->value(3).toString());
             str.append("</td><td>") ;
             str.append(query1->value(4).toString());
             str.append("</td></tr>") ;

             }
             str.append("</table></center></body></html>") ;

            QPrinter printer ;
            printer.setOrientation(QPrinter::Portrait);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setPaperSize(QPrinter::A4) ;

            QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

            if (path.isEmpty()) return ;
            printer.setOutputFileName(path) ;

            QTextDocument doc;
            doc.setHtml(str) ;
            doc.print(&printer);
}
void MainWindow::on_tri_aziz_1_clicked()//trier les plat par ID_MENU
{ plat p;
    p.trie(ui->tableView_3);

}
void MainWindow::on_tri_aziz_clicked()
{
    plat p;
        p.tri(ui->tableView_3);
}
//------------------------------------------FADWA--------------------------------------------------------------------
void MainWindow::on_pushButton_31_clicked()//AJOUTER TAB
{

 Table t(ui->lineEdit_28->text().toInt(), ui->lineEdit_29->text().toInt(),
        ui->comboBox_8->currentText(),ui->comboBox_9->currentText(),ui->lineEdit_30->text().toInt());
 if(t.check()==0)
 {QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("erreur"),  QMessageBox::Cancel); }
else{
t.ajouter();
ui->tableView_7->setModel(t.afficher());
QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectué"),  QMessageBox::Cancel);
    }
ui->lineEdit_28->setText("");
 ui->lineEdit_29->setText("");
 ui->comboBox_8->setCurrentText("");
 ui->comboBox_9->setCurrentText("");
 ui->lineEdit_30->setText("");

}

void MainWindow::on_pushButton_33_clicked()//supprimer table
{
    Table t1;
    QMessageBox msgBox;
    t1.setNUM_TABLE(ui->lineEdit_32->text().toInt());
    if(t1.check()==0){
    bool test =t1.supprimer(t1.get_NUM_TABLE());

      if(test)
         {msgBox.setText("supression avec succés");
             ui->tableView_7->setModel(t1.afficher());
            }}
      else
        msgBox.setText("numéro n'existe pas");
    msgBox.exec();

}

void MainWindow::on_pushButton_32_clicked()//modifier table
{

    Table t2;



        t2.setNUM_TABLE(ui->lineEdit_28->text().toInt());
               if(t2.check()==0)
     { t2.setNB_CHAISES(ui->lineEdit_29->text().toInt());
      t2.setEMPLACEMENT( ui->comboBox_8->currentText());
      t2.setDISPONIBILITE(ui->comboBox_9->currentText());
      t2.setDEBARRASSAGE(ui->lineEdit_30->text().toInt());
    t2.modifier();
      ui->tableView_7->setModel(t2.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
               else {   QMessageBox::information(nullptr,QObject::tr("erreur"),QObject::tr("impossible de modifier une table qui n'existe pas "),  QMessageBox::Cancel); }


           ui->lineEdit_28->setText("");
            ui->lineEdit_29->setText("");
            ui->comboBox_8->setCurrentText("");
            ui->comboBox_9->setCurrentText("");
            ui->lineEdit_30->setText("");

    }


void MainWindow::on_pushButton_37_clicked()//AJOUTER COMMANDE
{
    Commande c(ui->lineEdit_33->text().toUInt(), ui->lineEdit_38->text().toUInt(),
        ui->lineEdit_37->text(),ui->lineEdit_36->text(),ui->lineEdit_35->text().toFloat(),ui->lineEdit_34->text().toUInt());
if(c.check()==0 )
{QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("cette commande existe déjà"),  QMessageBox::Cancel); }
else if(c.check_tab()==0)
{QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("cette table est déjà associée à une commande"),  QMessageBox::Cancel); }
  else if(c.check_tabcom()!=0)
{QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("impossible d'associer cette commande a une table qui  n'existe pas !"),  QMessageBox::Cancel);}
else { c.ajouter();
ui->tableView_8->setModel(c.afficher());
QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectué"),  QMessageBox::Cancel);}
ui->lineEdit_33->setText("");
ui->lineEdit_38->setText("");
ui->lineEdit_37->setText("");
ui->lineEdit_36->setText("");
ui->lineEdit_35->setText("");
ui->lineEdit_34->setText("");

}

void MainWindow::on_pushButton_39_clicked()//SUPPRIMER UNE COMMANDE
{
    Commande c1;
    QMessageBox msgBox;
    c1.setID_COMMANDE(ui->lineEdit_40->text().toInt());
    if(c1.check()==0){
    bool test =c1.supprimer(c1.get_ID_COMMANDE());

      if(test)
         {msgBox.setText("supression avec succés");
             ui->tableView_8->setModel(c1.afficher());
            }}
      else
        msgBox.setText("ID n'existe pas");
    msgBox.exec();
}

void MainWindow::on_pushButton_38_clicked()//modifier commande
{


    Commande c2;

     c2.setID_COMMANDE(ui->lineEdit_33->text().toUInt());
     if(c2.check()==0)
     { c2.setQUANTITE(ui->lineEdit_38->text().toUInt());
      c2.setLIBELLE(  ui->lineEdit_37->text());
      c2.setDESCRIPTION( ui->lineEdit_36->text());
      c2.setPRIX(ui->lineEdit_35->text().toFloat());
      c2.setNUM_TABLE(ui->lineEdit_34->text().toUInt());
    c2.modifier();
      ui->tableView_8->setModel(c2.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
     else {   QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("impossible de modifier une commande qui n'existe pas"),  QMessageBox::Cancel); }
     ui->lineEdit_33->setText("");
     ui->lineEdit_38->setText("");
     ui->lineEdit_37->setText("");
     ui->lineEdit_36->setText("");
     ui->lineEdit_35->setText("");
     ui->lineEdit_34->setText("");
}




void MainWindow::on_pushButton_34_clicked()//trier par num
{
    Table t;
    QTableView* table=ui->tableView_7;
    t.tri_Num(table);
}

void MainWindow::on_pushButton_35_clicked()//trier par nbr chaises
{
    Table t;
    QTableView* table=ui->tableView_7;
    t.tri_NB(table);
}

void MainWindow::on_pushButton_36_clicked()//chercher table
{
    QString NUM_TABLE;
    QString find =ui->find->text();
Table t;
    QTableView* table=ui->tableView_7;
    t.setNUM_TABLE(ui->find->text().toInt());
        if (t.check()==0) {
            /*QMessageBox::information(this, tr("Empty Field"),
                tr("Entr//."));
            ui->tableView_7->setModel(t.afficher());
            return;*/

           NUM_TABLE = find;
            t.recherche(table,NUM_TABLE.toInt());}
               else {QMessageBox::critical (this, "Error", "Cette table n'existe pas!");}

         ui->find->setText("");
}
/* void MainWindow::on_pushButton_36_clicked()//chercher table
{
    QString NUM_TABLE;
    QString find =ui->find->text();
Table t;
    QTableView* table=ui->tableView_7;
        if (find.is()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entr//."));
            ui->tableView_7->setModel(t.afficher());
            return;
        } else if(t.check()==0)
           { NUM_TABLE = find;
            t.recherche(table,NUM_TABLE.toInt());}
                else {QMessageBox::critical (this, "Error", "ID n'existe pas!");}

         ui->find->setText("");
} */

void MainWindow::on_tableView_7_clicked()//recuperer donnee table
{


        int row =ui->tableView_7->selectionModel()->currentIndex().row();
            //ui->stackedWidget->setCurrentIndex(2);
            ui->lineEdit_28->setText(ui->tableView_7->model()->index(row,0).data().toString());
            ui->lineEdit_29->setText(ui->tableView_7->model()->index(row,1).data().toString());
            ui->comboBox_8->setCurrentText(ui->tableView_7->model()->index(row,2).data().toString());
             ui->comboBox_9->setCurrentText(ui->tableView_7->model()->index(row,3).data().toString());
            ui->lineEdit_30->setText(ui->tableView_7->model()->index(row,4).data().toString());


}

void MainWindow::on_recher_clicked()//rechercher commande par id
{
    QString ID_COMMANDE;
QString find = ui->lineEdit_31->text();

Commande c;

    QTableView* table=ui->tableView_8;
    c.setID_COMMANDE(ui->lineEdit_31->text().toInt());
        if (c.check()==0) {
            ID_COMMANDE= find;
              c.recherche(table,ID_COMMANDE.toInt());}
        else{
           QMessageBox::critical (this, "Error", "Cette commande n'existe pas!");
            }

               ui->lineEdit_31->setText("");
}

void MainWindow::on_idDeCommande_clicked()//trier commande par id
{
  Commande c;
    QTableView* table=ui->tableView_8;
    c.tri_ID(table);
}

void MainWindow::on_libelle_clicked()//trier commande par libelle
{
    Commande c;
      QTableView* table=ui->tableView_8;
      c.tri_LIBELLE(table);
}

void MainWindow::on_tableView_8_clicked()//recupereer donnee commande
{
    int row =ui->tableView_8->selectionModel()->currentIndex().row();
        //ui->stackedWidget->setCurrentIndex(2);
        ui->lineEdit_33->setText(ui->tableView_8->model()->index(row,0).data().toString());
        ui->lineEdit_38->setText(ui->tableView_8->model()->index(row,1).data().toString());
        ui->lineEdit_37->setText(ui->tableView_8->model()->index(row,2).data().toString());
         ui->lineEdit_36->setText(ui->tableView_8->model()->index(row,3).data().toString());
        ui->lineEdit_35->setText(ui->tableView_8->model()->index(row,4).data().toString());
          ui->lineEdit_34->setText(ui->tableView_8->model()->index(row,5).data().toString());
}

void MainWindow::on_nombredechaises_clicked()//recherche table par nbr chaises
{
    QString NB_CHAISES;
    QString find =ui->find->text();
Table t;
    QTableView* table=ui->tableView_7;
      t.setNB_CHAISES(ui->find->text().toInt());
    if (t.check1()==0) {
        /*QMessageBox::information(this, tr("Empty Field"),
            tr("Entr//."));
        ui->tableView_7->setModel(t.afficher());
        return;*/

      NB_CHAISES = find;
        t.rechercheC(table,NB_CHAISES.toInt());}
           else {QMessageBox::critical (this, "Error", "Ce nombre de chaises n'existe pas !");}

          ui->find->setText("");
}

void MainWindow::on_recher_2_clicked()
{
    QString LIBELLE;
QString find = ui->lineEdit_31->text();

Commande c;
QTableView* table=ui->tableView_8;
c.setLIBELLE(ui->lineEdit_31->text());
    if (c.checkL()==0) {
       LIBELLE= find;
          c.rechercheL(table,LIBELLE);}
    else{
       QMessageBox::critical (this, "Error", "Cette commande n'existe pas!");
        }

           ui->lineEdit_31->setText("");

}

void MainWindow::on_buttonStock_clicked()//ACtualiser
{

    Commande c;
        ui->tableView_8->setModel(c.afficher());

}

void MainWindow::on_pushButton_441_clicked()//actualiser
{
    Table t;
            ui->tableView_7->setModel(t.afficher());
}



void MainWindow::on_pushButton_DB_clicked()
{

    QString DEBARRASSAGE;
    QString find =ui->find->text();
Table t;
    QTableView* table=ui->tableView_7;
    t.setDEBARRASSAGE(ui->find->text().toInt());

    if (find.isEmpty()) {
        QMessageBox::information(this, tr("Empty Field"),
            tr("Entr//."));
        ui->tableView_8->setModel(t.afficher());
        return;}
        else{
           DEBARRASSAGE = find;
            t.rechercheD(table,DEBARRASSAGE.toInt());
             }

         ui->find->setText("");
}

void MainWindow::on_pushButton_deb1_clicked()
{
    Table t;
    QTableView* table=ui->tableView_7;
    t.tri_DEB(table);
}

void MainWindow::on_pushButton_prix_clicked()//trier par prix
{
    Commande c;
      QTableView* table=ui->tableView_8;
      c.tri_P(table);
}

void MainWindow::on_pushButton_ntab_clicked()//chercher commande par num de tab
{
    QString NUM_TABLE;
QString find = ui->lineEdit_31->text();

Commande c;;
    QTableView* table=ui->tableView_8;
    c.setNUM_TABLE(ui->lineEdit_31->text().toInt());
        if (c.check_tab()==0) {
           NUM_TABLE= find;
              c.rechercheTAB(table,NUM_TABLE.toInt());}
        else{
           QMessageBox::critical (this, "Error", "Cette commande n'existe pas!");
            }

               ui->lineEdit_31->setText("");
}





/*void MainWindow::on_pushButton_pdf_clicked()
{
    QString str;
                 str.append("<html><head></head><body><center>"+QString("Les Factures Du Caisse"));
                 str.append("<table border=1><tr>") ;
                 str.append("<td>"+QString("ID_COMMANDE")+"</td>") ;
                 str.append("<td>"+QString("QUANTITE")+"</td>") ;
                 str.append("<td>"+QString("LIBELLE")+"</td>") ;
                 str.append("<td>"+QString("DESCRIPTION")+"</td>") ;
                 str.append("<td>"+QString("PRIX")+"</td>") ;
                 str.append("<td>"+QString("NUM_TABLE")+"</td>") ;


                 QSqlQuery* query=new QSqlQuery();
                 query->exec("SELECTID_COMMANDE,QUANTITE,LIBELLE,DESCRIPTION,PRIX,NUM_TABLE FROM COMMANDE");

                 while(query->next())
                 {
                 str.append("<tr><td>");
                 str.append(query->value(0).toString()) ;
                 str.append("</td><td>") ;
                 str.append(query->value(1).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(2).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(3).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(4).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(5).toString());
                 str.append("</td></tr>");




                 }
              str.append("</table></center></body></html>") ;

             QPrinter printer ;
              printer.setOrientation(QPrinter::Portrait);
              printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setPaperSize(QPrinter::A4) ;

            QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

              if (path.isEmpty()) return ;
              printer.setOutputFileName(path) ;

              QTextDocument doc;
              doc.setHtml(str) ;
              doc.print(&printer);
}*/

void MainWindow::on_sendBtn_2F_clicked()
{
    Smtp* smtp = new Smtp("fadwa.berrich@esprit.tn","192JFT4518", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    /*if( !files.isEmpty() )
        smtp->sendMail("mariem.nacib@esprit.tn", ui->rcpt->currentText() , ui->subject->text(),ui->msg->toPlainText(), files );
    else*/
        smtp->sendMail("fadwa.berrich@esprit.tn", ui->rcpt_2F->text() , ui->subject_2F->text(),ui->msg_2F->toPlainText());
}


/*
void MainWindow::on_STATF_clicked()
{
    stati s;
}*/
//--------------------MAHMOUD-----------------------------
//----Ajouter Fournisseur
void MainWindow::on_F_ADD_clicked()
{
    Fournisseur fournisseur(ui->F_NOM->text(),
                            ui->F_TEL->text(),
                            ui->F_ADRESSE->text(),
                            ui->F_MAIL->text().toInt());
    fournisseur.ajouter();
    QSortFilterProxyModel *proxyModel = fournisseur.afficher();
    ui->tabFournisseur->setSortingEnabled(true);
    ui->tabFournisseur->setModel(proxyModel);
}
//-- Modifier Fournisseur
void MainWindow::on_F_UPDATE_clicked()
{
    Fournisseur fournisseur(ui->F_NOM->text(),ui->F_TEL->text(),
                            ui->F_ADRESSE->text(),ui->F_MAIL->text().toUInt());
    fournisseur.setId(ui->F_UPDATE_ID->text().toUInt());
    fournisseur.modifier();
    ui->tabFournisseur->setSortingEnabled(true);
    ui->tabFournisseur->setModel(fournisseur.afficher());
}
//--- Supprimer Fournisseur
void MainWindow::on_pushButton_44_clicked()
{
    Fournisseur fournisseur(ui->textDelete_7->text().toUInt());
    fournisseur.supprimer();
    ui->tabFournisseur->setSortingEnabled(true);
    ui->tabFournisseur->setModel(fournisseur.afficher());
}

//-- Ajouter Commande Fournisseur
void MainWindow::on_CF_ADD_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_ID_F->text().toInt(),
                                            ui->CF_ID_P->text().toUInt(),ui->CF_QTE->text().toUInt(),
                                            ui->CF_DATE_E->text(),ui->CF_DATE_R->text());
    commandeFournisseur.ajouter();
    ui->tabCommandeFournisseur->setSortingEnabled(true);
    ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
}
//-- Modifier Commande Fournisseur
void MainWindow::on_pushButton_46_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_ID_F->text().toInt(),ui->CF_ID_P->text().toUInt(),
                                            ui->CF_QTE->text().toUInt(),ui->CF_DATE_E->text(),ui->CF_DATE_R->text());

    commandeFournisseur.setidCommande(ui->CF_UPDATE->text().toUInt());
    commandeFournisseur.modifier();
    ui->tabCommandeFournisseur->setSortingEnabled(true);
    ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
}
//-- Supprimer Commande Fournisseur
void MainWindow::on_pushButton_47_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_DELETE->text().toUInt());
    commandeFournisseur.supprimer();
    ui->tabCommandeFournisseur->setSortingEnabled(true);
    ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
}

//-- Send Mail
void MainWindow::on_sendBtn_2_clicked()
{

}
//-- Ajouter Stock Fournisseur
void MainWindow::on_OF_ADD_clicked()
{
    OffreFournisseur offreFournisseur(ui->OF_ID_P->text().toUInt(),ui->OF_ID_F->text().toUInt(),ui->OF_PRIX->text().toUInt());
    offreFournisseur.ajouter();
    ui->tabOffreFournisseur->setSortingEnabled(true);
    ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
}
//-- Modifier Stock Fournisseur
void MainWindow::on_OF_UPDATE_clicked()
{
    OffreFournisseur offreFournisseur(ui->OF_ID_P->text().toInt(),ui->OF_ID_F->text().toUInt(),ui->OF_PRIX->text().toUInt());
    offreFournisseur.modifier();
    ui->tabOffreFournisseur->setSortingEnabled(true);
    ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
}
//-- Supprimer Stock Fournisseur
void MainWindow::on_pushButton_50_clicked()
{
    OffreFournisseur offreFournisseur(ui->OF_DELETE_F->text().toUInt(), ui->OF_DELETE_P->text().toUInt());
    offreFournisseur.supprimer();
    ui->tabOffreFournisseur->setSortingEnabled(true);
    ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
}

void MainWindow::on_pushButton_45_clicked()
{/*
    delete ui->widget->layout();
    OffreFournisseur offre;
    QVBoxLayout * mainLayout = offre.stat();
    ui->widget->setLayout(mainLayout);*/
    return;
}

void MainWindow::on_pushButton_51_clicked()
{
    OffreFournisseur offre;
    ui->tabOffreFournisseur->setSortingEnabled(true);
    int x =ui->OF_RECHERCHE_P->text().toInt();

    QSortFilterProxyModel * model =  offre.searchProduit(x);
    ui->tabOffreFournisseur->setModel(model );
}

void MainWindow::on_pushButton_52_clicked()
{
    OffreFournisseur offre;
        ui->tabOffreFournisseur->setSortingEnabled(true);
        int x =ui->OF_RECHERCHE_F->text().toInt();

        QSortFilterProxyModel * model =  offre.searchFournisseur(x);
       ui->tabOffreFournisseur->setModel(model );
}

void MainWindow::on_pushButton_49_clicked()
{
    CommandeFournisseur c;
        ui->tabOffreFournisseur->setSortingEnabled(true);
        int x =ui->CF_S_P->text().toInt();

        QSortFilterProxyModel * model =  c.searchP(x);
       ui->tabCommandeFournisseur->setModel(model );
}

void MainWindow::on_pushButton_48_clicked()
{
    CommandeFournisseur c;
        ui->tabOffreFournisseur->setSortingEnabled(true);
        int x =ui->CF_S_F->text().toInt();

        QSortFilterProxyModel * model =  c.searchF(x);
       ui->tabCommandeFournisseur->setModel(model );
}

void MainWindow::on_pushButton_53_clicked()
{
    Fournisseur f;
    QSortFilterProxyModel * model =  f.searchNom(ui->FSN->text());
    ui->tabFournisseur->setModel(model );
}

void MainWindow::on_pushButton_54_clicked()
{
    Fournisseur f;
    QSortFilterProxyModel * model =  f.searchTelephone(ui->FST->text());
    ui->tabFournisseur->setModel(model );
}

void MainWindow::on_pushButton_55_clicked()
{
    Fournisseur f;
    QSortFilterProxyModel * model =  f.searchMail(ui->FSE->text());
    ui->tabFournisseur->setModel(model );
}

void MainWindow::on_pushButton_56_clicked()
{
    Fournisseur f;
    QSortFilterProxyModel * model =  f.searchAdresse(ui->FSA->text());
    ui->tabFournisseur->setModel(model );
}

void MainWindow::on_pdf_f_clicked()//PDF Fournisseur
{
    QString str;
                 str.append("<html><head></head><body><center>"+QString("Les Factures Du Caisse"));
                 str.append("<table border=1><tr>") ;
                 str.append("<td>"+QString("ID_COMMANDE")+"</td>") ;
                 str.append("<td>"+QString("ID_FOURNISSEUR")+"</td>") ;
                 str.append("<td>"+QString("ID_PRODUIT")+"</td>") ;
                 str.append("<td>"+QString("QUANTITE")+"</td>") ;
                 str.append("<td>"+QString("DATE_ENVOI")+"</td>") ;
                 str.append("<td>"+QString("DATE_RECEPTION")+"</td>") ;


                 QSqlQuery* query=new QSqlQuery();
                 query->exec("SELECT * FROM COMMANDE_FOURNISSEUR");

                 while(query->next())
                 {
                 str.append("<tr><td>");
                 str.append(query->value(0).toString()) ;
                 str.append("</td><td>") ;
                 str.append(query->value(1).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(2).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(3).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(4).toString());
                 str.append("</td><td>") ;
                 str.append(query->value(5).toString());
                 str.append("</td></td>");
                 }
              str.append("</table></center></body></html>") ;

              QPrinter printer ;
              printer.setOrientation(QPrinter::Portrait);
              printer.setOutputFormat(QPrinter::PdfFormat);
              printer.setPaperSize(QPrinter::A4) ;

              QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

              if (path.isEmpty()) return ;
              printer.setOutputFileName(path) ;

              QTextDocument doc;
              doc.setHtml(str) ;
              doc.print(&printer);
}

void MainWindow::on_arduinoM_M_clicked()
{


    data=A.read_from_arduino();


if (data.length()<37)
{
    data+= QString::fromStdString(data.toStdString());
    //data.split();
}
else
{
      qDebug () << data;
    data="";
}
QSystemTrayIcon *trayIcon = new QSystemTrayIcon(this);
               trayIcon->show();
               trayIcon->setIcon(QIcon("C:/Users/PC/Desktop/ProjetSmartRestaurant2A23/ProjetCppA23G2/Projet/ProjetCpp/hat.png"));
               trayIcon->showMessage("Alerte Température Elevee", "Le ventilateur est Activé automatiquement !");
               trayIcon->setVisible(true);
}

