#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QSortFilterProxyModel>
#include <QAbstractSocket>

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
#include <QPlainTextEdit>
#include <QPropertyAnimation>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

            mSystemTrayIcon = new QSystemTrayIcon(this);
            mSystemTrayIcon->setIcon(QIcon("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/hat.png"));
            mSystemTrayIcon->setVisible(true);


    media = new QMediaPlayer (this);
    media->setMedia( QUrl::fromLocalFile("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/theme.mp3"));
    media->play();

    QPixmap pix150("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/koujniti_logo");
    QPixmap pix1("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/Calque 0.png");
    QPixmap pix2("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/stock.png");
    QPixmap pix3("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/cash.png");
    QPixmap pix4("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/icons8-face-id-32");
    QPixmap pix5("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/stars");
    QPixmap pix6("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/cor");
    QPixmap pix7("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/modi");
    QPixmap pix8("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/mui");
    QPixmap pix9("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/icons8-search-client-48");
    QPixmap pix10("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/casic");
    QPixmap pix11("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/food");
    QPixmap pix12("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/table");
    QPixmap pix13("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/prod");
    QPixmap pix14("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/prov");

     setFixedSize(1296,801);  //fixe la taille de la fenêtre


     myMoviebg = new QMovie(this);
     myMoviebg = new QMovie("C:/Users/PC/Desktop/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/gif5.gif");

       ui->gif->setMovie(myMoviebg);

       myMoviebg->start();

ui->label_94->setToolTip("Music");

    ui->label_5->setPixmap(pix150);
    ui->label_3->setPixmap(pix1);
    ui->label_28->setPixmap(pix2);
    ui->label_85->setPixmap(pix3);
    ui->label_87->setPixmap(pix3);
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
void MainWindow::on_pushButton_clicked()//Ajouter Produit
{
    produit p;


    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->comboBox_3->currentText());

    p.ajouter();
    ui->tableView_A->setModel(p.afficher());

    bool test= p.ajouter();


                ui->tableView_A->setModel(p.afficher());

                if(test){
                    QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

                else

                    QMessageBox::critical(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);

}

void MainWindow::on_pushButton_6_clicked()//suuprimer Produit
{
    //produit p;
    produit produit(ui->textDelete_2->text().toUInt());
    produit.supprimer();
    ui->tableView_A->setModel(produit.afficher());
}

void MainWindow::on_tableView_A_doubleClicked() // modifier produit depuis l'affichage
{

    int row =ui->tableView_A->selectionModel()->currentIndex().row();
    //ui->stackedWidget->setCurrentIndex(2);
    ui->lineEdit->setText(ui->tableView_A->model()->index(row,0).data().toString());
    ui->comboBox_3->setCurrentText(ui->tableView_A->model()->index(row,1).data().toString());
    ui->lineEdit_2->setText(ui->tableView_A->model()->index(row,2).data().toString());

}
void MainWindow::on_pushButton_4_clicked()//modifier produit
{
    produit p;

    p.setID_PRODUIT(ui->lineEdit->text().toUInt());
    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->comboBox_3->currentText());

 p.update();

    ui->tableView_A->setModel(p.afficher());

    bool test= p.update();


                ui->tableView_A->setModel(p.afficher());

                if(test){
                    QMessageBox::information(nullptr,QObject::tr("update"),QObject::tr("modifier effectuée"),  QMessageBox::Cancel);}

                else

                    QMessageBox::critical(nullptr,QObject::tr("update"),QObject::tr("modier non effectuée"),  QMessageBox::Cancel);
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

void MainWindow::on_tableView_A_clicked()//rechercher un produit
{
    QString findText;
        int text = ui->comboBox_3->currentIndex();
    produit p;
    QTableView* table=ui->tableView_A;


            findText = text;
            p.recherche(table,findText);


            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez l'ID a rechercher."));
            ui->tableView_A->setModel(p.afficher());
            return;
}

//---------------------------------~STOCK~----------------------------------------------

