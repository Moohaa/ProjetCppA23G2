#ifndef PLAT_H
#define PLAT_H
#include <QString>
#include <QSqlQueryModel>
#include<QTableView>
class plat
{
    QString NOM_PLAT;
    QString INGREDIENTS_PLAT;
    QString SPECIALITE_PLAT;
    float PRIX_PLAT;
    int ID_MENU;


public:
    plat();
    plat(QString);
    plat(QString,QString,QString,float,int);

    QString getNOM_PLAT();
    QString getINGREDIENTS_PLAT();
    QString getSPECIALITE_PLAT();
    float getPRIX_PLAT();
    int getID_MENU();


    void setNOM_PLAT(QString);
    void setINGREDIENTS_PLAT(QString);
    void setSPECIALITE_PLAT(QString);
    void setPRIX_PLAT(float);
    void setID_MENU(int);


    bool ajouter();
    bool supprimer();
    QSqlQueryModel * afficher();
    bool modifier();
    void recherche(QTableView* table,QString);
    int lastId();
void trie(QTableView* table);

};

#endif
