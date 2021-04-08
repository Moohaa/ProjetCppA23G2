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

        query.prepare("DELETE FROM STOCKAGE WHERE ID_STOCK=:ID_STOCK");
        query.addBindValue(stringId);

        return query.exec();


       /* QSqlQuery query;
        query.prepare("DELETE FROM STOCKAGE WHERE ID_STOCK= :ID_STOCK ");
        query.bindValue(":ID_UTILISATEUR", id);
        return    query.exec();*/
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

                      edit.prepare("update STOCKAGE set CATEGORIE_STOCK =:CATEGORIE_STOCK, TEMPERATURE =:TEMPERATURE, EMPLACEMENT =:EMPLACEMENT, DATE_STOCK =:DATE_STOCK, QUANTITE =:QUANTITE, ID_PRODUIT =:ID_PRODUIT where ID_STOCK =:ID_STOCK");

                      edit.bindValue(":ID_STOCK",res);
                      edit.bindValue(":CATEGORIE_STOCK",res1);
                      edit.bindValue(":TEMPERATURE",res2);
                      edit.bindValue(":EMPLACEMENT",res3);
                      edit.bindValue(":DATE_STOCK",res4);
                      edit.bindValue(":QUANTITE",res5);
                      edit.bindValue(":ID_PRODUIT",res6);


                      return edit.exec();
}

void stock::rechercher_cr1(QTableView* table,int num){
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from STOCKAGE  where QUANTITE=:QUANTITE");
    query->bindValue(":QUANTITE",num);
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}


QSqlQueryModel * stock::rechercher_cr2(const QString &CATEGORIE_STOCK)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from STOCKAGE where ((CATEGORIE_STOCK ) LIKE '%"+CATEGORIE_STOCK+"%')");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_STOCK"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("CATEGORIE_STOCK"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("TEMPERATURE"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("EMPLACEMENT"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("DATE_STOCK"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("ID_PRODUIT"));

    return model;
}

void stock::rechercher_cr3(QTableView* table,int num1){
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from STOCKAGE  where TEMPERATURE=:TEMPERATURE");
    query->bindValue(":TEMPERATURE",num1);
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}



void stock::tri_quantite(QTableView* table)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from STOCKAGE  ORDER BY QUANTITE ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}

void stock::tri_id(QTableView *table)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from STOCKAGE ORDER BY ID_STOCK ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}

void stock::tri_etage(QTableView *table)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from STOCKAGE  ORDER BY EMPLACEMENT ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}



