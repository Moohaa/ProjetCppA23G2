#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "produit.h"
#include <QTableView>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     produit test;
    ui->tableView->setModel(test.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    produit p;


    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->lineEdit_3->text());

    p.ajouter();
    ui->tableView->setModel(p.afficher());

}



void MainWindow::on_pushButton_5_clicked()//suuprimer
{
    //produit p;
    produit produit(ui->textDelete->text().toUInt());
    produit.supprimer();
    ui->tableView->setModel(produit.afficher());
}


void MainWindow::on_pushButton_4_clicked()//modifier
{
    produit p;

    p.setID_PRODUIT(ui->lineEdit->text().toUInt());
    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->lineEdit_3->text());

 p.update();

    ui->tableView->setModel(p.afficher());

}
