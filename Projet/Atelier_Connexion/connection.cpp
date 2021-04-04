#include "connection.h"

Connection::Connection(){}

bool Connection::createconnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("PROJET2A"); //inserer le nom de la source de données ODBC
    db.setUserName("PROJET2A");             //inserer nom de l'utilisateur
    db.setPassword("PROJET2A");        //inserer mot de passe de cet utilisateur
    return db.open();
}

void Connection::closeConnection(){db.close();}
