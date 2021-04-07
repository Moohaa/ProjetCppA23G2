#ifndef DROITS_UTILISATEURS_H
#define DROITS_UTILISATEURS_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include "QMessageBox"

class droits_utilisateurs
{
 int code_droit;
public:
    droits_utilisateurs();
    bool affecter_droit(QString);
};

#endif // DROITS_UTILISATEURS_H
