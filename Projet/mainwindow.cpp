#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "fournisseur.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     Fournisseur test;
    ui->tableView->setModel(test.afficher());
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
