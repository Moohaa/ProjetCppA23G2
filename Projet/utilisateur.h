#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include "QMessageBox"

class Utilisateur
{
    int id;
    QString nom;
    QString prenom;
    QString email;
    QString mdp;
    QString role;


public:
    Utilisateur();
    int lastId();
    Utilisateur(int,QString,QString,QString,QString,QString);
    bool Ajouter_utilisateur();
    bool supprimer_utilisateur(QString);
    bool modifier_utilisateur(int,QString,QString,QString,QString,QString);
    QSqlQueryModel * afficher_utilisateur();
};

#endif // UTILISATEUR_H
