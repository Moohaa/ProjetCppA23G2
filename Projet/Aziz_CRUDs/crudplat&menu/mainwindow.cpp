#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QtWidgets>
#include <QSqlQuery>
#include "plat.h"
#include "menu.h"
#include<QTableView>
#include<QDateEdit>
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     plat test;
     menu test1;
    ui->tableView_2->setModel(test.afficher());
    ui->tableView_3->setModel(test1.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()//ajouter plat
{
    plat p(ui->lineEdit_6->text(), ui->lineEdit_7->text(),
         ui->lineEdit_8->text(),ui->lineEdit_9->text().toFloat(),ui->lineEdit_10->text().toUInt());
p.ajouter();
 ui->tableView_2->setModel(p.afficher());

}


void MainWindow::on_pushButton_6_clicked()//modifier plat
{
    plat p;

      p.setNOM_PLAT(ui->lineEdit7_2->text());
      p.setNOM_PLAT(ui->lineEdit_6->text());
      p.setINGREDIENTS_PLAT(ui->lineEdit_7->text());
      p.setSPECIALITE_PLAT(ui->lineEdit_8->text());
      p.setPRIX_PLAT(ui->lineEdit_9->text().toFloat());
      p.setID_MENU(ui->lineEdit_10->text().toUInt());
      p.modifier();

      ui->tableView_2->setModel(p.afficher());
}

void MainWindow::on_pushButton_7_clicked()//supprimer plat
{
    QSqlQuery query;
     plat p;
        plat plat(ui->textDelete_3->text());

       bool test= plat.supprimer();

       ui->tableView_2->setModel(plat.afficher());
        if(test){
            QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
        else

            QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_9_clicked()//ajouter menu
{
    //QSqlQuery req;
    menu m;
    QDate d=QDate::currentDate();
  //req.prepare("INSERT INTO MENU VALUES(4,:DATE_MENU,:NOM_MENU,:CATEGORIE_MENU");
    m.setDATE_MENU(d);
    m.setNOM_MENU(ui->lineEdit_12->text());
    m.setCATEGORIE_MENU(ui->comboBox->currentText());
    /*req.bindValue(":DATE_MENU",m.getDATE_MENU());
    req.bindValue(":NOM_MENU",m.getNOM_MENU());
    req.bindValue(":CATEGORIE_MENU",m.getCATEGORIE_MENU());
    */
    m.ajouter();
    ui->tableView_3->setModel(m.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);
    //req.exec();

}

void MainWindow::on_pushButton_11_clicked()
{
    QSqlQuery query;
    menu m;
       menu menu(ui->textDelete_5->text().toUInt());

      bool test= menu.supprimer();

      ui->tableView_3->setModel(menu.afficher());
       if(test){
           QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
       else

           QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_10_clicked()
{
    menu m;

    m.setID_MENU(ui->lineEdit7_3->text().toUInt());
   m.setDATE_MENU(ui->lineEdit_11->date());
   m.setNOM_MENU(ui->lineEdit_12->text());
   m.setCATEGORIE_MENU(ui->comboBox->currentText());
m.modifier();
  ui->tableView_3->setModel(m.afficher());
QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("modification effectuée"),  QMessageBox::Cancel);
}
