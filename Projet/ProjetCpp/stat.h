#ifndef STAT_H
#define STAT_H
#include <QDialog>
#include <QPainter>
#include <QSqlQuery>
#include <QDialog>
#include "connection.h"
using namespace std;

namespace Ui {
class stati;
}

class stati : public QDialog
{
    Q_OBJECT

public:
    explicit stati(QWidget *parent = nullptr);
       int Statistique_partie2() ;
       int Statistique_partie3() ;
        int Statistique_partie4() ;


     void paintEvent(QPaintEvent *) ;
    ~stati();
private slots:
    void on_pushButton_clicked();

private:
    Ui::stati *ui;


};




#endif // STAT_H
#ifndef STAT_H
#define STAT_H

#include <QDialog>

namespace Ui {
class stat;
}

class stat : public QDialog
{
    Q_OBJECT

public:
    explicit stat(QWidget *parent = nullptr);
    ~stat();

private:
    Ui::stat *ui;
};

#endif // STAT_H
