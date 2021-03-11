#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQueryModel>
class menu
{
    int ID_MENU;
    QString DATE_MENU;
    QString NOM_MENU;
    QString CATEGORIE_MENU;


public:
    menu();
    menu(int);
    menu(QString,QString,QString);

    int getID_MENU();
    QString getDATE_MENU();
    QString getNOM_MENU();
    QString getCATEGORIE_MENU();


    void setID_MENU(int);
    void setDATE_MENU(QString);
    void setNOM_MENU(QString);
    void setCATEGORIE_MENU(QString);


    bool ajouter();
    bool supprimer();
    QSqlQueryModel * afficher();
    bool modifier();
    int lastId();

};

#endif // FOURNISSEUR_H
