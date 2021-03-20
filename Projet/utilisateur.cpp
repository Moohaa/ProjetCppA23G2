#include "utilisateur.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include "QMessageBox"
Utilisateur::Utilisateur()
{
id=0;
nom="";
prenom="";
email="";
mdp="";
role="";
}
int Utilisateur::lastId(){
    int lastId = 0;
    QSqlQuery qry3 ;
    qry3.prepare("select ID_UTILISATEUR from UTILISATEURS");
    if (qry3.exec()){
        while(qry3.next()){
        lastId = qry3.value(0).toInt();}
    }
    return lastId+1;
}
Utilisateur::Utilisateur(int id,QString nom,QString prenom,QString email,QString mdp,QString role)
{
    email=email.toLower();
    email[0]=email[0].toUpper();
    nom=nom.toLower();
    nom[0]=nom[0].toUpper();
    prenom=prenom.toLower();
    prenom[0]= prenom[0].toUpper();

    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->mdp=mdp;
    this->role=role;

}
bool Utilisateur::Ajouter_utilisateur()
{
       QString ress=QString::number(id);
       QSqlQuery Query;
       Query.prepare("INSERT INTO UTILISATEURS(ID_UTILISATEUR,NOM_UTILISATEUR,PRENOM_UTILISATEUR,email_UTILISATEUR,mdp_UTILISATEUR,role_UTILISATEUR)"
                     "values(:id,:nom,:prenom,:email,:mdp,:role)");
       Query.bindValue(":id",ress);
       Query.bindValue(":nom",nom);
       Query.bindValue(":prenom",prenom);
       Query.bindValue(":email",email);
       Query.bindValue(":mdp",mdp);
       Query.bindValue(":role",role);
       return Query.exec();
}
QSqlQueryModel * Utilisateur::afficher_utilisateur()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from UTILISATEURS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("mdp"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("role"));
    return model;
}

bool Utilisateur::supprimer_utilisateur(QString idd)
{
QSqlQuery query;
query.prepare("Delete from UTILISATEURS where ID_UTILISATEUR = :ID_UTILISATEUR ");
query.bindValue(":ID_UTILISATEUR", idd);
return    query.exec();
}

bool Utilisateur::modifier_utilisateur(int idd,QString nomm,QString prenomm,QString emaill,QString mdpp,QString rolee)
{

    QSqlQuery qry;

           emaill=emaill.toLower();
           emaill[0]=emaill[0].toUpper();

    nomm=nomm.toLower();
           nomm[0]=nomm[0].toUpper();
            prenomm=prenomm.toLower();
                   prenomm[0]= prenomm[0].toUpper();

        qry.prepare("UPDATE UTILISATEURS set NOM_UTILISATEUR=(?),PRENOM_UTILISATEUR=(?),EMAIL_UTILISATEUR=(?),MDP_UTILISATEUR=(?),ROLE_UTILISATEUR=(?)  where ID_UTILISATEUR=(?)");
        qry.addBindValue(nomm);
        qry.addBindValue(prenomm);
        qry.addBindValue(emaill);
        qry.addBindValue(mdpp);
        qry.addBindValue(rolee);
        qry.addBindValue(idd);

   return  qry.exec();
}
