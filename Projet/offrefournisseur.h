#ifndef OFFREFOURNISSEUR_H
#define OFFREFOURNISSEUR_H
#include <QString>
#include <QSqlQueryModel>

class OffreFournisseur
{
    int idProduit;
    int idFournisseur;
    int prix;


public:
    OffreFournisseur();
    OffreFournisseur(int,int);
    OffreFournisseur(int,int,int);

    int getidProduit();
    int getidFournisseur();
    int getprix();

    void setidProduit(int);
    void setidFournisseur(int);
    void setprix(int);

    bool ajouter();
    bool supprimer();
    bool modifier();
    QSqlQueryModel * afficher();



};
#endif // OFFREFOURNISSEUR_H
