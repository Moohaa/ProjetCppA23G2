/********************************************************************************
** Form generated from reading UI file 'statplat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATPLAT_H
#define UI_STATPLAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_statPlat
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *statPlat)
    {
        if (statPlat->objectName().isEmpty())
            statPlat->setObjectName(QStringLiteral("statPlat"));
        statPlat->resize(709, 481);
        centralwidget = new QWidget(statPlat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 30, 491, 381));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 811, 571));
        label->setPixmap(QPixmap(QString::fromUtf8("Calque 0.png")));
        statPlat->setCentralWidget(centralwidget);
        label->raise();
        widget->raise();
        menubar = new QMenuBar(statPlat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 709, 22));
        statPlat->setMenuBar(menubar);
        statusbar = new QStatusBar(statPlat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statPlat->setStatusBar(statusbar);

        retranslateUi(statPlat);

        QMetaObject::connectSlotsByName(statPlat);
    } // setupUi

    void retranslateUi(QMainWindow *statPlat)
    {
        statPlat->setWindowTitle(QApplication::translate("statPlat", "MainWindow", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class statPlat: public Ui_statPlat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATPLAT_H
