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
    bool controlsaisieMail(QString mail);
    bool affecter_droit(QString);
    QSqlQueryModel * afficher_droit();
    bool supprimer_droit(QString);
    bool modifier_droit(int,QString);
    QSqlQueryModel * afficher_droitutilisateur();
    QSqlQueryModel* trie();
    QSqlQueryModel* trie2();
    QSqlQueryModel *chercher_ut(const QString &aux);
    QSqlQueryModel *chercher_ut1(const QString &aux);
    QSqlQueryModel *chercher_ut2(const QString &aux);
};

#endif // UTILISATEUR_H
