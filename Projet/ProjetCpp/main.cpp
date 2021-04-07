#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QDebug>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Projet C++, Application Desktop:";
    qDebug() << "Smart Restaurant";
    Connection c;
    bool test=c.createconnect();
    MainWindow w;

    QSplashScreen *splash= new QSplashScreen;
    //splash->setPixmap(QPixmap("C:/Users/PC/Desktop/Projet C++/Photos/koujinti.png"));
    splash->show();


    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));





    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


delete (splash);
    return a.exec();
}
