#include "commande.h"
#include "table.h"
#include<QtWidgets>
#include <QSqlQuery>
#include  <QSqlQueryModel>
#include <QVariant>
#include<QTableView>
#include <QSqlTableModel>
#include<QSqlRecord>
#include<QDebug>
#include<QString>
#include<QObject>

Commande::Commande()
{

}
 void Commande:: setID_COMMANDE(int n){ID_COMMANDE=n;}
void Commande:: setQUANTITE(int n){QUANTITE=n;}
void Commande:: setLIBELLE(QString n){LIBELLE=n;}
void Commande:: setDESCRIPTION(QString n){DESCRIPTION=n;}
void Commande :: setPRIX(float n){PRIX=n;}
void Commande :: setNUM_TABLE(int n){NUM_TABLE=n;}

int Commande::get_ID_COMMANDE(){return this->ID_COMMANDE;}
int Commande:: get_QUANTITE(){return this->QUANTITE;}
QString Commande:: get_LIBELLE(){return this->LIBELLE;}
QString  Commande:: get_DESCRIPTION(){return this->DESCRIPTION;}
float Commande:: get_PRIX(){return this->PRIX;}
int Commande::get_NUM_TABLE(){return this->NUM_TABLE;}
Commande::Commande(int ID_COMMANDE){this->ID_COMMANDE = ID_COMMANDE;}

Commande::Commande(int ID_COMMANDE,int QUANTITE,QString LIBELLE,QString DESCRIPTION,float PRIX,int NUM_TABLE){

    this->ID_COMMANDE=ID_COMMANDE;
    this->QUANTITE =QUANTITE;
     this->LIBELLE =LIBELLE;
    this->DESCRIPTION = DESCRIPTION;
    this->PRIX = PRIX;
     this->NUM_TABLE = NUM_TABLE;

}
 bool Commande ::ajouter(){
    QSqlQuery query;
 QString stringInt = QString::number(this->ID_COMMANDE);
    query.prepare("INSERT INTO COMMANDE(ID_COMMANDE, QUANTITE, LIBELLE, DESCRIPTION,PRIX,NUM_TABLE) "
"VALUES ( :ID_COMMANDE,  :QUANTITE, :LIBELLE, :DESCRIPTION, :PRIX, :NUM_TABLE)");
    query.bindValue(":ID_COMMANDE",stringInt);
     QString stringIntQ = QString::number(this->QUANTITE);
   query.bindValue(":QUANTITE",stringIntQ);
   query.bindValue(":LIBELLE",LIBELLE);
    query.bindValue(":DESCRIPTION",DESCRIPTION);
    QString stringIntP = QString::number(this->PRIX);
 query.bindValue( "PRIX",stringIntP);
 QString stringIntN = QString::number(this->NUM_TABLE);
    query.bindValue("NUM_TABLE",stringIntN);


    return query.exec();
}
QSqlQueryModel *Commande::afficher(){
    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from COMMANDE");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_COMMANDE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("LIBELLE"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("PRIX"));
     model->setHeaderData(5, Qt::Horizontal,QObject::tr("NUM_TABLE"));

return model;
    }
bool Commande::supprimer(int ID_COMMANDE){
        QSqlQuery query;
        query.prepare("DELETE FROM COMMANDE WHERE ID_COMMANDE=?");
        query.addBindValue(ID_COMMANDE);
        return query.exec();
    }

bool Commande ::modifier()
    {
        int res1= int (ID_COMMANDE);
       int res2= int(QUANTITE);
        QString res3= QString(LIBELLE);
        QString res4= QString(DESCRIPTION);
      float res5= int(PRIX);
      int res6= int(NUM_TABLE);

        QSqlQuery edit;


                          edit.prepare("updateCOMMANDE set ID_COMMANDE=: ID_COMMANDE, QUANTITE=: QUANTITE , LIBELLE=:LIBELLE , DESCRIPTION=:DESCRIPTION ,PRIX=:PRIX ,NUM_TABLE=:NUM_TABLE   WHERE ID_COMMANDE=:ID_COMMANDE");
                          edit.bindValue(":ID_COMMANDE",res1);
                          edit.bindValue(":QUANTITE",res2);
                          edit.bindValue(": LIBELLE",res3);
                          edit.bindValue(":DESCRIPTION",res4);
                          edit.bindValue(":PRIX",res5);
                          edit.bindValue(":NUM_TABLE",res6);

                          return    edit.exec();
}
