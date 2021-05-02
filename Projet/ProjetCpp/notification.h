#ifndef NOTIFICATION_H
#define NOTIFICATION_H


#include <QPixmap>
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <string>
#include <QSqlQueryModel>
class notification
{
public:
    notification();
    void stock_manquant();
    void stock_exces();
    void notification_modifier();
};


#endif // NOTIFICATION_H
