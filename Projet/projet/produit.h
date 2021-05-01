#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>
class produit
{
    int ID_PRODUIT;
    QString NOM_PRODUIT;
    QString CATEGORIE_PRODUIT;


public:
    produit();
    produit(int);
    produit(QString,QString);

    int getID_PRODUIT();
    QString getNOM_PRODUIT();
    QString getCATEGORIE_PRODUIT();


    void setID_PRODUIT(int);
    void setNOM_PRODUIT(QString);
    void setCATEGORIE_PRODUIT(QString);


    bool ajouter();
    bool supprimer();
    bool update();
    QSqlQueryModel * afficher();

    void recherche(QTableView* table,QString CATEGORIE_PRODUIT);
    QSqlTableModel * tri(int num);

    int lastId();

};

#endif // PRODUIT_H