void   MainWindow::sendMail()
{

    Smtp* smtp = new Smtp("mariem.nacib@esprit.tn","191JFT2771", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    /*if( !files.isEmpty() )
        smtp->sendMail("mariem.nacib@esprit.tn", ui->rcpt->currentText() , ui->subject->text(),ui->msg->toPlainText(), files );
    else*/
        smtp->sendMail("mariem.nacib@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   MainWindow::mailSent(QString status)
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


                ui->tableView_B->setModel(s.afficher_stock());

                if(test){
                    QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

                else

                    QMessageBox::critical(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout non effectuée"),  QMessageBox::Cancel);


    if (s.getQUANTITE() > 500)
    {
    Smtp* smtp = new Smtp("rajianacib@gmail.com", "nbvcxwnbvcxw", "smtp.gmail.com", 465);

         smtp->sendMail("rajianacib@gmail.com", "mariem.nacib@esprit.tn", "STOCK LIMITE", "vous ne pouvez pas stocker plus de 500 produits");
          QMessageBox::information(this,"message envoyee", "stock saturé verifier votre mail");//fonctionne
    }
    if (s.getQUANTITE() < 50)
    {

   Smtp* smtp = new Smtp("mariem.nacib@esprit.tn", "191JFT2771", "smtp.gmail.com", 465);

         smtp->sendMail("mariem.nacib@esprit.tn", "ahmedelmoez.noomen@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits");
          QMessageBox::information(this,"message envoyee", "stock en déficite verifier votre mail");/// fonctionne
    }
}



void MainWindow::on_pushButton_7_clicked()//suuprimer Stock
{

    stock s(ui->textDelete->text().toUInt());
    s.supprimer_stock();
    ui->tableView_B->setModel(s.afficher_stock());

    bool test= s.supprimer_stock();

                ui->tableView_B->setModel(s.afficher_stock());

                if(test){
                    QMessageBox::information(nullptr,QObject::tr("Supprimer"),QObject::tr("Supprission effectuée"),  QMessageBox::Cancel);}

                else

                    QMessageBox::critical(nullptr,QObject::tr("Supprimer"),QObject::tr("Supprission non effectuée"),  QMessageBox::Cancel);
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
    ui->comboBox->setCurrentText(ui->tableView_B->model()->index(row,1).data().toString());
    ui->spinBox->setPrefix(ui->tableView_B->model()->index(row,2).data().toString());
    ui->comboBox_2->setCurrentText(ui->tableView_B->model()->index(row,3).data().toString());
    ui->calendarWidget->setSelectedDate(ui->tableView_B->model()->index(row,4).data().toDate());
    ui->lineEdit_22->setText(ui->tableView_B->model()->index(row,5).data().toString());
    ui->lineEdit_23->setText(ui->tableView_B->model()->index(row,6).data().toString());

    proxyModel->setSourceModel(modelS);
    ui->tableView_B->setSortingEnabled(true);
     ui->tableView_B->setModel(proxyModel);
    ui->tableView_B->setModel(s.afficher_stock());
}

void MainWindow::on_pushButton_5_clicked()//modifier Stock
{
    stock s;

    QSqlQueryModel * modelS =s.afficher_stock();

    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(modelS);

    s.setID_STOCK(ui->lineEdit_21->text().toInt());
    s.setCATEGORIE_STOCK(ui->comboBox->currentText());
    s.setTEMPERATURE(ui->spinBox->text().toInt());
    s.setEMPLACEMENT(ui->comboBox_2->currentText());
    s.setDATE_STOCK(ui->calendarWidget->selectedDate());
    s.setQUANTITE(ui->lineEdit_22->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_23->text().toInt());

    s.update_stock();


    proxyModel->setSourceModel(modelS);
    ui->tableView_B->setSortingEnabled(true);
     ui->tableView_B->setModel(proxyModel);
    ui->tableView_B->setModel(s.afficher_stock());

}


void MainWindow::on_TRI_2_clicked()//tri stock
{
    stock s;

  //ui->tableView_B->setModel(s.tri(ui->tableView_B->currentIndex().column()));

   QTableView* table=ui->tableView_B;
  s.tri_quantite(table);

}


void MainWindow::on_TRI_3_clicked()//tri stock
{
    stock s;

  //ui->tableView_B->setModel(s.tri(ui->tableView_B->currentIndex().column()));

   QTableView* table=ui->tableView_B;
  s.tri_id(table);

}

void MainWindow::on_pushButton_43_clicked()//Afficher Stock
{
    stock s;
        ui->tableView_B->setModel(s.afficher_stock());
}

void MainWindow::on_TRI_4_clicked()//tri stock
{    stock s;

     //ui->tableView_B->setModel(s.tri(ui->tableView_B->currentIndex().column()));

      QTableView* table=ui->tableView_B;
     s.tri_etage(table);


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

                 ui->tableView_B->setModel(s.afficher_stock());


                 text1=ui->rechercherStock_2->text().toUInt();
                         //s.rechercher_cr1(table,text1);


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

            }

             else if     (ui->radioButton_3->isChecked()==true)
             {

                 text1=ui->rechercherStock_2->text().toUInt();

                          ui->tableView_B->setModel(s.afficher_stock());



                          text1=ui->rechercherStock_2->text().toUInt();
                                  //s.rechercher_cr3(table,text1);




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
    t.setNUM_CLIENT(ui->lineEdit_4->text().toInt());
    t.setADRESSE_CLIENT(ui->comboBox_4->currentText());
    t.setDATE_HEURE(ui->dateTimeEdit_2->date());
    t.setPRIX(ui->lineEdit_5->text().toInt());
    t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

        bool test= t.ajouter();


            ui->tableView_2->setModel(t.afficher());

            if(test){
                QMessageBox::information(nullptr,QObject::tr("Ajouter"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);}

            else

                QMessageBox::critical(nullptr,QObject::tr("Supprimer"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);
        }


void MainWindow::on_pushButton_14_clicked()//Supprimer Transaction
{
    Transaction Transaction(ui->textDelete_3->text().toUInt());
    bool test= Transaction.supprimer();


    ui->tableView_2->setModel(Transaction.afficher());


    if(test){
        QMessageBox::information(nullptr,QObject::tr("Supprimer"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
    else

        QMessageBox::critical(nullptr,QObject::tr("Supprimer"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);
}


void MainWindow::on_pushButton_13_clicked() // ModifierTransaction
{

    Transaction t;

      t.setID_FACTURE(ui->textEdit_2->text().toInt());
      t.setNOM_CLIENT(ui->lineEdit_3->text());
      t.setNUM_CLIENT(ui->lineEdit_4->text().toInt());
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

/*void MainWindow::on_rechercher_3_clicked() // Recherche Par Nom
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
}*/


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



void MainWindow::on_pushButton_42_clicked()
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
          QMessageBox::information(nullptr,QObject::tr("Supprimer Eva"),QObject::tr("Supp effectuée"),  QMessageBox::Cancel);}
      else

          QMessageBox::critical(nullptr,QObject::tr("Supprimer Eva"),QObject::tr("Supp non effectuée"),  QMessageBox::Cancel);}



void MainWindow::on_rechercher_2_clicked() // Recherche Evaluation
{
    QString findText;
          QString text = ui->lineEdit_10->text();
      Evaluation e;
      QTableView* table=ui->tableView;
          if (text.isEmpty()) {
              QMessageBox::information(this, tr("Empty Field"),
                  tr("Entrez une specialité a rechercher."));
              ui->tableView->setModel(e.afficher());
              return;
          } else {
              findText = text;
              e.recherche2(table,findText.toUInt());


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
t.ajouter();
ui->tableView_7->setModel(t.afficher());
}

void MainWindow::on_pushButton_33_clicked()//supprimer tab
{
    Table t1;
    t1.setNUM_TABLE(ui->lineEdit_32->text().toInt());
    bool test =t1.supprimer(t1.get_NUM_TABLE());
    QMessageBox msgBox;
    if(test)
    {msgBox.setText("supression avec succés");
      ui->tableView_7->setModel(t1.afficher());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();
}

void MainWindow::on_pushButton_32_clicked()//modifier table
{/*
    Table t2;
  int a;
          a=ui->lineEdit_5->text().toInt();
      QString b=QString ::number(t2.get_NUM_TABLE());
      t2.setNUM_TABLE(b.toInt());
      t2.setNB_CHAISES(ui->lineEdit_2->text().toInt());
      t2.setEMPLACEMENT( ui->comboBox->currentText());
      t2.setDISPONIBILITE(ui->comboBox_2->currentText());
      t2.setDEBARRASSAGE(ui->lineEdit_3->text().toInt());
    t2.modifier();
      ui->tableView->setModel(t2.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);
     ui->toupdate->setText("");
            ui->lineEdit_17->setText("");
            ui->lineEdit_9->setText("");
            ui->lineEdit_10->setText("");
            ui->lineEdit_11->setText("");
            ui->lineEdit_12->setText("");
            ui->lineEdit_13->setText("");
            ui->lineEdit_14->setText("");
            ui->lineEdit_15->setText("");
  */  }


void MainWindow::on_pushButton_37_clicked()//AJOUTER COMMANDE
{
    Commande c(ui->lineEdit_33->text().toUInt(), ui->lineEdit_38->text().toUInt(),
        ui->lineEdit_37->text(),ui->lineEdit_36->text(),ui->lineEdit_35->text().toFloat(),ui->lineEdit_34->text().toUInt());
c.ajouter();
ui->tableView_8->setModel(c.afficher());
}

void MainWindow::on_pushButton_39_clicked()//SUPPRIMER UNE COMMANDE
{
    Commande c1;
    c1.setID_COMMANDE(ui->lineEdit_40->text().toInt());
    bool test =c1.supprimer(c1.get_ID_COMMANDE());
    QMessageBox msgBox;
    if(test)
    {msgBox.setText("supression avec succés");
      ui->tableView_8->setModel(c1.afficher());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();
}

void MainWindow::on_pushButton_38_clicked()//modifier com
{


    Commande c2;

   c2.setID_COMMANDE(ui->lineEdit_33->text().toUInt());
      c2.setQUANTITE(ui->lineEdit_38->text().toUInt());
      c2.setLIBELLE(  ui->lineEdit_37->text());
      c2.setDESCRIPTION( ui->lineEdit_36->text());
      c2.setPRIX(ui->lineEdit_35->text().toFloat());
      c2.setNUM_TABLE(ui->lineEdit_34->text().toUInt());
    c2.modifier();
      ui->tableView_8->setModel(c2.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);
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
        if (find.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView_7->setModel(t.afficher());
            return;
        } else {
            NUM_TABLE = find;
            t.recherche(table,NUM_TABLE.toInt());

}
}
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
{
    delete ui->widget->layout();
    OffreFournisseur offre;
    QVBoxLayout * mainLayout = offre.stat();
    ui->widget->setLayout(mainLayout);
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


