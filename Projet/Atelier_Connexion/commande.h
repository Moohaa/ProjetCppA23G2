#ifndef COMMANDE_H
#define COMMANDE_H
#include <QString>
#include"table.h"
#include <QSqlQueryModel>
#include <QString>
#include <QSqlQueryModel>
#include<QTableView>


class Commande
{
  int ID_COMMANDE;
  int QUANTITE;
  QString LIBELLE ;
  QString DESCRIPTION;
  float PRIX;
  int NUM_TABLE;



public:
   void setID_COMMANDE(int n);
  void setQUANTITE(int n);
  void setLIBELLE(QString n);
  void setDESCRIPTION(QString n);
  void setPRIX(float n);
  void setNUM_TABLE( int n);

  int get_ID_COMMANDE();
  int get_QUANTITE();
  QString get_LIBELLE();
  QString get_DESCRIPTION();
  float get_PRIX();
   int get_NUM_TABLE();

    Commande();
     Commande(int);
     Commande(int,int,QString,QString,float,int);
      bool ajouter();
       QSqlQueryModel * afficher();
      bool supprimer(int);
      bool modifier();
};

#endif // COMMANDE_H
