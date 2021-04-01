#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>

#include "produit.h"
#include "stock.h"
#include "transaction.h"
#include "evaluation.h"
#include "plat.h"
#include "menu.h"
#include "table.h"
#include "commande.h"
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
#include <QPixmap>
#include <QMediaPlayer>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    media = new QMediaPlayer (this);
    media->setMedia( QUrl::fromLocalFile("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/theme.mp3"));
    media->play();

    QPixmap pix150("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/koujniti_logo");
    QPixmap pix1("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/Calque 0.png");
    QPixmap pix2("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/stock.png");
    QPixmap pix3("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/cash.png");
    QPixmap pix4("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/icons8-face-id-32");
    QPixmap pix5("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/stars");
    QPixmap pix6("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/cor");
    QPixmap pix7("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/modi");
    QPixmap pix8("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/mui");
    QPixmap pix9("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/icons8-search-client-48");
    QPixmap pix10("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/casic");
    QPixmap pix11("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/food");
    QPixmap pix12("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/table");
    QPixmap pix13("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/prod");
    QPixmap pix14("C:/Users/Ahmed Elmoez/Documents/Projet C++/ProjetCppA23G2/Projet/ProjetCpp/prov");






    ui->label_102->setPixmap(pix150);
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











    OffreFournisseur offreFournisseur;
    ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
    CommandeFournisseur commandeFournisseur;
    ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
    Fournisseur fournisseur;
    ui->tabFournisseur->setModel(fournisseur.afficher());


    //ui->label_84->setPixmap(pix4.scaled(100,100,Qt::KeepAspectRatio));


     produit test;
    ui->tableView_A->setModel(test.afficher()); //Afficher Produit
    ui->tableView_A->setModel(test.tri(ui->tableView_A->currentIndex().column()));

    stock test1;
   ui->tableView_B->setModel(test1.afficher_stock());//Afficher Stock
   //ui->tableView_B->setModel(test1.tri(ui->tableView_B->currentIndex().column()));

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
}

void MainWindow::on_TRI_clicked()//tri Produit
{
        produit p;

      ui->tableView_A->setModel(p.tri(ui->tableView_A->currentIndex().column()));

}

void MainWindow::on_tableView_A_clicked()//rechercher un produit
{
    QString findText;
        QString text = ui->comboBox_3->currentText();
    produit p;
    QTableView* table=ui->tableView_A;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez l'ID a rechercher."));
            ui->tableView_A->setModel(p.afficher());
            return;
        }
        else {
            findText = text;
            p.recherche(table,findText);
            }
}

//---------------------------------~STOCK~----------------------------------------------
void MainWindow::on_pushButton_3_clicked()//Ajouter Stock
{
    stock s;

    s.setCATEGORIE_STOCK(ui->comboBox->currentText());
    s.setTEMPERATURE(ui->spinBox->text().toInt());
    s.setEMPLACEMENT(ui->comboBox_2->currentText());
    s.setDATE_STOCK(ui->dateTimeEdit->date());
    s.setQUANTITE(ui->lineEdit_22->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_23->text().toInt());

    s.ajouter_stock();
    ui->tableView_B->setModel(s.afficher_stock());


    if (s.getQUANTITE() > 500)
    {

   // Smtp* smtp = new Smtp("mariem.nacib@esprit.tn", "191JFT2771:)", "smtp.gmail.com", 465);

         //smtp->sendMail("mariem.nacib@esprit.tn", "ahmedelmoez.noomen@esprit.tn" , "STOCK LIMITE","vous ne pouvez pas stocker plus de 500 produits");
          QMessageBox::information(this,"message envoye", "verifier votre mail ");
    }
}



void MainWindow::on_pushButton_7_clicked()//suuprimer Stock
{

    stock s(ui->textDelete->text().toUInt());
    s.supprimer_stock();
    ui->tableView_B->setModel(s.afficher_stock());
}

void MainWindow::on_tableView_B_doubleClicked() // modifier stockage depuis l'affichage
{
stock s;
    int row =ui->tableView_B->selectionModel()->currentIndex().row();
    //ui->stackedWidget->setCurrentIndex(2);
    s.setID_STOCK(ui->lineEdit_21->text().toInt());

    ui->lineEdit_21->setText(ui->tableView_B->model()->index(row,0).data().toString());
    ui->comboBox->setCurrentText(ui->tableView_B->model()->index(row,1).data().toString());
    ui->spinBox->setPrefix(ui->tableView_B->model()->index(row,2).data().toString());
    ui->comboBox_2->setCurrentText(ui->tableView_B->model()->index(row,3).data().toString());
    ui->dateTimeEdit->setDate(ui->tableView_B->model()->index(row,4).data().toDate());
    ui->lineEdit_22->setText(ui->tableView_B->model()->index(row,5).data().toString());
    ui->lineEdit_23->setText(ui->tableView_B->model()->index(row,6).data().toString());
}

