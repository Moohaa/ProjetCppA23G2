#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QtWidgets>
#include <QSqlQuery>
#include "menu.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     menu test;
    ui->tableView->setModel(test.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    //QSqlQuery req;
    menu m;

  //req.prepare("INSERT INTO MENU VALUES(4,:DATE_MENU,:NOM_MENU,:CATEGORIE_MENU");
    m.setDATE_MENU(ui->lineEdit->text());
    m.setNOM_MENU(ui->lineEdit_2->text());
    m.setCATEGORIE_MENU(ui->lineEdit_3->text());
    /*req.bindValue(":DATE_MENU",m.getDATE_MENU());
    req.bindValue(":NOM_MENU",m.getNOM_MENU());
    req.bindValue(":CATEGORIE_MENU",m.getCATEGORIE_MENU());
    */
    m.ajouter();
    ui->tableView->setModel(m.afficher());   
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Ajout effectuée"),  QMessageBox::Cancel);
    //req.exec();


}

void MainWindow::on_pushButton_4_clicked()//Supprimer
{        QSqlQuery query;
 menu m;
    menu menu(ui->textDelete->text().toUInt());

   bool test= menu.supprimer();

   ui->tableView->setModel(menu.afficher());
    if(test){
        QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
    else

        QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);


}









void MainWindow::on_pushButton_3_clicked()
{   /*int indice=ui->lineEdit7->text().toUInt();
    menu m;
    if(indice>0)
    {
        ui->lineEdit->setText(m.getDATE_MENU());
        ui->lineEdit_2->setText(m.getNOM_MENU());
        ui->lineEdit_3->setText(m.getCATEGORIE_MENU());


    }*/
    menu m;

          m.setID_MENU(ui->lineEdit7->text().toUInt());
         m.setDATE_MENU(ui->lineEdit->text());
         m.setNOM_MENU(ui->lineEdit_2->text());
         m.setCATEGORIE_MENU(ui->lineEdit_3->text());
 m.modifier();
        ui->tableView->setModel(m.afficher());

}



