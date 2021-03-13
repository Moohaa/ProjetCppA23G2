#ifndef STOCK_H
#define STOCK_H

#include <QString>
#include <QSqlQueryModel>
#include <QSqlTableModel>

class stock
{
    int ID_STOCK;
    QString CATEGORIE_STOCK;
    int TEMPERATURE;
    QString EMPLACEMENT;
    QString DATE_STOCK;
    int QUANTITE;
    int ID_PRODUIT;


public:
    stock();
    stock(int);
    stock(QString,int,QString,QString,int,int);

    int getID_STOCK();
    QString getCATEGORIE_STOCK();
    int getTEMPERATURE();
    QString getEMPLACEMENT();
    QString getDATE_STOCK();
    int getQUANTITE();
    int getID_PRODUIT();


    void setID_STOCK(int);
    void setCATEGORIE_STOCK(QString);
    void setTEMPERATURE(int);
    void setEMPLACEMENT(QString);
    void setDATE_STOCK(QString);
    void setQUANTITE(int);
    void setID_PRODUIT(int);


    bool ajouter_stock();
    bool supprimer_stock();
    bool update_stock();
    QSqlQueryModel * afficher_stock();

    bool recherche(int ID_STOCK);
    QSqlTableModel * tri(int num);

    int lastId();

};
#endif // STOCK_H
