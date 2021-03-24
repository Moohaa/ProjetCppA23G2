#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include"table.h"
#include<QtWidgets>
#include <QSqlQuery>
#include <QVariant>
#include<QTableView>
#include <QSqlTableModel>
#include<QSqlRecord>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->setModel(test.afficher());
      ui->tableView_2->setModel(com.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()//AJOUTER TAB
{

 Table t(ui->lineEdit->text().toInt(), ui->lineEdit_2->text().toInt(),
        ui->comboBox->currentText(),ui->comboBox_2->currentText(),ui->lineEdit_3->text().toInt());
t.ajouter();
ui->tableView->setModel(t.afficher());
}

void MainWindow::on_pushButton_2_clicked()//supprimer tab
{
    Table t1;
    t1.setNUM_TABLE(ui->lineEdit_4->text().toInt());
    bool test =t1.supprimer(t1.get_NUM_TABLE());
    QMessageBox msgBox;
    if(test)
    {msgBox.setText("supression avec succés");
      ui->tableView->setModel(t1.afficher());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();
}

void MainWindow::on_pushButton_3_clicked()//modifier table
{/*

    Table t2;
  int a;
          a=ui->lineEdit_5->text().toInt();


      QString b=QString ::number(t2.get_NUM_TABLE());
      t2.setNUM_TABLE(b.toInt());
      t2.setNB_CHAISES(ui->lineEdit_2->text().toInt());
      t2.setEMPLACEMENT( ui->comboBox->currentText());
      t2.setDISPONIBILITE(ui->comboBox_2->currentText());
      t2.setDEBARRASSAGE(ui->lineEdit_3->text().toInt());
    t2.modifier();
      ui->tableView->setModel(t2.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);
     ui->toupdate->setText("");

            ui->lineEdit_17->setText("");
            ui->lineEdit_9->setText("");
            ui->lineEdit_10->setText("");
            ui->lineEdit_11->setText("");
            ui->lineEdit_12->setText("");
            ui->lineEdit_13->setText("");
            ui->lineEdit_14->setText("");
            ui->lineEdit_15->setText("");
  */  }


void MainWindow::on_pushButton_4_clicked()//AJOUTER COMMANDE
{
    Commande c(ui->lineEdit_6->text().toUInt(), ui->lineEdit_11->text().toUInt(),
        ui->lineEdit_10->text(),ui->lineEdit_9->text(),ui->lineEdit_8->text().toFloat(),ui->lineEdit_7->text().toUInt());
c.ajouter();
ui->tableView_2->setModel(c.afficher());
}

void MainWindow::on_pushButton_6_clicked()//SUPPRIMER UNE COMMANDE
{
    Commande c1;
    c1.setID_COMMANDE(ui->lineEdit_13->text().toInt());
    bool test =c1.supprimer(c1.get_ID_COMMANDE());
    QMessageBox msgBox;
    if(test)
    {msgBox.setText("supression avec succés");
      ui->tableView_2->setModel(c1.afficher());
    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();
}

void MainWindow::on_pushButton_5_clicked()//modifier com
{


    Commande c2;

   c2.setID_COMMANDE(ui->lineEdit_6->text().toUInt());
      c2.setQUANTITE(ui->lineEdit_11->text().toUInt());
      c2.setLIBELLE(  ui->lineEdit_10->text());
      c2.setDESCRIPTION( ui->lineEdit_9->text());
      c2.setPRIX(ui->lineEdit_8->text().toFloat());
      c2.setNUM_TABLE(ui->lineEdit_7->text().toUInt());
    c2.modifier();
      ui->tableView_2->setModel(c2.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("Modification effectuée"),  QMessageBox::Cancel);
}




void MainWindow::on_pushButton_8_clicked()//trier par num
{
    Table t;
    QTableView* table=ui->tableView;
    t.tri_Num(table);
}

void MainWindow::on_pushButton_9_clicked()//trier par nbr chaises
{
    Table t;
    QTableView* table=ui->tableView;
    t.tri_NB(table);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString NUM_TABLE;
    QString find =ui->find->text();
Table t;
    QTableView* table=ui->tableView;
        if (find.isEmpty()) {
            QMessageBox::information(this, tr("Empty Field"),
                tr("Entrez une specialité a rechercher."));
            ui->tableView->setModel(t.afficher());
            return;
        } else {
            NUM_TABLE = find;
            t.recherche(table,NUM_TABLE.toInt());

}
}
