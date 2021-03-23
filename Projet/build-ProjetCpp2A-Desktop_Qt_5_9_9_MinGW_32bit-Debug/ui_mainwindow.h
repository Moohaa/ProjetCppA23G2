/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionimage_menu;
    QWidget *centralWidget;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *play;
    QPushButton *mute;
    QPushButton *pause;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QGroupBox *groupBox;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QComboBox *comboBox_3;
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
    QPushButton *pushButton_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QComboBox *comboBox;
    QDateTimeEdit *dateTimeEdit;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
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
    QLabel *label_11;
    QLineEdit *server;
    QLabel *label_12;
    QLineEdit *port;
    QLabel *label_13;
    QLineEdit *uname_3;
    QLabel *label_16;
    QLineEdit *paswd;
    QLabel *label_24;
    QLineEdit *rcpt;
    QLabel *label_25;
    QLineEdit *subject;
    QLabel *label_26;
    QPlainTextEdit *msg;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QWidget *page;
    QLabel *label_30;
    QWidget *page_4;
    QLabel *label_31;
    QWidget *page_2;
    QLabel *label_32;
    QWidget *page_5;
    QLabel *label_33;
    QPushButton *pushButton_11;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1296, 880);
        actionimage_menu = new QAction(MainWindow);
        actionimage_menu->setObjectName(QStringLiteral("actionimage_menu"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1100, 10, 201, 31));
        label_4->setStyleSheet(QLatin1String("font: 63 16pt \"Yu Gothic UI Semibold\";\n"
"color : white;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 311, 801));
        label_2->setStyleSheet(QLatin1String("*{\n"
"background : rgb(239, 198, 168);}"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 100, 111, 21));
        label_6->setStyleSheet(QLatin1String("color: rgb(240, 75, 36);\n"
"\n"
"font: 10pt \"Sitka Text\";\n"
""));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 120, 211, 20));
        label_7->setStyleSheet(QLatin1String("color : rgb(240, 75, 36); \n"
"font: 25 6pt \"Yu Gothic UI Light\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, 0, 1311, 61));
        label->setStyleSheet(QLatin1String("*{\n"
"background: rgb(175, 31, 36);\n"
"}"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(90, -10, 191, 141));
        label_5->setFocusPolicy(Qt::StrongFocus);
        label_5->setContextMenuPolicy(Qt::NoContextMenu);
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Photos/hhhhhh.png")));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 60, 1091, 741));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Calque 0.png")));
        play = new QPushButton(centralWidget);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(90, 760, 91, 31));
        play->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setGeometry(QRect(190, 760, 51, 31));
        mute->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        pause = new QPushButton(centralWidget);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(250, 760, 51, 31));
        pause->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 750, 81, 41));
        label_27->setStyleSheet(QLatin1String("*{\n"
"color: rgb(170, 0, 0);\n"
"	font: 63 14pt \"Yu Gothic UI Semibold\";\n"
"}\n"
""));
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(320, 0, 71, 61));
        label_28->setPixmap(QPixmap(QString::fromUtf8("../../../stocks1.png")));
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(400, 20, 351, 31));
        label_29->setStyleSheet(QLatin1String("font: 63 16pt \"Yu Gothic UI Semibold\";\n"
"color : white;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 210, 261, 41));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 280, 261, 41));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 350, 261, 41));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 420, 261, 41));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(320, 70, 861, 631));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 921, 641));
        tabWidget->setStyleSheet(QLatin1String("*{\n"
"background-color: rgb(43, 43, 43);\n"
"color: rgb(255, 170, 127);\n"
"}\n"
"\n"
"QtabWidget :hover {\n"
"background-color: rgb(43, 43, 43);\n"
"}\n"
"QtabWidget :focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 911, 581));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 440, 131, 41));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(306, 440, 141, 41));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 450, 71, 21));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 791, 371));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 80, 111, 21));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 180, 131, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 80, 251, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 270, 201, 61));
        pushButton->setStyleSheet(QStringLiteral(""));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(290, 180, 261, 41));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_A = new QTableView(tab_4);
        tableView_A->setObjectName(QStringLiteral("tableView_A"));
        tableView_A->setGeometry(QRect(30, 110, 651, 191));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 350, 121, 31));
        textDelete_2 = new QLineEdit(tab_4);
        textDelete_2->setObjectName(QStringLiteral("textDelete_2"));
        textDelete_2->setGeometry(QRect(370, 350, 113, 31));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(320, 360, 21, 16));
        TRI = new QPushButton(tab_4);
        TRI->setObjectName(QStringLiteral("TRI"));
        TRI->setGeometry(QRect(550, 70, 131, 41));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 1191, 611));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 731, 421));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 60, 171, 21));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 150, 131, 21));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 332, 361, 51));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 250, 131, 21));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(400, 60, 131, 21));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(400, 150, 131, 21));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(400, 240, 131, 21));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 50, 151, 41));
        dateTimeEdit = new QDateTimeEdit(groupBox_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(510, 50, 191, 31));
        dateTimeEdit->setDateTime(QDateTime(QDate(2021, 9, 14), QTime(0, 0, 0)));
        dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2021, 9, 14), QTime(0, 0, 0)));
        dateTimeEdit->setMaximumDate(QDate(2099, 12, 31));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(180, 240, 151, 41));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 150, 151, 22));
        spinBox->setMaximumSize(QSize(151, 22));
        spinBox->setMinimum(-50);
        lineEdit_22 = new QLineEdit(groupBox_3);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(510, 140, 191, 41));
        lineEdit_23 = new QLineEdit(groupBox_3);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(510, 230, 191, 41));
        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(440, 460, 111, 41));
        lineEdit_21 = new QLineEdit(tab_5);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(260, 467, 141, 31));
        label_22 = new QLabel(tab_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(150, 470, 61, 21));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView_B = new QTableView(tab_6);
        tableView_B->setObjectName(QStringLiteral("tableView_B"));
        tableView_B->setGeometry(QRect(10, 90, 881, 251));
        pushButton_7 = new QPushButton(tab_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(400, 390, 131, 41));
        textDelete = new QLineEdit(tab_6);
        textDelete->setObjectName(QStringLiteral("textDelete"));
        textDelete->setGeometry(QRect(270, 390, 113, 31));
        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(220, 400, 31, 16));
        TRI_2 = new QPushButton(tab_6);
        TRI_2->setObjectName(QStringLiteral("TRI_2"));
        TRI_2->setGeometry(QRect(760, 50, 131, 41));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        layoutWidget = new QWidget(tab_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 701, 451));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_11);

        server = new QLineEdit(layoutWidget);
        server->setObjectName(QStringLiteral("server"));

        formLayout->setWidget(0, QFormLayout::FieldRole, server);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_12);

        port = new QLineEdit(layoutWidget);
        port->setObjectName(QStringLiteral("port"));

        formLayout->setWidget(1, QFormLayout::FieldRole, port);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        uname_3 = new QLineEdit(layoutWidget);
        uname_3->setObjectName(QStringLiteral("uname_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, uname_3);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_16);

        paswd = new QLineEdit(layoutWidget);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, paswd);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_24);

        rcpt = new QLineEdit(layoutWidget);
        rcpt->setObjectName(QStringLiteral("rcpt"));

        formLayout->setWidget(4, QFormLayout::FieldRole, rcpt);

        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_25);

        subject = new QLineEdit(layoutWidget);
        subject->setObjectName(QStringLiteral("subject"));

        formLayout->setWidget(5, QFormLayout::FieldRole, subject);

        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_26);

        msg = new QPlainTextEdit(layoutWidget);
        msg->setObjectName(QStringLiteral("msg"));

        formLayout->setWidget(6, QFormLayout::FieldRole, msg);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout->addWidget(sendBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout->addWidget(exitBtn);


        formLayout->setLayout(7, QFormLayout::SpanningRole, horizontalLayout);

        tabWidget_3->addTab(tab_7, QString());
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_30 = new QLabel(page);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(280, 270, 81, 51));
        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_31 = new QLabel(page_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(270, 300, 56, 16));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_32 = new QLabel(page_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(190, 330, 56, 16));
        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_33 = new QLabel(page_5);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(250, 300, 56, 16));
        stackedWidget->addWidget(page_5);
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 490, 261, 41));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"	\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color: rgb(255, 170, 127);\n"
"\n"
"background:rgb(175, 31, 36);\n"
"\n"
"border-radius:10px;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        label_3->raise();
        label->raise();
        label_4->raise();
        label_2->raise();
        label_6->raise();
        label_7->raise();
        label_5->raise();
        play->raise();
        mute->raise();
        pause->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        pushButton_2->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        stackedWidget->raise();
        pushButton_11->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1296, 29));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Produits et Stockage", Q_NULLPTR));
        actionimage_menu->setText(QApplication::translate("MainWindow", "image_menu", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionimage_menu->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/menuDashBord.PNG\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "K O U J I N T I ", Q_NULLPTR));
        label_2->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "K O U J I N T I ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "_______Restauration_______", Q_NULLPTR));
        label->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        play->setText(QApplication::translate("MainWindow", "play", Q_NULLPTR));
        mute->setText(QApplication::translate("MainWindow", "mute", Q_NULLPTR));
        pause->setText(QApplication::translate("MainWindow", "pause", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Music", Q_NULLPTR));
        label_28->setText(QString());
        label_29->setText(QApplication::translate("MainWindow", "GESTION DE STOCKAGE", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Menu et Plats", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Tables et Commandes", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Produits et Stocks", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Gestionnaires des Fournisseurs", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ID STOCK", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion des Produits", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "NOM PRODUIT", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "CATEGORIE PRODUIT", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "viandes ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "poissons ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\305\223ufs", Q_NULLPTR)
         << QApplication::translate("MainWindow", "laitiers et derives", Q_NULLPTR)
         << QApplication::translate("MainWindow", "produits sucres", Q_NULLPTR)
         << QApplication::translate("MainWindow", "matieres grasses", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cereales et derives", Q_NULLPTR)
         << QApplication::translate("MainWindow", "legumineuses", Q_NULLPTR)
         << QApplication::translate("MainWindow", "boissons", Q_NULLPTR)
         << QApplication::translate("MainWindow", "legumes et fruits", Q_NULLPTR)
        );
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
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Fruit", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Liquide", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Legume", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Etage 1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Etage 2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Etage 3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Etage 4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Etage 5", Q_NULLPTR)
        );
        pushButton_5->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "ID STOCK", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Ajouter Un Stock", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        TRI_2->setText(QApplication::translate("MainWindow", "Trier le tableau", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Consulter Les Stocks", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Smtp-server:", Q_NULLPTR));
        server->setText(QApplication::translate("MainWindow", "smtp.gmail.com", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Server port:", Q_NULLPTR));
        port->setText(QApplication::translate("MainWindow", "465", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        paswd->setInputMask(QString());
        label_24->setText(QApplication::translate("MainWindow", "Recipant to:", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Subject:", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Message:", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "    Envoyer    ", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow", "     Exit    ", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Notification Par Mail", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Stock", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "AZIZ", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Fadwa", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Mahmoud", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Ahmed", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Caisse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
