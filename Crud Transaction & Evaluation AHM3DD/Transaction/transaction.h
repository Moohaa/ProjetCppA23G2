#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QString>
#include <QSqlQueryModel>
class Transaction
{
    int ID_FACTURE;
    QString NOM_CLIENT;
    int  NUM_CLIENT;
    QString ADRESSE_CLIENT;
    QString DATE_HEURE;
    int PRIX;
    int ID_UTILISATEUR;

public:
    Transaction();
    Transaction(int);
    Transaction(QString , int , QString , QString , int , int);

    int getID_FACTURE();
    QString getNOM_CLIENT();
    int getNUM_CLIENT();
    QString getADRESSE_CLIENT();
    QString getDATE_HEURE();
    int getPRIX();
    int getID_UTILISATEUR();

    void setID_FACTURE(int);
    void setNOM_CLIENT(QString);
    void setNUM_CLIENT(int);
    void setADRESSE_CLIENT(QString);
    void setDATE_HEURE(QString);
    void setPRIX(int);
    void setID_UTILISATEUR(int);

    bool ajouter();
    bool update();
    bool supprimer();
    QSqlQueryModel * afficher();

    int lastId();

};

#endif // TRANSACTION_H
