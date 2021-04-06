#ifndef STOCK_H
#define STOCK_H

#include <QString>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDate>
#include <QTableView>

class stock
{
    int ID_STOCK;
    QString CATEGORIE_STOCK;
    int TEMPERATURE;
    QString EMPLACEMENT;
    QDate DATE_STOCK;
    int QUANTITE;
    int ID_PRODUIT;


public:
    stock();
    stock(int);
    stock(QString,int,QString,QDate,int,int);

    int getID_STOCK();
    QString getCATEGORIE_STOCK();
    int getTEMPERATURE();
    QString getEMPLACEMENT();
    QDate getDATE_STOCK();
    int getQUANTITE();
    int getID_PRODUIT();


    void setID_STOCK(int);
    void setCATEGORIE_STOCK(QString);
    void setTEMPERATURE(int);
    void setEMPLACEMENT(QString);
    void setDATE_STOCK(QDate);
    void setQUANTITE(int);
    void setID_PRODUIT(int);


    bool ajouter_stock();
    void selectionner(int ID_STOCK);
    bool supprimer_stock();
    bool update_stock();
    QSqlQueryModel * afficher_stock();

    //void recherche(QTableView* table,QString CATEGORIE_STOCK);
    void rechercher_cr1(QTableView* table,int QUANTITE);
    QSqlQueryModel * rechercher_cr2(const QString &CATEGORIE_STOCK);
    void rechercher_cr3(QTableView* table,int TEMPERATURE);

    void tri_quantite(QTableView* table);
    void tri_id(QTableView* table);
<<<<<<< Updated upstream
    void tri_etage(QTableView *table);
=======
    void tri_Etage(QTableView *table);
>>>>>>> Stashed changes

    int lastId();

};
#endif // STOCK_H
