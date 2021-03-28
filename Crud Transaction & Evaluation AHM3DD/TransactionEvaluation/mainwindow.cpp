#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "transaction.h"
#include "evaluation.h"
#include <QDate>


using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     Transaction test;
     Evaluation test1;
    ui->tableView_2->setModel(test.afficher());
    ui->tableView->setModel(test1.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter Transaction
{
    Transaction t;

    t.setNOM_CLIENT(ui->lineEdit_2->text());
    t.setNUM_CLIENT(ui->lineEdit_3->text().toInt());
    t.setADRESSE_CLIENT(ui->comboBox->currentText());
    t.setDATE_HEURE(ui->dateTimeEdit->date());
    t.setPRIX(ui->lineEdit_5->text().toInt());
    t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

        t.ajouter();


            ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_pushButton_7_clicked()//Supprimer Transaction
{
    Transaction Transaction(ui->textDelete_2->text().toUInt());
    Transaction.supprimer();
    ui->tableView_2->setModel(Transaction.afficher());
}


void MainWindow::on_pushButton_6_clicked() // ModifierTransaction
{

    Transaction t;

      t.setID_FACTURE(ui->textEdit_2->text().toInt());
      t.setNOM_CLIENT(ui->lineEdit_2->text());
      t.setNUM_CLIENT(ui->lineEdit_3->text().toInt());
      t.setADRESSE_CLIENT(ui->comboBox->currentText());
      t.setDATE_HEURE(ui->dateTimeEdit->date());
      t.setPRIX(ui->lineEdit_5->text().toInt());
      t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

      t.update();

      ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_pushButton_3_clicked()// trier Transaction
{
    Transaction t;

  ui->tableView_2->setModel(t.tri(ui->tableView_2->currentIndex().column()));
}

void MainWindow::on_rechercher_clicked()// recherchre une transaction
{

}

//-----------------------------------~Evaluation~--------------------------------------
void MainWindow::on_pushButton_2_clicked()//Ajouter Evaluation
{
    Evaluation e(ui->lineEdit_4->text(), ui->comboBox_2->currentText().toUInt(),
                  ui->comboBox_3->currentText(),ui->lineEdit_9->text().toUInt());

        e.ajouter();


            ui->tableView->setModel(e.afficher());
}

void MainWindow::on_pushButton_4_clicked()//Supprimer Evaluation
{
    Evaluation Evaluation(ui->textDelete->text().toUInt());
    Evaluation.supprimer();
    ui->tableView->setModel(Evaluation.afficher());
}


void MainWindow::on_pushButton_8_clicked() // Modifier Evaluation
{

    Evaluation e;

      e.setID_NOTE(ui->textEdit_4->text().toInt());
      e.setNOM_CLIENT(ui->lineEdit_4->text());
      e.setNOTE_CLIENT(ui->comboBox_2->currentText().toUInt());
      e.setREMARQUE_CLIENT(ui->comboBox_3->currentText());
      e.setID_FACTURE(ui->lineEdit_9->text().toInt());

      e.update();

      ui->tableView->setModel(e.afficher());
}


void MainWindow::on_rechercher_2_clicked()// rechercher une evaluation
{

}
