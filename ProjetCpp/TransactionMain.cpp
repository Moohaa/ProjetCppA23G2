#include "transactionmain.h"

#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "transaction.h"
#include "evaluation.h"
#include <QDate>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)

{
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

void MainWindow::on_pushButton_15_clicked()// trier Transaction
{
    Transaction t;

  ui->tableView_2->setModel(t.tri(ui->tableView_2->currentIndex().column()));
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



