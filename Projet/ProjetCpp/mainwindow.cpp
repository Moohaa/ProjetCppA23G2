#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>

#include "produit.h"
#include "stock.h"

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
    media->setMedia( QUrl::fromLocalFile("C:/Users/PC/Desktop/Projet C++/lumina.mp3"));
    media->play();

    QPixmap pix("C:/Users/PC/Desktop/Projet C++/Photos/hhhhhh.png");
    QPixmap pix1("C:/Users/PC/Desktop/Projet C++/Calque 0.png");

    ui->label_5->setPixmap(pix);
    ui->label_3->setPixmap(pix1);

     produit test;
    ui->tableView_A->setModel(test.afficher()); //Afficher Produit
    ui->tableView_A->setModel(test.tri(ui->tableView_A->currentIndex().column()));

    stock test1;
   ui->tableView_B->setModel(test1.afficher_stock());//Afficher Stock
   //ui->tableView_B->setModel(test1.tri(ui->tableView_B->currentIndex().column()));


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

void MainWindow::on_tableView_A_clicked(const QModelIndex &index)//rechercher un produit
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

//-----------------------------------------------~MAILING~--------------------------------------------------------
/*void MainWindow::on_sendBtn_clicked()
{
    //QApplication a(argc, argv);

    // This is a first demo application of the SmtpClient for Qt project

    // First we need to create an SmtpClient object
    // We will use the Gmail's smtp server (smtp.gmail.com, port 465, ssl)

    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

    // We need to set the username (your email address) and the password
    // for smtp authentification.

    smtp.setUser("rajianacib@gmail.com");
    smtp.setPassword("nbvcxwnbvcxw");

    // Now we create a MimeMessage object. This will be the email.

    MimeMessage message;

    message.setSender(new EmailAddress("rajianacib@gmail.com", "Mariem Nacib"));
    message.addRecipient(new EmailAddress("rajianacib@gmail.com", "Stockage"));
    message.setSubject("STOCK LIMITE");

    // Now add some text to the email.
    // First we create a MimeText object.

    MimeText text;

    text.setText("Votre stock est limite veuillez commandez des neauveau produits\n");

    // Now add it to the mail

    message.addPart(&text);

    // Now we can send the mail

    smtp.connectToHost();
    smtp.login();
    if(smtp.sendMail(message))
    {
        QMessageBox::information(this,"C'est bien", "Votre E-mail est bien envoyé!");
    }
    else
    {
        QMessageBox::critical(this,"Error", "E-Mail non envoyé!");
    }

    smtp.quit();

}*/

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

void MainWindow::on_tableView_B_clicked(const QModelIndex &index)//rechercher un stock
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
