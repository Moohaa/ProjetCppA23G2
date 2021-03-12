#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "fournisseur.h"
#include "commandefournisseur.h"
#include "offrefournisseur.h"


using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     Fournisseur test;
     CommandeFournisseur commandeTest;
     OffreFournisseur offreTest;
     ui->tableView->setModel(test.afficher());
     ui->CF_Table->setModel(commandeTest.afficher());
     ui->O_Table->setModel(offreTest.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    Fournisseur fournisseur(ui->lineEdit->text(),
                            ui->lineEdit_2->text(),
                            ui->lineEdit_3->text(),
                            ui->lineEdit_4->text().toInt());
    fournisseur.ajouter();
    ui->tableView->setModel(fournisseur.afficher());
}

void MainWindow::on_pushButton_4_clicked()//Supprimer
{
    Fournisseur fournisseur(ui->textDelete->text().toUInt());
    fournisseur.supprimer();
    ui->tableView->setModel(fournisseur.afficher());
}

void MainWindow::on_pushButton_2_clicked() // Update Fournisseur
{
    Fournisseur fournisseur(ui->update_2->text(),ui->update_2->text(),ui->update_3->text(),ui->update_4->text().toUInt());
    fournisseur.setId(ui->update_1->text().toUInt());
    fournisseur.modifier();
    ui->tableView->setModel(fournisseur.afficher());
}

void MainWindow::on_pushButton_3_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CF_1->text().toInt(),
                                            ui->CF_2->text().toUInt(),ui->CF_3->text().toUInt(),
                                            ui->CF_4->text(),ui->CF_5->text());
    commandeFournisseur.ajouter();
    ui->CF_Table->setModel(commandeFournisseur.afficher());
}

void MainWindow::on_CF_Delete_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->textDelete_2->text().toUInt());
    commandeFournisseur.supprimer();
     ui->CF_Table->setModel(commandeFournisseur.afficher());
}


void MainWindow::on_pushButton_6_clicked()
{
    CommandeFournisseur commandeFournisseur(ui->CFU_2->text().toInt(),ui->CFU_3->text().toUInt(),
                                            ui->CFU_4->text().toUInt(),ui->CFU_5->text(),ui->CFU_6->text());

    commandeFournisseur.setidCommande(ui->CFU_1->text().toUInt());
    commandeFournisseur.modifier();
     ui->CF_Table->setModel(commandeFournisseur.afficher());
}

void MainWindow::on_pushButton_7_clicked()
{
    OffreFournisseur offreFournisseur(ui->O_1->text().toUInt(),ui->O_2->text().toUInt(),ui->O_3->text().toUInt());
    offreFournisseur.ajouter();
    ui->O_Table->setModel(offreFournisseur.afficher());
}

void MainWindow::on_pushButton_8_clicked()
{
    OffreFournisseur offreFournisseur(ui->OS_1->text().toUInt(), ui->OS_2->text().toUInt());
    offreFournisseur.supprimer();
    ui->O_Table->setModel(offreFournisseur.afficher());

}

void MainWindow::on_pushButton_9_clicked()
{
    OffreFournisseur offreFournisseur(ui->OU_1->text().toInt(),ui->OU_2->text().toUInt(),ui->OU_3->text().toUInt());
    offreFournisseur.modifier();
     ui->O_Table->setModel(offreFournisseur.afficher());
}
