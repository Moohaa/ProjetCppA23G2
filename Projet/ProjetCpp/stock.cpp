#include "stock.h"
#include <QSqlQuery>
#include <QVariant>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QDebug>
#include <QDate>

stock::stock(){}


stock::stock(int ID_STOCK){
    this->ID_STOCK = ID_STOCK;
}
stock::stock(QString CATEGORIE_STOCK,int TEMPERATURE, QString EMPLACEMENT, QDate DATE_STOCK, int QUANTITE, int ID_PRODUIT){
    this->ID_STOCK = lastId();
    this->CATEGORIE_STOCK = CATEGORIE_STOCK;
    this->TEMPERATURE = TEMPERATURE;
    this->EMPLACEMENT = EMPLACEMENT;
    this->DATE_STOCK = DATE_STOCK;
    this->QUANTITE = QUANTITE;
    this->ID_PRODUIT = ID_PRODUIT;

}

    int stock::getID_STOCK(){return this->ID_STOCK;}
    QString stock::getCATEGORIE_STOCK(){return this->CATEGORIE_STOCK;}
    int stock::getTEMPERATURE(){return this->TEMPERATURE;}
    QString stock::getEMPLACEMENT(){return this->EMPLACEMENT;}
    QDate stock::getDATE_STOCK(){return this->DATE_STOCK;}
    int stock::getQUANTITE(){return this->QUANTITE;}
    int stock::getID_PRODUIT(){return this->ID_PRODUIT;}


    void stock::setID_STOCK(int ID_STOCK){this->ID_STOCK = ID_STOCK;};
    void stock::setCATEGORIE_STOCK(QString CATEGORIE_STOCK){this->CATEGORIE_STOCK = CATEGORIE_STOCK;}
    void stock::setTEMPERATURE(int TEMPERATURE){this->TEMPERATURE = TEMPERATURE;}
    void stock::setEMPLACEMENT(QString EMPLACEMENT){this->EMPLACEMENT = EMPLACEMENT;}
    void stock::setDATE_STOCK(QDate DATE_STOCK){this->DATE_STOCK = DATE_STOCK;}
    void stock::setQUANTITE(int QUANTITE){this->QUANTITE = QUANTITE;}
    void stock::setID_PRODUIT(int ID_PRODUIT){this->ID_PRODUIT = ID_PRODUIT;}


    int stock::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_STOCK from STOCKAGE");
        if (qry3.exec()){
            while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool stock::ajouter_stock(){

            QSqlQuery query;
            int a=lastId();

            QString stringInt = QString::number(this->ID_STOCK);

            query.prepare("INSERT INTO STOCKAGE VALUES (?, ?, ?, ?, ? , ?, ?)");
            query.addBindValue(a);
            query.addBindValue(this->CATEGORIE_STOCK);

            stringInt = QString::number(this->TEMPERATURE);
            query.addBindValue(stringInt);

            query.addBindValue(this->EMPLACEMENT);
            query.addBindValue(this->DATE_STOCK);

            stringInt = QString::number(this->QUANTITE);
            query.addBindValue(stringInt);

            stringInt = QString::number(this->ID_PRODUIT);
            qDebug() << stringInt;
            query.addBindValue(stringInt);

            return query.exec();

}



    bool stock::supprimer_stock(){
        QSqlQuery query;
        QString stringId = QString::number(ID_STOCK);

        query.prepare("DELETE FROM STOCKAGE WHERE ID_STOCK=?");
        query.addBindValue(stringId);

        return query.exec();
    }

QSqlQueryModel * stock::afficher_stock(){
    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from STOCKAGE");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_STOCK"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("CATEGORIE_STOCK"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("TEMPERATURE"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("EMPLACEMENT"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("DATE_STOCK"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("ID_PRODUIT"));



    return model;
    }




bool stock::update_stock()
{
    QString res=QString::number(ID_STOCK);
    QString res1= QString(CATEGORIE_STOCK);
    QString res2= QString::number(TEMPERATURE);
    QString res3= QString(EMPLACEMENT);
    QDate res4= QDate(DATE_STOCK);
    QString res5= QString::number(QUANTITE);
    QString res6= QString::number(ID_PRODUIT);

    QSqlQuery edit;

    CATEGORIE_STOCK=CATEGORIE_STOCK.toLower();
    CATEGORIE_STOCK[0]=CATEGORIE_STOCK[0].toUpper();


     EMPLACEMENT=EMPLACEMENT.toLower();
            EMPLACEMENT[0]= EMPLACEMENT[0].toUpper();




                      edit.prepare("update STOCKAGE set CATEGORIE_STOCK =(?), TEMPERATURE =(?), EMPLACEMENT =(?), DATE_STOCK =(?), QUANTITE =(?), ID_PRODUIT =(?) where ID_STOCK =(?)");

                      edit.addBindValue(res);
                      edit.addBindValue(res1);
                      edit.addBindValue(res2);
                      edit.addBindValue(res3);
                      edit.addBindValue(res4);
                      edit.addBindValue(res5);
                      edit.addBindValue(res6);

                      return edit.exec();


}


bool stock::recherche(int ID_STOCK)
{

    QString resid =  QString::number(ID_STOCK);

    QSqlQuery qry;

if (qry.exec("select * from PRODUIT where ID_STOCK='"+resid+"'"))
{

    int n=0;
    while (qry.next())
    {
n++;
    }
    qDebug () <<n;
    if (n==1)
 {qDebug () <<"il existe ";

    }
    else
    {
     qDebug () <<"il n'existe pas ";
    }
}

      return qry.exec();
}



QSqlTableModel *stock::tri(int num )
{

   QSqlTableModel *mmodel = new QSqlTableModel();
    mmodel->setTable("STOCKAGE");

   mmodel->setSort(num,Qt::DescendingOrder);
   mmodel->select();
   return mmodel;



}


