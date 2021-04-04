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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QWidget *tab_4;
    QTableView *tableView_A;
    QPushButton *pushButton_6;
    QLineEdit *textDelete_2;
    QLabel *label_15;
    QPushButton *TRI;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QLabel *label_17;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_21;
    QLabel *label_22;
    QWidget *tab_6;
    QTableView *tableView_B;
    QPushButton *pushButton_7;
    QLineEdit *textDelete;
    QLabel *label_23;
    QPushButton *TRI_2;
    QWidget *tab_7;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *server;
    QLabel *label_4;
    QLineEdit *port;
    QLabel *label_7;
    QLineEdit *uname;
    QLabel *label_8;
    QLineEdit *paswd;
    QLabel *label_9;
    QLineEdit *rcpt;
    QLabel *label_10;
    QLineEdit *subject;
    QLabel *label_11;
    QPlainTextEdit *msg;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1373, 818);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 1771, 661));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1111, 591));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(980, 510, 75, 23));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(810, 510, 141, 20));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(720, 510, 101, 21));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 1051, 401));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 80, 111, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 180, 131, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(550, 80, 271, 41));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(560, 170, 261, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 280, 201, 61));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_A = new QTableView(tab_4);
        tableView_A->setObjectName(QStringLiteral("tableView_A"));
        tableView_A->setGeometry(QRect(10, 40, 1091, 251));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(940, 490, 75, 23));
        textDelete_2 = new QLineEdit(tab_4);
        textDelete_2->setObjectName(QStringLiteral("textDelete_2"));
        textDelete_2->setGeometry(QRect(810, 490, 113, 20));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(760, 490, 47, 14));
        TRI = new QPushButton(tab_4);
        TRI->setObjectName(QStringLiteral("TRI"));
        TRI->setGeometry(QRect(970, 0, 131, 41));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 1401, 591));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 931, 421));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 40, 171, 21));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 150, 131, 21));
        lineEdit_15 = new QLineEdit(groupBox_3);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(200, 50, 113, 20));
        lineEdit_16 = new QLineEdit(groupBox_3);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(200, 140, 113, 20));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 332, 361, 51));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 240, 131, 21));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(400, 40, 131, 21));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(400, 130, 131, 21));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(400, 230, 131, 21));
        lineEdit_17 = new QLineEdit(groupBox_3);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(200, 240, 113, 20));
        lineEdit_18 = new QLineEdit(groupBox_3);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(570, 40, 113, 20));
        lineEdit_19 = new QLineEdit(groupBox_3);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(580, 130, 113, 20));
        lineEdit_20 = new QLineEdit(groupBox_3);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(580, 220, 113, 20));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(980, 510, 75, 23));
        lineEdit_21 = new QLineEdit(tab_5);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(810, 510, 141, 20));
        label_22 = new QLabel(tab_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(720, 510, 101, 21));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView_B = new QTableView(tab_6);
        tableView_B->setObjectName(QStringLiteral("tableView_B"));
        tableView_B->setGeometry(QRect(10, 90, 1091, 251));
        pushButton_7 = new QPushButton(tab_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(940, 490, 75, 23));
        textDelete = new QLineEdit(tab_6);
        textDelete->setObjectName(QStringLiteral("textDelete"));
        textDelete->setGeometry(QRect(810, 490, 113, 20));
        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(760, 490, 47, 14));
        TRI_2 = new QPushButton(tab_6);
        TRI_2->setObjectName(QStringLiteral("TRI_2"));
        TRI_2->setGeometry(QRect(970, 50, 131, 41));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        layoutWidget = new QWidget(tab_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 491, 511));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        server = new QLineEdit(layoutWidget);
        server->setObjectName(QStringLiteral("server"));

        formLayout->setWidget(0, QFormLayout::FieldRole, server);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        port = new QLineEdit(layoutWidget);
        port->setObjectName(QStringLiteral("port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, port);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        uname = new QLineEdit(layoutWidget);
        uname->setObjectName(QStringLiteral("uname"));

        formLayout->setWidget(2, QFormLayout::FieldRole, uname);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        paswd = new QLineEdit(layoutWidget);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, paswd);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        rcpt = new QLineEdit(layoutWidget);
        rcpt->setObjectName(QStringLiteral("rcpt"));

        formLayout->setWidget(4, QFormLayout::FieldRole, rcpt);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_10);

        subject = new QLineEdit(layoutWidget);
        subject->setObjectName(QStringLiteral("subject"));

        formLayout->setWidget(5, QFormLayout::FieldRole, subject);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        msg = new QPlainTextEdit(layoutWidget);
        msg->setObjectName(QStringLiteral("msg"));

        formLayout->setWidget(6, QFormLayout::FieldRole, msg);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout->addWidget(sendBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout->addWidget(exitBtn);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);

        tabWidget_3->addTab(tab_7, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1373, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID STOCK", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion des Produits", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "NOM PRODUIT", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "CATEGORIE PRODUIT", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter Un Produit", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        TRI->setText(QApplication::translate("MainWindow", "Trier le tableau", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Afficher Les Produits", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Produit", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Gestion du stockage", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "CATEGORIE_STOCK", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "TEMPERATURE", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Ajouter au STOCK", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "EMPLACEMENT", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "DATE_STOCK	", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "QUANTITE	", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "ID_PRODUIT", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "ID STOCK", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Ajouter Un Stock", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        TRI_2->setText(QApplication::translate("MainWindow", "Trier le tableau", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Consulter Les Stocks", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Smtp-server:", Q_NULLPTR));
        server->setText(QApplication::translate("MainWindow", "smtp.gmail.com", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Server port:", Q_NULLPTR));
        port->setText(QApplication::translate("MainWindow", "465", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        paswd->setInputMask(QString());
        label_9->setText(QApplication::translate("MainWindow", "Recipant to:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Subject:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Message:", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Notification Par Mail", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Stock", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
