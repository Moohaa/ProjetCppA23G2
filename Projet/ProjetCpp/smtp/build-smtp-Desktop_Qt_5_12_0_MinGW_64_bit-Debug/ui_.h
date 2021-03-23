/********************************************************************************
** Form generated from reading UI file '.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__H
#define UI__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *server;
    QLineEdit *port;
    QLineEdit *uname;
    QLineEdit *paswd;
    QLineEdit *rcpt;
    QLineEdit *subject;
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(484, 487);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(9);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        server = new QLineEdit(centralWidget);
        server->setObjectName(QString::fromUtf8("server"));

        formLayout->setWidget(0, QFormLayout::FieldRole, server);

        port = new QLineEdit(centralWidget);
        port->setObjectName(QString::fromUtf8("port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, port);

        uname = new QLineEdit(centralWidget);
        uname->setObjectName(QString::fromUtf8("uname"));

        formLayout->setWidget(2, QFormLayout::FieldRole, uname);

        paswd = new QLineEdit(centralWidget);
        paswd->setObjectName(QString::fromUtf8("paswd"));
        paswd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, paswd);

        rcpt = new QLineEdit(centralWidget);
        rcpt->setObjectName(QString::fromUtf8("rcpt"));

        formLayout->setWidget(4, QFormLayout::FieldRole, rcpt);

        subject = new QLineEdit(centralWidget);
        subject->setObjectName(QString::fromUtf8("subject"));

        formLayout->setWidget(5, QFormLayout::FieldRole, subject);

        msg = new QPlainTextEdit(centralWidget);
        msg->setObjectName(QString::fromUtf8("msg"));

        formLayout->setWidget(6, QFormLayout::FieldRole, msg);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendBtn = new QPushButton(centralWidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        horizontalLayout->addWidget(sendBtn);

        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));

        horizontalLayout->addWidget(exitBtn);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 484, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SMTP Example", nullptr));
        label->setText(QApplication::translate("MainWindow", "Smtp-server:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Server port:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Username:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Recipant to:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Subject:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Message:", nullptr));
        server->setText(QApplication::translate("MainWindow", "smtp.gmail.com", nullptr));
        port->setText(QApplication::translate("MainWindow", "465", nullptr));
        paswd->setInputMask(QString());
        sendBtn->setText(QApplication::translate("MainWindow", "Send", nullptr));
        exitBtn->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__H
