#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQueryModel>
class Fournisseur
{
    int id;
    QString nom;
    QString adresse;
    QString mail;
    int telephone;

public:
    Fournisseur();
    Fournisseur(int);
    Fournisseur(QString,QString,QString,int);

    int getId();
    QString getNom();
    QString getAdresse();
    QString getMail();
    int getTelephone();

    void setId(int);
    void setNom(QString);
    void setAdresse(QString);
    void setMail(QString);
    void setTelephone(int);

    bool ajouter();
    bool supprimer();
    QSqlQueryModel * afficher();

    int lastId();

};

#endif // FOURNISSEUR_H
