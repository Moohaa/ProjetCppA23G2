#include "menu.h"
#include <QSqlQuery>
#include <QVariant>

menu::menu(){}


menu::menu(int ID_MENU){this->ID_MENU = ID_MENU;}

menu::menu(QString DATE_MENU,QString NOM_MENU,QString CATEGORIE_MENU){
    this->ID_MENU = lastId();
    this->DATE_MENU = DATE_MENU;
    this->NOM_MENU =NOM_MENU;
    this->CATEGORIE_MENU = CATEGORIE_MENU;

}
    int menu::getID_MENU(){return this->ID_MENU;}
    QString menu::getDATE_MENU(){return this->DATE_MENU;}
    QString menu::getNOM_MENU(){return this->NOM_MENU;}
    QString menu::getCATEGORIE_MENU(){return this->CATEGORIE_MENU;}


    void menu::setID_MENU(int ID_MENU){this->ID_MENU = ID_MENU;}
     void menu::setDATE_MENU(QString DATE_MENU){this->DATE_MENU = DATE_MENU;}
    void menu::setNOM_MENU(QString NOM_MENU){this->NOM_MENU = NOM_MENU;}
    void menu::setCATEGORIE_MENU(QString CATEGORIE_MENU){this->CATEGORIE_MENU = CATEGORIE_MENU;}


    int menu::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_MENU from MENU");
        if (qry3.exec()){
            while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool menu::ajouter(){
        QSqlQuery query;
        int l=lastId();
        QString stringId = QString::number(this->ID_MENU);

        query.prepare("INSERT INTO MENU VALUES (?, ?, ?, ?)");
        query.addBindValue(l);
        query.addBindValue(this->DATE_MENU);
        query.addBindValue(this->NOM_MENU);
        query.addBindValue(this->CATEGORIE_MENU);


        return query.exec();
}

    bool menu::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(ID_MENU);
        query.prepare("DELETE FROM MENU WHERE ID_MENU=?");
        query.addBindValue(stringId);
        return query.exec();
    }


QSqlQueryModel * menu::afficher(){
    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from MENU");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_MENU"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("DATE_MENU"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("NOM_MENU"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("CATEGORIE_MENU"));

    return model;
    }
bool menu::modifier(){
    QString res=QString::number(ID_MENU);
     QString res1=QString (DATE_MENU);
     QString res2=QString (NOM_MENU);
QString res3=QString (CATEGORIE_MENU);

        QSqlQuery edit;


                          edit.prepare("update MENU set DATE_MENU = :DATE_MENU, NOM_MENU = :NOM_MENU, CATEGORIE_MENU=:CATEGORIE_MENU where ID_MENU = :ID_MENU");

                          edit.bindValue(":ID_MENU",res);
                          edit.bindValue(":DATE_MENU",res1);
                          edit.bindValue(":NOM_MENU",res2);
                          edit.bindValue(":CATEGORIE_MENU",res3);
                          return    edit.exec();



}

