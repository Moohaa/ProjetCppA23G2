#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "evaluation.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     Evaluation test;
    //ui->tableView->setModel(test.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    Evaluation e(ui->lineEdit_2->text(), ui->lineEdit_3->text().toInt(),
                  ui->lineEdit_4->text(),ui->lineEdit_5->text().toUInt());

        e.ajouter();


            ui->tableView->setModel(e.afficher());
}

void MainWindow::on_pushButton_4_clicked()//Supprimer
{
    Evaluation Evaluation(ui->textDelete->text().toUInt());
    Evaluation.supprimer();
    ui->tableView->setModel(Evaluation.afficher());
}


void MainWindow::on_pushButton_5_clicked() // Modifier
{

    Evaluation e;

      e.setID_NOTE(ui->textDelete->text().toInt());
      e.setNOM_CLIENT(ui->lineEdit_2->text());
      e.setNOTE_CLIENT(ui->lineEdit_3->text().toInt());
      e.setREMARQUE_CLIENT(ui->lineEdit_4->text());
      e.setID_FACTURE(ui->lineEdit_5->text().toInt());

      e.update();

      ui->tableView->setModel(e.afficher());
}
