#include "produit.h"
#include <QDebug>
#include <QSqlQuery>
#include <QVariant>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QTableView>

produit::produit(){}


produit::produit(int ID_PRODUIT){this->ID_PRODUIT = ID_PRODUIT;}


produit::produit(QString NOM_PRODUIT,QString CATEGORIE_PRODUIT){
    this->ID_PRODUIT = lastId();
    this->NOM_PRODUIT = NOM_PRODUIT;
    this->CATEGORIE_PRODUIT =CATEGORIE_PRODUIT;

}

    int produit::getID_PRODUIT(){return this->ID_PRODUIT;}
    QString produit::getNOM_PRODUIT(){return this->NOM_PRODUIT;}
    QString produit::getCATEGORIE_PRODUIT(){return this->CATEGORIE_PRODUIT;}


    void produit::setID_PRODUIT(int ID_PRODUIT){this->ID_PRODUIT = ID_PRODUIT;};
    void produit::setNOM_PRODUIT(QString NOM_PRODUIT){this->NOM_PRODUIT = NOM_PRODUIT;}
    void produit::setCATEGORIE_PRODUIT(QString CATEGORIE_PRODUIT){this->CATEGORIE_PRODUIT = CATEGORIE_PRODUIT;}


    int produit::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_PRODUIT from PRODUIT");
        if (qry3.exec())
        {
            while(qry3.next())
            {
            lastId = qry3.value(0).toInt();
            }
         }
        return lastId+1;
    }


    bool produit::ajouter(){
        QSqlQuery query;

        int l=lastId();
        QString stringId = QString::number(this->ID_PRODUIT);

        query.prepare("INSERT INTO PRODUIT (ID_PRODUIT,NOM_PRODUIT,CATEGORIE_PRODUIT) VALUES (?, ?, ?)");
        query.addBindValue(l);
        query.addBindValue(this->NOM_PRODUIT);
        query.addBindValue(this->CATEGORIE_PRODUIT);


        return query.exec();
}

    bool produit::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(ID_PRODUIT);

        query.prepare("DELETE FROM PRODUIT WHERE ID_PRODUIT=?");
        query.addBindValue(stringId);

        return query.exec();
    }

QSqlQueryModel * produit::afficher(){
    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from PRODUIT");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_PRODUIT"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM_PRDUIT"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("CATEGORIE_PRODUIT"));


    return model;
    }




bool produit::update()
{
    QString res=QString::number(ID_PRODUIT);
    QString res1= QString(NOM_PRODUIT);
    QString res2= QString(CATEGORIE_PRODUIT);
    QSqlQuery edit;


                      edit.prepare("update PRODUIT set NOM_PRODUIT = :NOM_PRODUIT, CATEGORIE_PRODUIT = :CATEGORIE_PRODUIT WHERE ID_PRODUIT = :ID_PRODUIT");

                      edit.bindValue(":ID_PRODUIT",res);
                      edit.bindValue(":NOM_PRODUIT",res1);
                      edit.bindValue(":CATEGORIE_PRODUIT",res2);
                      return    edit.exec();
}

void produit::recherche(QTableView* table,QString CATEGORIE_PRODUIT){

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT where CATEGORIE_PRODUIT='"+CATEGORIE_PRODUIT+"'");
    query->bindValue(":CATEGORIE_PRODUIT",CATEGORIE_PRODUIT);
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}

<<<<<<< Updated upstream
void produit::tri(QTableView* table){
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT  ORDER BY ID_PRODUIT ");
=======
void produit::tri(QTableView *table)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT  ORDER BY ID_PRODUIT ASC");
>>>>>>> Stashed changes
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}
<<<<<<< Updated upstream
=======
void produit::tri1(QTableView *table)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT  ORDER BY CATEGORIE_PRODUIT ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();

}
void produit::tri2(QTableView *table)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT  ORDER BY NOM_PRODUIT ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
>>>>>>> Stashed changes

void produit::tri1(QTableView* table){
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT  ORDER BY CATEGORIE_PRODUIT ");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}

void produit::tri2(QTableView* table){
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT  ORDER BY NOM_PRODUIT ");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}
