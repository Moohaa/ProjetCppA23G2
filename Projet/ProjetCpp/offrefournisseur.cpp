#include "offrefournisseur.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>


    OffreFournisseur::OffreFournisseur(){}
   OffreFournisseur::OffreFournisseur(int idProduit,int idFournisseur){
   this->idProduit = idProduit;
   this->idFournisseur = idFournisseur;
   }
    OffreFournisseur::OffreFournisseur(int idProduit,int idFournisseur,int prix){
        this->idProduit = idProduit;
        this->idFournisseur = idFournisseur;
        this->prix = prix;
    }

    int OffreFournisseur::getidProduit(){return this->idProduit;}
    int OffreFournisseur::getidFournisseur(){return this->idFournisseur;}
    int OffreFournisseur::getprix(){return this->prix;}

    void OffreFournisseur::setidProduit(int idProduit){this->idProduit = idProduit;}
    void OffreFournisseur::setidFournisseur(int idFournisseur){this->idFournisseur = idFournisseur;}
    void OffreFournisseur::setprix(int prix){this->prix = prix;}

    bool OffreFournisseur::ajouter(){
        QSqlQuery query;

        QString stringIdProduit = QString::number(this->idProduit);
        QString stringIdFournisseur = QString::number(this->idFournisseur);
        QString stringPrix = QString::number(this->prix);

        query.prepare("INSERT INTO OFFRE VALUES (?, ?, ?)");
        query.addBindValue(stringIdProduit);
        query.addBindValue(stringIdFournisseur);
        query.addBindValue(stringPrix);

        return query.exec();
    }
    bool OffreFournisseur::supprimer(){
        QSqlQuery query;
        QString stringIdProduit = QString::number(this->idProduit);
        QString stringIdFournisseur = QString::number(this->idFournisseur);

        query.prepare("DELETE FROM OFFRE WHERE ID_FOURNISSEUR=? AND ID_PRODUIT = ?");
        query.addBindValue(stringIdProduit);
        query.addBindValue(stringIdFournisseur);

        return query.exec();
    }
    bool OffreFournisseur::modifier(){
        QSqlQuery query;

        QString stringIdProduit = QString::number(this->idProduit);
        QString stringIdFournisseur = QString::number(this->idFournisseur);
        QString stringPrix = QString::number(this->prix);

        query.prepare("UPDATE OFFRE SET PRIX=? WHERE ID_FOURNISSEUR=? AND ID_PRODUIT=?");


        query.addBindValue(stringPrix);
        query.addBindValue(stringIdFournisseur);
        query.addBindValue(stringIdProduit);
        return query.exec();
    }
    QSortFilterProxyModel * OffreFournisseur::afficher(){

        QSqlQueryModel* model   = new QSqlQueryModel();

        model->setQuery("select * from OFFRE");
        model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_PRODUIT"));
        model->setHeaderData(1, Qt::Horizontal,QObject::tr("ID_FOURNISSEUR"));
        model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRIX"));

        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(model);
        proxyModel->setSourceModel(model);
        return proxyModel;
    }
