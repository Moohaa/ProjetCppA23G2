#ifndef EVALUATION_H
#define EVALUATION_H


#include <QString>
#include <QSqlQueryModel>
#include <QTableView>

class Evaluation
{
    int ID_NOTE;
    QString NOM_CLIENT;
    int  NOTE_CLIENT;
    QString REMARQUE_CLIENT;
    int ID_FACTURE;

public:
    Evaluation();
    Evaluation(int);
    Evaluation(QString , int , QString ,  int);

    int getID_NOTE();
    QString getNOM_CLIENT();
    int getNOTE_CLIENT();
    QString getREMARQUE_CLIENT();
    int getID_FACTURE();

    void setID_NOTE(int);
    void setNOM_CLIENT(QString);
    void setNOTE_CLIENT(int);
    void setREMARQUE_CLIENT(QString);
    void setID_FACTURE(int);

    bool ajouter();
    bool update();
    bool supprimer();
    QSqlQueryModel * afficher();

    int lastId();
    void recherche2(QTableView* table,int);


     void rechercher1(QTableView* table,int NOTE_CLIENT);
     QSqlQueryModel * rechercher2(const QString &NOM_CLIENT);
     QSqlQueryModel * rechercher3(const QString &REMARQUE_CLIENT);

     void tri1(QTableView *table);
     void tri2(QTableView *table);
     void tri3(QTableView *table);




};

#endif // EVALUATION_H
