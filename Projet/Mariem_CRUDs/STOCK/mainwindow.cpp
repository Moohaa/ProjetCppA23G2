#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "stock.h"
#include <QTableView>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     stock test;
    ui->tableView->setModel(test.afficher_stock());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    stock s;

    s.setCATEGORIE_STOCK(ui->lineEdit_2->text());
    s.setTEMPERATURE(ui->lineEdit_3->text().toInt());
    s.setEMPLACEMENT(ui->lineEdit_4->text());
    s.setDATE_STOCK(ui->lineEdit_5->text());
    s.setQUANTITE(ui->lineEdit_6->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_7->text().toInt());

    s.ajouter_stock();
    ui->tableView->setModel(s.afficher_stock());

}



void MainWindow::on_pushButton_5_clicked()//suuprimer
{

    stock s(ui->textDelete->text().toUInt());
    s.supprimer_stock();
    ui->tableView->setModel(s.afficher_stock());
}


void MainWindow::on_pushButton_4_clicked()//modifier
{
    stock s;

    s.setID_STOCK(ui->lineEdit->text().toInt());
    s.setCATEGORIE_STOCK(ui->lineEdit_2->text());
    s.setTEMPERATURE(ui->lineEdit_3->text().toInt());
    s.setEMPLACEMENT(ui->lineEdit_4->text());
    s.setDATE_STOCK(ui->lineEdit_5->text());
    s.setQUANTITE(ui->lineEdit_6->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_7->text().toInt());

 s.update_stock();

    ui->tableView->setModel(s.afficher_stock());

}
