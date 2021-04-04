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

Table::Table()
{

}
void Table :: setNUM_TABLE(int n){NUM_TABLE=n;}
void Table:: setNB_CHAISES(int n){NB_CHAISES=n;}
void Table:: setEMPLACEMENT(QString n){EMPLACEMENT=n;}
void Table:: setDISPONIBILITE(QString n){DISPONIBILITE=n;}
void Table :: setDEBARRASSAGE(int n){DEBARRASSAGE=n;}
int Table::get_NUM_TABLE(){return this->NUM_TABLE;}
int Table:: get_NB_CHAISES(){return this->NB_CHAISES;}
QString Table:: get_EMPLACEMENT(){return this->EMPLACEMENT;}
QString Table:: get_DISPONIBILITE(){return this->DISPONIBILITE;}
int Table:: get_DEBARRASSAGE(){return this->DEBARRASSAGE;}
Table::Table(int NUM_TABLE){this->NUM_TABLE = NUM_TABLE;}

Table::Table(int NUM_TABLE,int NB_CHAISES,QString EMPLACEMENT,QString DISPONIBILITE,int DEBARRASSAGE){
    this->NUM_TABLE = NUM_TABLE;
    this->NB_CHAISES =NB_CHAISES;
    this->EMPLACEMENT =EMPLACEMENT;
    this->DISPONIBILITE = DISPONIBILITE;
    this->DEBARRASSAGE = DEBARRASSAGE;

}

/*int Table::lastId(){
        int lastId = 1;
        QSqlQuery qry3 ;
        qry3.prepare("select NUM_TABLE from TABLES");
        if (qry3.exec()){
            while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;}*/
bool Table::ajouter(){
    QSqlQuery query;
   // int l=lastId();
     /*  QString num= QString ::number(NUM_TABLE).*/
    query.prepare("INSERT INTO TABLES VALUES (?, ?, ?, ?,?)");
    query.addBindValue(this->NUM_TABLE);
    query.addBindValue(this->NB_CHAISES);
    query.addBindValue(this->EMPLACEMENT);
    query.addBindValue(this->DISPONIBILITE);
    query.addBindValue(this->DEBARRASSAGE);


    return query.exec();
}
QSqlQueryModel * Table::afficher(){
    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from TABLES");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("NUM_TABLE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NB_CHAISES"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("EMPLACEMENT"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("DISPONIBILITE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("DEBARRASSAGE"));

return model;
    }
bool Table::supprimer(int NUM_TABLE){
        QSqlQuery query;
        query.prepare("DELETE FROM TABLES WHERE NUM_TABLE=?");
        query.addBindValue(NUM_TABLE);
        return query.exec();
    }
bool Table ::modifier()
    {
        int res1= int (NUM_TABLE);
       int res2= int(NB_CHAISES);
        QString res3= QString(EMPLACEMENT);
        QString res4= QString(DISPONIBILITE);
      int res5= int(DEBARRASSAGE);

        QSqlQuery edit;


                          edit.prepare("updateTABLES set NUM_TABLE=:NUM_TABLE, NB_CHAISES=: NB_CHAISES , EMPLACEMENT=:EMPLACEMENT , DISPONIBILITE=:DISPONIBILITE ,DEBARRASSAGE=:DEBARRASSAGE   WHERE NUM_TABLE=:a");
                          edit.bindValue(":a",res1);
                          edit.bindValue(":NB_CHAISES",res2);
                          edit.bindValue(": EMPLACEMENT",res3);
                          edit.bindValue(": DISPONIBILITE",res4);
                          edit.bindValue(":DEBARRASSAGE",res5);

                          return    edit.exec();
    }
/* QSqlQueryModel * Table::recherche(int NUM_TABLE){
     QSqlQueryModel *model= new QSqlQueryModel();  //'"+ide+"%'  '"+spec+"'
        QSqlQuery *query=new QSqlQuery;
        query->prepare("select * from TABLES  where NUM_TABLE=NUM_TABLE");
        //QString stringInt = QString::number(this->NUM_TABLE);
        query->bindValue(":NUM_TABLE",NUM_TABLE);
        query->exec();
        model->setQuery(*query);
        model->setHeaderData(0, Qt::Horizontal,QObject::tr("NUM_TABLE"));
        model->setHeaderData(1, Qt::Horizontal,QObject::tr("NB_CHAISES"));
        model->setHeaderData(2, Qt::Horizontal,QObject::tr("EMPLACEMENT"));
        model->setHeaderData(3, Qt::Horizontal,QObject::tr("DISPONIBILITE"));
        model->setHeaderData(4, Qt::Horizontal,QObject::tr("DEBARRASSAGE"));
        return model;
}*/
 void Table::recherche(QTableView* table,int NUM_TABLE)
 {
  QSqlQueryModel *model= new QSqlQueryModel();  //'"+ide+"%'  '"+spec+"'
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from TABLES  where NUM_TABLE=NUM_TABLE");
    query->bindValue(":NUM_TABLE",NUM_TABLE);
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();}
/*
  QSqlQueryModel * client::recherche_client(int ID_CLIENT)
   {
   QSqlQuery q;
   q.prepare("select * from client where ID_CLIENT=:ID_CLIENT");
   q.bindValue(":ID_CLIENT", ID_CLIENT);
   q.exec();
   QSqlQueryModel * model = new QSqlQueryModel;
   model->setQuery(q);
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_CLIENT"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUANTITE_ARTICLES"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("STATUT"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRODUIT_ACHETE"));
   QSqlRecord rec = model->record(0);
   int id = rec.value("ID_CLIENT").toInt();
   if( id == ID_CLIENT){
       return model;
     }
   return nullptr;
   }
 QSqlQueryModel *Table::tri()
 {
     QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("select * from TABLES order by  NUM_TABLE");
      return model;
 }*/

void Table::tri_Num(QTableView* table){

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from TABLES  ORDER BY NUM_TABLE ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}
void Table::tri_NB(QTableView* table){

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from TABLES  ORDER BY NB_CHAISES ASC");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}


