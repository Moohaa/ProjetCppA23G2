#include "droits_utilisateurs.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include "QMessageBox"
#include "droits_utilisateurs.h"
droits_utilisateurs::droits_utilisateurs()
{

}
bool affecter_droit(QString id)
{
    QSqlQuery Query;
    Query.prepare("INSERT INTO DROIT_UTILISATEUR(ID_UTILISATEUR,CODE_DROIT)"
                  "values(:id,select max(ID_UTILISATEUR) from UTILISATEURS)");
    Query.bindValue(":id",id);
    return Query.exec();
}
