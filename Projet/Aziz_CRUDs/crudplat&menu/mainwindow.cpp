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
#include<QDate>
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

     // p.setNOM_PLAT(ui->lineEdit7_2->text());
      p.setNOM_PLAT(ui->lineEdit_6->text());
      p.setINGREDIENTS_PLAT(ui->lineEdit_7->text());
      p.setSPECIALITE_PLAT(ui->lineEdit_8->text());
      p.setPRIX_PLAT(ui->lineEdit_9->text().toFloat());
      p.setID_MENU(ui->lineEdit_10->text().toUInt());
      bool test=p.modifier();
      ui->tableView_2->setModel(p.afficher());
      if(test){
          QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);}
      else

          QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Nom plat introuvable"),  QMessageBox::Cancel);
}

void MainWindow::on_pushButton_7_clicked()//supprimer plat
{
    QSqlQuery query;
     plat p;
        plat plat(ui->textDelete_3->text());

         plat.supprimer();

        ui->tableView_2->setModel(plat.afficher());
        /* if(ui->textDelete_3->text()!=p.getNOM_PLAT()){
             QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Suppression effectuée"),  QMessageBox::Cancel);}
         else

             QMessageBox::critical(nullptr,QObject::tr("ok"),QObject::tr("Suppression non effectuée"),  QMessageBox::Cancel);*/

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

void MainWindow::on_pushButton_11_clicked()//supprimer menu
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

void MainWindow::on_pushButton_10_clicked()//modifier menu
{
    menu m;
   m.setID_MENU(ui->lineEdit7_3->text().toUInt());
   m.setDATE_MENU(ui->lineEdit_11->date());
   m.setNOM_MENU(ui->lineEdit_12->text());
   m.setCATEGORIE_MENU(ui->comboBox->currentText());
m.modifier();
  ui->tableView_3->setModel(m.afficher());

}

void MainWindow::on_pushButton_8_clicked()//rechercher plat
{
    QString findText;
        QString text = ui->lineEdit_13->text();
    plat p;
    QTableView* table=ui->tableView_2;
        if (text.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView_2->setModel(p.afficher());
            return;
        } else {
            findText = text;
            p.recherche(table,findText);


}
}

void MainWindow::on_pushButton_4_clicked()//trier plat
{
    plat p;
     QTableView* table=ui->tableView_2;
    p.trie(table);
}

void MainWindow::on_pushButton_5_clicked()//reinitialiser plat
{ plat p;
    ui->tableView_2->setModel(p.afficher());
}

void MainWindow::on_pushButton_12_clicked()//generation menu
{
    int text = ui->lineEdit_14->text().toUInt();
    int findText;
menu m;
plat p;
QTableView* table=ui->tableView;
QTableView* table1=ui->tableView_4;
        ui->tableView->setModel(m.afficher());
        findText = text;
        m.recherche(table,text);
        p.recherche1(table1,text);

}

void MainWindow::on_tableView_2_clicked(const QModelIndex &index)//recuperation des données au niveau de modiff plat
{
    int row =ui->tableView_2->selectionModel()->currentIndex().row();
     //ui->stackedWidget->setCurrentIndex(2);
     ui->lineEdit_6->setText(ui->tableView_2->model()->index(row,0).data().toString());
     ui->lineEdit_7->setText(ui->tableView_2->model()->index(row,1).data().toString());
     ui->lineEdit_8->setText(ui->tableView_2->model()->index(row,2).data().toString());
      ui->lineEdit_9->setText(ui->tableView_2->model()->index(row,3).data().toString());
     ui->lineEdit_10->setText(ui->tableView_2->model()->index(row,4).data().toString());

}

void MainWindow::on_tableView_3_clicked(const QModelIndex &index)//recuperation donnée menu
{
    int row =ui->tableView_3->selectionModel()->currentIndex().row();
       //ui->stackedWidget->setCurrentIndex(2);
       ui->lineEdit7_3->setText(ui->tableView_3->model()->index(row,0).data().toString());
       ui->lineEdit_11->setDate(ui->tableView_3->model()->index(row,1).data().toDate());
       ui->lineEdit_12->setText(ui->tableView_3->model()->index(row,2).data().toString());
       ui->comboBox->setCurrentText(ui->tableView_3->model()->index(row,3).data().toString());

}