void MainWindow::on_pushButton_5_clicked()//modifier Stock
{
    stock s;

    s.setID_STOCK(ui->lineEdit_21->text().toInt());
    s.setCATEGORIE_STOCK(ui->comboBox->currentText());
    s.setTEMPERATURE(ui->spinBox->text().toInt());
    s.setEMPLACEMENT(ui->comboBox_2->currentText());
    s.setDATE_STOCK(ui->dateTimeEdit->date());
    s.setQUANTITE(ui->lineEdit_22->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_23->text().toInt());

 s.update_stock();



    ui->tableView_B->setModel(s.afficher_stock());

}


void MainWindow::on_TRI_2_clicked()//tri stock
{
    stock s;

  //ui->tableView_B->setModel(s.tri(ui->tableView_B->currentIndex().column()));

   QTableView* table=ui->tableView_B;
  s.tri(table);

}

void MainWindow::on_tableView_B_clicked()//rechercher un stock
{
    QString findText;
        QString text = ui->comboBox->currentText();
    stock s;
    QTableView* table=ui->tableView_B;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une categorie a rechercher."));
            ui->tableView_B->setModel(s.afficher_stock());
            return;
        }
        else {
            findText = text;
            s.recherche(table,findText);
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
//------------------------------------------------5EDMET AHMED----------------------------------------------------------------
void MainWindow::on_pushButton_12_clicked()//Ajouter Transaction
{
    Transaction t;

    t.setNOM_CLIENT(ui->lineEdit_3->text());
    t.setNUM_CLIENT(ui->lineEdit_4->text().toInt());
    t.setADRESSE_CLIENT(ui->comboBox_4->currentText());
    t.setDATE_HEURE(ui->dateTimeEdit_2->date());
    t.setPRIX(ui->lineEdit_5->text().toInt());
    t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

        t.ajouter();


            ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_pushButton_14_clicked()//Supprimer Transaction
{
    Transaction Transaction(ui->textDelete_3->text().toUInt());
    Transaction.supprimer();
    ui->tableView_2->setModel(Transaction.afficher());
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

      t.update();

      ui->tableView_2->setModel(t.afficher());
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
//-----------------------------------~Evaluation~--------------------------------------
void MainWindow::on_pushButton_16_clicked()//Ajouter Evaluation
{
    Evaluation e(ui->lineEdit_8->text(), ui->comboBox_5->currentText().toUInt(),
                  ui->comboBox_6->currentText(),ui->lineEdit_9->text().toUInt());

        e.ajouter();


            ui->tableView->setModel(e.afficher());
}

void MainWindow::on_pushButton_18_clicked()//Supprimer Evaluation
{
    Evaluation Evaluation(ui->textDelete_4->text().toUInt());
    Evaluation.supprimer();
    ui->tableView->setModel(Evaluation.afficher());
}


void MainWindow::on_pushButton_17_clicked() // Modifier Evaluation
{

    Evaluation e;

      e.setID_NOTE(ui->textEdit_4->text().toInt());
      e.setNOM_CLIENT(ui->lineEdit_8->text());
      e.setNOTE_CLIENT(ui->comboBox_5->currentText().toUInt());
      e.setREMARQUE_CLIENT(ui->comboBox_6->currentText());
      e.setID_FACTURE(ui->lineEdit_9->text().toInt());

      e.update();

      ui->tableView->setModel(e.afficher());
}

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

//-----------------------------------------AZIZ------------------------------------------------
void MainWindow::on_pushButton_21_clicked()//ajouter plat
{
    plat p(ui->lineEdit_16->text(), ui->lineEdit_17->text(),
         ui->lineEdit_18->text(),ui->lineEdit_19->text().toFloat(),ui->lineEdit_20->text().toUInt());
p.ajouter();
 ui->tableView_2->setModel(p.afficher());

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

         plat.supprimer();

        ui->tableView_3->setModel(plat.afficher());
        /* if(ui->textDelete_3->text()!=p.getNOM_PLAT()){
             QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
         else

             QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);*/

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
    m.ajouter();
    ui->tableView_4->setModel(m.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);
    //req.exec();

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
    QString findText;
        QString text = ui->lineEdit_24->text();
    plat p;
    QTableView* table=ui->tableView_3;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView_3->setModel(p.afficher());
            return;
        } else {
            findText = text;
            p.recherche(table,findText);


}
}

void MainWindow::on_pushButton_25_clicked()//trier plat
{
    plat p;
     QTableView* table=ui->tableView_3;
    p.trie(table);
}

void MainWindow::on_pushButton_26_clicked()//reinitialiser plat
{ plat p;
    ui->tableView_3->setModel(p.afficher());
}

void MainWindow::on_pushButton_30_clicked()//generation menu
{
    int text = ui->lineEdit_27->text().toUInt();
    int findText;
menu m;
plat p;
QTableView* table=ui->tableView_5;
QTableView* table1=ui->tableView_6;
        ui->tableView_5->setModel(m.afficher());
        findText = text;
        m.recherche(table,text);
        p.recherche1(table1,text);

}

void MainWindow::on_tableView_3_clicked(const QModelIndex &index)//recuperation des données au niveau de modiff plat
{
    int row =ui->tableView_3->selectionModel()->currentIndex().row();
     //ui->stackedWidget->setCurrentIndex(2);
     ui->lineEdit_16->setText(ui->tableView_3->model()->index(row,0).data().toString());
     ui->lineEdit_17->setText(ui->tableView_3->model()->index(row,1).data().toString());
     ui->lineEdit_18->setText(ui->tableView_3->model()->index(row,2).data().toString());
      ui->lineEdit_19->setText(ui->tableView_3->model()->index(row,3).data().toString());
     ui->lineEdit_20->setText(ui->tableView_3->model()->index(row,4).data().toString());

}

void MainWindow::on_tableView_4_clicked(const QModelIndex &index)//recuperation donnée menu
{
    int row =ui->tableView_4->selectionModel()->currentIndex().row();
       //ui->stackedWidget->setCurrentIndex(2);
       ui->lineEdit7_3->setText(ui->tableView_4->model()->index(row,0).data().toString());
       ui->lineEdit_26->setDate(ui->tableView_4->model()->index(row,1).data().toDate());
       ui->lineEdit_25->setText(ui->tableView_4->model()->index(row,2).data().toString());
       ui->comboBox_7->setCurrentText(ui->tableView_4->model()->index(row,3).data().toString());

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
    ui->tabFournisseur->setModel(fournisseur.afficher());
}
//-- Modifier Fournisseur
void MainWindow::on_F_UPDATE_clicked()
{
    Fournisseur fournisseur(ui->F_NOM->text(),ui->F_TEL->text(),
                            ui->F_ADRESSE->text(),ui->F_MAIL->text().toUInt());
    fournisseur.setId(ui->F_UPDATE_ID->text().toUInt());
    fournisseur.modifier();
    ui->tabFournisseur->setModel(fournisseur.afficher());
}
//--- Supprimer Fournisseur
void MainWindow::on_pushButton_44_clicked()
{
    Fournisseur fournisseur(ui->textDelete_7->text().toUInt());
    fournisseur.supprimer();
    ui->tabFournisseur->setModel(fournisseur.afficher());
}
//--- Trier Fournisseurs
void MainWindow::on_TRI_3_clicked()
{

}
//-- Ajouter Commande Fournisseur
void MainWindow::on_CF_ADD_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_ID_F->text().toInt(),
                                            ui->CF_ID_P->text().toUInt(),ui->CF_QTE->text().toUInt(),
                                            ui->CF_DATE_E->text(),ui->CF_DATE_R->text());
    commandeFournisseur.ajouter();
    ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
}
//-- Modifier Commande Fournisseur
void MainWindow::on_pushButton_46_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_ID_F->text().toInt(),ui->CF_ID_P->text().toUInt(),
                                            ui->CF_QTE->text().toUInt(),ui->CF_DATE_E->text(),ui->CF_DATE_R->text());

    commandeFournisseur.setidCommande(ui->CF_UPDATE->text().toUInt());
    commandeFournisseur.modifier();
     ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
}
//-- Supprimer Commande Fournisseur
void MainWindow::on_pushButton_47_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_DELETE->text().toUInt());
    commandeFournisseur.supprimer();
     ui->tabCommandeFournisseur->setModel(commandeFournisseur.afficher());
}
//-- Trier Commande Fournisseur
void MainWindow::on_TRI_4_clicked()
{

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
    ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
}
//-- Modifier Stock Fournisseur
void MainWindow::on_OF_UPDATE_clicked()
{
    OffreFournisseur offreFournisseur(ui->OF_ID_P->text().toInt(),ui->OF_ID_F->text().toUInt(),ui->OF_PRIX->text().toUInt());
    offreFournisseur.modifier();
     ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
}
//-- Supprimer Stock Fournisseur
void MainWindow::on_pushButton_50_clicked()
{
    OffreFournisseur offreFournisseur(ui->OF_DELETE_F->text().toUInt(), ui->OF_DELETE_P->text().toUInt());
    offreFournisseur.supprimer();
    ui->tabOffreFournisseur->setModel(offreFournisseur.afficher());
}

//-- Trier Stock Fournisseur
void MainWindow::on_TRI_5_clicked()
{

}
