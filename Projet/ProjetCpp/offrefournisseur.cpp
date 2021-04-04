#include "offrefournisseur.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <string>
#include <iostream>
#include <QThread>

QT_CHARTS_USE_NAMESPACE
using namespace  std;

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

    int OffreFournisseur::lastIdFournisseur(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select MAX(ID_FOURNISSEUR) from OFFRE");
        if (qry3.exec()){
            while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId;
    }

    int OffreFournisseur::lastIdProduit(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select MAX(ID_PRODUIT) from OFFRE");
        if (qry3.exec()){
            while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId;
    }

    QVBoxLayout * OffreFournisseur::stat(){
        int countFournisseur = this->lastIdFournisseur();
        int countProduit = this->lastIdProduit();
        QStringList categories;
        for (int j = 1;j<= countProduit;j++) {
            categories << QString::fromStdString(std::to_string(j));
        }
        cout << countFournisseur << " " << countProduit << endl;
         QBarSeries *series = new QBarSeries();
        for (int i=1;i <= countFournisseur;i++) {
            std::string s = std::to_string(i);
            QString qstr = QString::fromStdString(s);
            QBarSet *set0 = new QBarSet(qstr);
            for (int j=1;j<= countProduit;j++) {

                QSqlQuery query;

                QString stringIdProduit = QString::number(j);
                QString stringIdFournisseur = QString::number(i);

                query.prepare("SELECT PRIX FROM OFFRE WHERE ID_FOURNISSEUR=? AND ID_PRODUIT=?");

                query.addBindValue(stringIdFournisseur);
                query.addBindValue(stringIdProduit);

                 query.exec();
                 if(query.next()){
                     *set0 << query.value(0).toUInt();
                 }else{
                     *set0 << 0;
                 }
            }
            series->append(set0);
        }
           QChart *chart = new QChart();
           chart->addSeries(series);
           chart->setTitle("Offres prix produit");
           chart->setAnimationOptions(QChart::SeriesAnimations);
           QBarCategoryAxis *axis = new QBarCategoryAxis();
           axis->append(categories);
           chart->createDefaultAxes();
           chart->setAxisX(axis, series);
           chart->legend()->setVisible(true);
           chart->legend()->setAlignment(Qt::AlignBottom);
           QChartView *chartView = new QChartView(chart);
           chartView->setRenderHint(QPainter::Antialiasing);
        QVBoxLayout *mainLayout = new QVBoxLayout;
         mainLayout->addWidget(chartView);
         return mainLayout;

    }


    QSortFilterProxyModel * OffreFournisseur::searchProduit(int produit){
        QSqlQueryModel* model   = new QSqlQueryModel();
        QSqlQuery query;
        QString string ="SELECT * FROM OFFRE WHERE ID_PRODUIT="+QString::number(produit);
        model->setQuery(string);
        model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_PRODUIT"));
        model->setHeaderData(1, Qt::Horizontal,QObject::tr("ID_FOURNISSEUR"));
        model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRIX"));
        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(model);
        proxyModel->setSourceModel(model);
        return proxyModel;
    }


    QSortFilterProxyModel * OffreFournisseur::searchFournisseur(int f){
        QSqlQueryModel* model   = new QSqlQueryModel();
        QSqlQuery query;
        QString string ="SELECT * FROM OFFRE WHERE ID_FOURNISSEUR="+QString::number(f);
        model->setQuery(string);
        model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_PRODUIT"));
        model->setHeaderData(1, Qt::Horizontal,QObject::tr("ID_FOURNISSEUR"));
        model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRIX"));
        QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(model);
        proxyModel->setSourceModel(model);
        return proxyModel;
    }
