#include "stat.h"
#include "ui_stat.h"
#include <QVector>
#include<QObject>
#include<QtWidgets>
#include <QSqlQuery>
#include <QDialog>
//#include"ui_dialog.h"
#include<iostream>

stati::stati(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stati)
{
    ui->setupUi(this);
}

stati::~stati()
{
    delete ui;
}

int stati::Statistique_partie2()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from COMMANDE  where PRIX <= 4") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;



}
int stati::Statistique_partie3()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from COMMANDE  where PRIX >4 ") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;



}
int stati::Statistique_partie4()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from COMMANDE  where PRIX >4 AND PRIX <8 ") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;



}

void stati::paintEvent(QPaintEvent *)
{

    int b=Statistique_partie2();
    cout<<b<<endl ;
    int c=Statistique_partie3();
    cout<<c<<endl ;
    int d=Statistique_partie4();
    cout<<d<<endl ;


        float s2= b*100 ;
        float s3=c*100;
         float s4=d*100;
        float nb = b+c+d ;
        float q2 ;
        q2 = s2/nb ;
        float q3;
        q3=s3/nb;
        float q4;
        q4=s4/nb;
        float y  ;
        y = (q2*360)/100 ;
        float m;
        m= (q3*360)/100;

        float f= (q4*360)/100;

    QPainter painter(this);
    QRectF size=QRectF(150,40,this->width()-300,this->width()-300);

    painter.setBrush(Qt::blue);
    painter.drawPie(size,0,16*y);
   /* QPen pointpen(Qt::blue);
    pointpen.setWidth(21);
    QPoint p1;
    p1.setX(290);
    p1.setY(230);
   // painter.setPen(pointpen);*/
    ui->label_2F->setText("cher") ;
    painter.setBrush(Qt::green);
    painter.drawPie(size,16*y,16*m);
    ui->labelF->setText("pas cher") ;
    painter.setBrush(Qt::red);
    painter.drawPie(size,16*m,16*f);
    ui->labelFA->setText("moyen") ;



}

void stati::on_pushButton_clicked()
{
    hide();
}
