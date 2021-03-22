#include "produit.h"
#include <QSqlQuery>
#include <QVariant>

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
        if (qry3.exec()){
            while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool produit::ajouter(){
        QSqlQuery query;


        QString stringId = QString::number(this->ID_PRODUIT);
        //QString NOM_PRODUIT = QString(this->NOM_PRODUIT);
       //QString CATEGORIE_PRODUIT = QString(this->CATEGORIE_PRODUIT);

        query.prepare("INSERT INTO PRODUIT (ID_PRODUIT,NOM_PRODUIT,CATEGORIE_PRODUIT) VALUES (?, ?, ?)");
        query.addBindValue(stringId);
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
    QString stringId = QString::number(ID_PRODUIT);

    QSqlQuery edit;


                      edit.prepare("update PRODUIT set NOM_PRODUIT = :NOM_PRODUIT where ID_PRODUIT = :ID_PRODUIT");
                      edit.addBindValue(this->NOM_PRODUIT);
                      edit.addBindValue(this->CATEGORIE_PRODUIT);

                      //edit.bindValue(":ID_PRODUIT",res);
                      return    edit.exec();
}
