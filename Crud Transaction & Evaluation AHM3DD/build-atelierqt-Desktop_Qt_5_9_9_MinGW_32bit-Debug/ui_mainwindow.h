/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *CIN;
    QLineEdit *Prenom;
    QLineEdit *Nom;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *Age;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(551, 161, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(554, 220, 81, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(151, 171, 47, 14));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(151, 201, 47, 14));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(151, 231, 47, 14));
        CIN = new QLineEdit(centralwidget);
        CIN->setObjectName(QStringLiteral("CIN"));
        CIN->setGeometry(QRect(211, 171, 113, 20));
        Prenom = new QLineEdit(centralwidget);
        Prenom->setObjectName(QStringLiteral("Prenom"));
        Prenom->setGeometry(QRect(211, 201, 113, 20));
        Nom = new QLineEdit(centralwidget);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(211, 231, 113, 20));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 100, 411, 261));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 170, 56, 16));
        Age = new QLineEdit(centralwidget);
        Age->setObjectName(QStringLiteral("Age"));
        Age->setGeometry(QRect(210, 270, 113, 20));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        CIN->raise();
        Prenom->raise();
        Nom->raise();
        Age->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "CIN:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Nom:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion De Client", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Age :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
