#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>

#include "produit.h"
#include "stock.h"
//#include "smtp.h"

#include <QDebug>
#include "connection.h"

#include <string>
#include <QSqlQuery>
#include <QTableView>

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     produit test;
    ui->tableView_A->setModel(test.afficher()); //Afficher Produit
    //ui->tableView_A->setModel(test.tri(ui->tableView_A->currentIndex().column()));

    stock test1;
   ui->tableView_B->setModel(test1.afficher_stock());//Afficher Stock
   //ui->tableView_B->setModel(test1.tri(ui->tableView_B->currentIndex().column()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

//--------------------------------~PRODUIT~----------------------------------------------
void MainWindow::on_pushButton_clicked()//Ajouter Produit
{
    produit p;


    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->lineEdit_3->text());

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


void MainWindow::on_pushButton_4_clicked()//modifier produit
{
    produit p;

    p.setID_PRODUIT(ui->lineEdit->text().toUInt());
    p.setNOM_PRODUIT(ui->lineEdit_2->text());
    p.setCATEGORIE_PRODUIT(ui->lineEdit_3->text());

 p.update();

    ui->tableView_A->setModel(p.afficher());
}

void MainWindow::on_TRI_clicked()//tri Produit
{
        produit p;

      ui->tableView_A->setModel(p.tri(ui->tableView_A->currentIndex().column()));

}

//---------------------------------~STOCK~----------------------------------------------

void MainWindow::on_pushButton_3_clicked()//Ajouter Stock
{
    stock s;

    s.setCATEGORIE_STOCK(ui->lineEdit_15->text());
    s.setTEMPERATURE(ui->lineEdit_16->text().toInt());
    s.setEMPLACEMENT(ui->lineEdit_17->text());
    s.setDATE_STOCK(ui->lineEdit_18->text());
    s.setQUANTITE(ui->lineEdit_19->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_20->text().toInt());

    s.ajouter_stock();
    ui->tableView_B->setModel(s.afficher_stock());


}



void MainWindow::on_pushButton_7_clicked()//suuprimer Stock
{

    stock s(ui->textDelete->text().toUInt());
    s.supprimer_stock();
    ui->tableView_B->setModel(s.afficher_stock());
}


void MainWindow::on_pushButton_5_clicked()//modifier Stock
{
    stock s;

    s.setID_STOCK(ui->lineEdit_21->text().toInt());
    s.setCATEGORIE_STOCK(ui->lineEdit_15->text());
    s.setTEMPERATURE(ui->lineEdit_16->text().toInt());
    s.setEMPLACEMENT(ui->lineEdit_17->text());
    s.setDATE_STOCK(ui->lineEdit_18->text());
    s.setQUANTITE(ui->lineEdit_19->text().toInt());
    s.setID_PRODUIT(ui->lineEdit_20->text().toInt());

 s.update_stock();

    ui->tableView_B->setModel(s.afficher_stock());

}


void MainWindow::on_TRI_2_clicked()//tri stock
{
    stock s;

  ui->tableView_B->setModel(s.tri(ui->tableView_B->currentIndex().column()));

}
