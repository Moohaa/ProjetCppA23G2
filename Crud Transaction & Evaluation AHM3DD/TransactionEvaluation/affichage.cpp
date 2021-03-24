#include "affichage.h"
#include "ui_affichage.h"
#include "transaction.h"
#include "connection.h"

affichage::affichage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichage)
{
    ui->setupUi(this);
}

affichage::~affichage()
{
    delete ui;
}

void affichage::setclient(client c){

    ui->lineEdit->setText(c.getNom());
    ui->lineEdit_2->setText(c.getPrenom());
    ui->lineEdit_3->setText(c.getAge());
    ui->lineEdit_4->setText(c.getAge());
}
