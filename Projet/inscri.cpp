#include "inscri.h"
#include "ui_inscri.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <string>
#include <QDebug>
Inscri::Inscri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inscri)
{
    ui->setupUi(this);
    animation2 = new QPropertyAnimation(ui->inscription_inscrit,"geometry");
    animation2->setDuration(10000);
    animation2->setStartValue(ui->inscription_inscrit->geometry());
    animation2->setEndValue(QRect(250,250,100,25));
    animation2->start();
}

Inscri::~Inscri()
{
    delete ui;
}



void Inscri::on_inscription_inscrit_clicked()
{
       // ui->textEdit->setText(ui->inscri()->text());
        QString nom = ui->inscription_nom->text();
        QString prenom= ui->inscription_prenom ->text();
        QString email = ui->inscription_email->text();
        QString mdp= ui->inscription_mdp->text();
//        QString role= ui->inscription_role->text();


        QSqlQuery query;
        query.prepare("INSERT INTO UTILISATEUR (ID_UTILISATEUR, NOM_UTILISATEURR,PRENOM_UTILISATEUR,EMAIL_UTILISATEUR,MDP_UTILISATEUR,ROLE_UTILISATEUR) VALUES (1,?, ?, ?, ?,?)");
        query.addBindValue(nom);
        query.addBindValue(prenom);
        query.addBindValue(email);
        query.addBindValue(mdp);
        //query.addBindValue(role);
        query.exec();

        std::string message = "Client "+nom.toStdString()+" "
                +prenom.toStdString()+" "
                +nom.toStdString()+" ";
                //+role.toStdString();
//        ui->textEdit->setText(QString::fromStdString(message));
    }



