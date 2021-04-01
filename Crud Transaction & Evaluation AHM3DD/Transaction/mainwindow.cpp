#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "transaction.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     Transaction test;
    //ui->tableView->setModel(test.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    Transaction t(ui->lineEdit_2->text(), ui->lineEdit_5->text().toInt(),
                  ui->lineEdit_6->text(),ui->lineEdit_4->text(),ui->lineEdit_5->text().toUInt()
                  ,ui->lineEdit_7->text().toUInt());

        t.ajouter();


            ui->tableView->setModel(t.afficher());
}

void MainWindow::on_pushButton_4_clicked()//Supprimer
{
    Transaction Transaction(ui->textDelete->text().toUInt());
    Transaction.supprimer();
    ui->tableView->setModel(Transaction.afficher());
}


void MainWindow::on_pushButton_5_clicked() // Modifier
{

    Transaction t;

      t.setID_FACTURE(ui->textDelete->text().toInt());
      t.setNOM_CLIENT(ui->lineEdit_2->text());
      t.setNUM_CLIENT(ui->lineEdit_3->text().toInt());
      t.setADRESSE_CLIENT(ui->lineEdit_6->text());
      t.setDATE_HEURE(ui->lineEdit_4->text());
      t.setPRIX(ui->lineEdit_5->text().toInt());
      t.setID_UTILISATEUR(ui->lineEdit_7->text().toInt());

      t.update();

      ui->tableView->setModel(t.afficher());
}
