/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *Login_connexion;
    QPushButton *Login_ins;
    QLineEdit *login_email;
    QLineEdit *login_mdp;
    QLabel *label;
    QLabel *label_31;
    QWidget *page_3;
    QGroupBox *groupBox_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *inscription_nom_2;
    QLineEdit *inscription_prenom_2;
    QLineEdit *inscription_email_2;
    QLineEdit *inscription_mdp_2;
    QPushButton *inscription_inscrit_2;
    QComboBox *inscription_role;
    QLabel *label_35;
    QWidget *page_4;
    QGroupBox *groupBox_4;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *inscription_nom_3;
    QLineEdit *inscription_prenom_3;
    QLineEdit *inscription_email_3;
    QLineEdit *inscription_mdp_3;
    QPushButton *modifier_utilisateur;
    QComboBox *inscription_role_3;
    QLabel *label_19;
    QLineEdit *inscription_id_3;
    QLabel *label_36;
    QWidget *page_9;
    QComboBox *liste_droit;
    QLineEdit *codedroit_inscri;
    QPushButton *ajoute_droit;
    QTableView *tab_droit;
    QPushButton *supp_droit;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *modif_code;
    QLineEdit *modif_lib;
    QPushButton *modifier_droit;
    QLabel *label_37;
    QWidget *page_12;
    QTableView *AJT_DROIT;
    QPushButton *ajoute_droit_3;
    QLineEdit *codedroit_inscri_3;
    QComboBox *liste_droit_3;
    QLineEdit *line_id;
    QLabel *label_38;
    QWidget *page_5;
    QTableView *tab_affiche;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *id_des;
    QPushButton *tri;
    QRadioButton *radio_id;
    QRadioButton *radio_role;
    QRadioButton *radio_nom;
    QPushButton *recherche;
    QLineEdit *rech_line;
    QRadioButton *id_asc;
    QRadioButton *role_asc;
    QRadioButton *nom_asc;
    QRadioButton *role_desc;
    QRadioButton *nom_desc;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *page_11;
    QTableView *aff_droitutilisateur;
    QPushButton *Supp_droitut;
    QWidget *page_8;
    QGroupBox *groupBox_5;
    QLineEdit *ajout_codedroit;
    QLabel *label_21;
    QLabel *label_20;
    QPushButton *ajout_droit;
    QLineEdit *ajout_libelledroit;
    QLabel *label_32;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_18;
    QLineEdit *inscription_nom;
    QLineEdit *inscription_prenom;
    QLineEdit *inscription_email;
    QLineEdit *inscription_mdp;
    QPushButton *inscription_inscrit;
    QComboBox *comboBox;
    QWidget *page_6;
    QPushButton *affiche_utilisateur;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *gif;
    QVideoWidget *video;
    QWidget *page_7;
    QGroupBox *groupBox_6;
    QPushButton *supprimer_droit;
    QTableView *affiche_droit;
    QLabel *label_33;
    QPushButton *pushButton_3;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *hola;
    QLabel *label_34;
    QPushButton *mute1;
    QLabel *music;
    QPushButton *pause1;
    QPushButton *play1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1296, 800);
        Login->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(340, 80, 951, 561));
        stackedWidget->setStyleSheet(QLatin1String("*{\n"
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
"\n"
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
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 70, 521, 351));
        groupBox->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }\n"
"\n"
"QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 140, 111, 16));
        Login_connexion = new QPushButton(groupBox);
        Login_connexion->setObjectName(QStringLiteral("Login_connexion"));
        Login_connexion->setGeometry(QRect(40, 210, 151, 51));
        Login_ins = new QPushButton(groupBox);
        Login_ins->setObjectName(QStringLiteral("Login_ins"));
        Login_ins->setGeometry(QRect(240, 210, 171, 51));
        Login_ins->setStyleSheet(QStringLiteral(""));
        login_email = new QLineEdit(groupBox);
        login_email->setObjectName(QStringLiteral("login_email"));
        login_email->setGeometry(QRect(270, 80, 131, 20));
        login_mdp = new QLineEdit(groupBox);
        login_mdp->setObjectName(QStringLiteral("login_mdp"));
        login_mdp->setGeometry(QRect(270, 140, 131, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 80, 61, 21));
        label_31 = new QLabel(page);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(660, 130, 271, 271));
        label_31->setPixmap(QPixmap(QString::fromUtf8("add-user-2-256.png")));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 60, 551, 411));
        groupBox_3->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }\n"
"\n"
"QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 80, 51, 21));
        label_8->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 110, 81, 21));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 140, 47, 31));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 180, 121, 21));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 220, 41, 16));
        label_12->setMinimumSize(QSize(41, 0));
        label_12->setMaximumSize(QSize(41, 16777215));
        inscription_nom_2 = new QLineEdit(groupBox_3);
        inscription_nom_2->setObjectName(QStringLiteral("inscription_nom_2"));
        inscription_nom_2->setGeometry(QRect(250, 80, 161, 20));
        inscription_prenom_2 = new QLineEdit(groupBox_3);
        inscription_prenom_2->setObjectName(QStringLiteral("inscription_prenom_2"));
        inscription_prenom_2->setGeometry(QRect(250, 110, 161, 20));
        inscription_email_2 = new QLineEdit(groupBox_3);
        inscription_email_2->setObjectName(QStringLiteral("inscription_email_2"));
        inscription_email_2->setGeometry(QRect(250, 140, 161, 20));
        inscription_mdp_2 = new QLineEdit(groupBox_3);
        inscription_mdp_2->setObjectName(QStringLiteral("inscription_mdp_2"));
        inscription_mdp_2->setGeometry(QRect(250, 180, 161, 20));
        inscription_inscrit_2 = new QPushButton(groupBox_3);
        inscription_inscrit_2->setObjectName(QStringLiteral("inscription_inscrit_2"));
        inscription_inscrit_2->setGeometry(QRect(170, 290, 191, 51));
        inscription_inscrit_2->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }\n"
"QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        inscription_role = new QComboBox(groupBox_3);
        inscription_role->setObjectName(QStringLiteral("inscription_role"));
        inscription_role->setGeometry(QRect(250, 220, 161, 22));
        inscription_role->setStyleSheet(QStringLiteral(""));
        label_35 = new QLabel(page_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(660, 110, 641, 301));
        label_35->setPixmap(QPixmap(QString::fromUtf8("add-user-2-256.png")));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 70, 521, 351));
        groupBox_4->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }\n"
"\n"
"QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 80, 61, 16));
        label_13->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 110, 71, 21));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 140, 47, 31));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(120, 180, 91, 20));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(140, 220, 41, 16));
        label_17->setMinimumSize(QSize(41, 0));
        label_17->setMaximumSize(QSize(41, 16777215));
        inscription_nom_3 = new QLineEdit(groupBox_4);
        inscription_nom_3->setObjectName(QStringLiteral("inscription_nom_3"));
        inscription_nom_3->setGeometry(QRect(230, 80, 113, 20));
        inscription_prenom_3 = new QLineEdit(groupBox_4);
        inscription_prenom_3->setObjectName(QStringLiteral("inscription_prenom_3"));
        inscription_prenom_3->setGeometry(QRect(230, 110, 113, 20));
        inscription_email_3 = new QLineEdit(groupBox_4);
        inscription_email_3->setObjectName(QStringLiteral("inscription_email_3"));
        inscription_email_3->setGeometry(QRect(230, 140, 113, 20));
        inscription_mdp_3 = new QLineEdit(groupBox_4);
        inscription_mdp_3->setObjectName(QStringLiteral("inscription_mdp_3"));
        inscription_mdp_3->setGeometry(QRect(230, 180, 113, 20));
        modifier_utilisateur = new QPushButton(groupBox_4);
        modifier_utilisateur->setObjectName(QStringLiteral("modifier_utilisateur"));
        modifier_utilisateur->setGeometry(QRect(230, 280, 101, 23));
        modifier_utilisateur->setStyleSheet(QStringLiteral(""));
        inscription_role_3 = new QComboBox(groupBox_4);
        inscription_role_3->setObjectName(QStringLiteral("inscription_role_3"));
        inscription_role_3->setGeometry(QRect(220, 220, 141, 22));
        inscription_role_3->setStyleSheet(QStringLiteral(""));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(130, 50, 47, 14));
        inscription_id_3 = new QLineEdit(groupBox_4);
        inscription_id_3->setObjectName(QStringLiteral("inscription_id_3"));
        inscription_id_3->setGeometry(QRect(230, 50, 113, 20));
        label_36 = new QLabel(page_4);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(630, 10, 711, 521));
        label_36->setPixmap(QPixmap(QString::fromUtf8("add-user-2-256.png")));
        stackedWidget->addWidget(page_4);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        liste_droit = new QComboBox(page_9);
        liste_droit->setObjectName(QStringLiteral("liste_droit"));
        liste_droit->setGeometry(QRect(261, 70, 91, 22));
        codedroit_inscri = new QLineEdit(page_9);
        codedroit_inscri->setObjectName(QStringLiteral("codedroit_inscri"));
        codedroit_inscri->setGeometry(QRect(390, 70, 113, 20));
        ajoute_droit = new QPushButton(page_9);
        ajoute_droit->setObjectName(QStringLiteral("ajoute_droit"));
        ajoute_droit->setGeometry(QRect(104, 70, 121, 23));
        tab_droit = new QTableView(page_9);
        tab_droit->setObjectName(QStringLiteral("tab_droit"));
        tab_droit->setGeometry(QRect(25, 141, 401, 361));
        supp_droit = new QPushButton(page_9);
        supp_droit->setObjectName(QStringLiteral("supp_droit"));
        supp_droit->setGeometry(QRect(480, 390, 131, 41));
        label_22 = new QLabel(page_9);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(500, 170, 71, 20));
        label_23 = new QLabel(page_9);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(500, 240, 101, 20));
        modif_code = new QLineEdit(page_9);
        modif_code->setObjectName(QStringLiteral("modif_code"));
        modif_code->setGeometry(QRect(630, 170, 113, 20));
        modif_lib = new QLineEdit(page_9);
        modif_lib->setObjectName(QStringLiteral("modif_lib"));
        modif_lib->setGeometry(QRect(630, 240, 113, 20));
        modifier_droit = new QPushButton(page_9);
        modifier_droit->setObjectName(QStringLiteral("modifier_droit"));
        modifier_droit->setGeometry(QRect(480, 330, 131, 41));
        label_37 = new QLabel(page_9);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(670, 280, 291, 261));
        label_37->setPixmap(QPixmap(QString::fromUtf8("padlock_78356.png")));
        stackedWidget->addWidget(page_9);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        AJT_DROIT = new QTableView(page_12);
        AJT_DROIT->setObjectName(QStringLiteral("AJT_DROIT"));
        AJT_DROIT->setGeometry(QRect(40, 90, 631, 451));
        ajoute_droit_3 = new QPushButton(page_12);
        ajoute_droit_3->setObjectName(QStringLiteral("ajoute_droit_3"));
        ajoute_droit_3->setGeometry(QRect(124, 40, 121, 23));
        codedroit_inscri_3 = new QLineEdit(page_12);
        codedroit_inscri_3->setObjectName(QStringLiteral("codedroit_inscri_3"));
        codedroit_inscri_3->setGeometry(QRect(410, 40, 113, 20));
        liste_droit_3 = new QComboBox(page_12);
        liste_droit_3->setObjectName(QStringLiteral("liste_droit_3"));
        liste_droit_3->setGeometry(QRect(281, 40, 91, 22));
        line_id = new QLineEdit(page_12);
        line_id->setObjectName(QStringLiteral("line_id"));
        line_id->setGeometry(QRect(970, 20, 113, 20));
        label_38 = new QLabel(page_12);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(690, 130, 291, 331));
        label_38->setPixmap(QPixmap(QString::fromUtf8("padlock_78356.png")));
        stackedWidget->addWidget(page_12);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tab_affiche = new QTableView(page_5);
        tab_affiche->setObjectName(QStringLiteral("tab_affiche"));
        tab_affiche->setGeometry(QRect(0, 90, 591, 371));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 161, 41));
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 490, 221, 31));
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 490, 201, 31));
        id_des = new QRadioButton(page_5);
        id_des->setObjectName(QStringLiteral("id_des"));
        id_des->setGeometry(QRect(760, 110, 111, 18));
        tri = new QPushButton(page_5);
        tri->setObjectName(QStringLiteral("tri"));
        tri->setGeometry(QRect(640, 270, 141, 23));
        radio_id = new QRadioButton(page_5);
        radio_id->setObjectName(QStringLiteral("radio_id"));
        radio_id->setGeometry(QRect(970, 120, 83, 18));
        radio_role = new QRadioButton(page_5);
        radio_role->setObjectName(QStringLiteral("radio_role"));
        radio_role->setGeometry(QRect(970, 160, 83, 18));
        radio_nom = new QRadioButton(page_5);
        radio_nom->setObjectName(QStringLiteral("radio_nom"));
        radio_nom->setGeometry(QRect(970, 200, 83, 18));
        recherche = new QPushButton(page_5);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(980, 310, 75, 23));
        rech_line = new QLineEdit(page_5);
        rech_line->setObjectName(QStringLiteral("rech_line"));
        rech_line->setGeometry(QRect(960, 270, 113, 20));
        id_asc = new QRadioButton(page_5);
        id_asc->setObjectName(QStringLiteral("id_asc"));
        id_asc->setGeometry(QRect(610, 110, 111, 18));
        role_asc = new QRadioButton(page_5);
        role_asc->setObjectName(QStringLiteral("role_asc"));
        role_asc->setGeometry(QRect(610, 160, 141, 18));
        nom_asc = new QRadioButton(page_5);
        nom_asc->setObjectName(QStringLiteral("nom_asc"));
        nom_asc->setGeometry(QRect(610, 210, 131, 18));
        role_desc = new QRadioButton(page_5);
        role_desc->setObjectName(QStringLiteral("role_desc"));
        role_desc->setGeometry(QRect(760, 160, 131, 18));
        nom_desc = new QRadioButton(page_5);
        nom_desc->setObjectName(QStringLiteral("nom_desc"));
        nom_desc->setGeometry(QRect(760, 210, 141, 18));
        pushButton_6 = new QPushButton(page_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(630, 490, 211, 31));
        pushButton_7 = new QPushButton(page_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(640, 350, 141, 23));
        stackedWidget->addWidget(page_5);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        aff_droitutilisateur = new QTableView(page_11);
        aff_droitutilisateur->setObjectName(QStringLiteral("aff_droitutilisateur"));
        aff_droitutilisateur->setGeometry(QRect(70, 40, 631, 371));
        Supp_droitut = new QPushButton(page_11);
        Supp_droitut->setObjectName(QStringLiteral("Supp_droitut"));
        Supp_droitut->setGeometry(QRect(320, 430, 161, 31));
        stackedWidget->addWidget(page_11);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_5 = new QGroupBox(page_8);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(30, 50, 511, 351));
        ajout_codedroit = new QLineEdit(groupBox_5);
        ajout_codedroit->setObjectName(QStringLiteral("ajout_codedroit"));
        ajout_codedroit->setGeometry(QRect(280, 110, 113, 20));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(110, 180, 81, 16));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(110, 110, 81, 16));
        ajout_droit = new QPushButton(groupBox_5);
        ajout_droit->setObjectName(QStringLiteral("ajout_droit"));
        ajout_droit->setGeometry(QRect(160, 260, 241, 51));
        ajout_libelledroit = new QLineEdit(groupBox_5);
        ajout_libelledroit->setObjectName(QStringLiteral("ajout_libelledroit"));
        ajout_libelledroit->setGeometry(QRect(280, 180, 113, 20));
        label_32 = new QLabel(page_8);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(630, 90, 291, 331));
        label_32->setPixmap(QPixmap(QString::fromUtf8("padlock_78356.png")));
        stackedWidget->addWidget(page_8);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 60, 671, 411));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(96, 80, 101, 20));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(86, 110, 101, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(96, 140, 101, 31));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 180, 111, 20));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(140, 220, 41, 21));
        label_18->setMinimumSize(QSize(41, 0));
        label_18->setMaximumSize(QSize(41, 16777215));
        inscription_nom = new QLineEdit(groupBox_2);
        inscription_nom->setObjectName(QStringLiteral("inscription_nom"));
        inscription_nom->setGeometry(QRect(210, 80, 113, 20));
        inscription_prenom = new QLineEdit(groupBox_2);
        inscription_prenom->setObjectName(QStringLiteral("inscription_prenom"));
        inscription_prenom->setGeometry(QRect(210, 110, 113, 20));
        inscription_email = new QLineEdit(groupBox_2);
        inscription_email->setObjectName(QStringLiteral("inscription_email"));
        inscription_email->setGeometry(QRect(210, 140, 113, 20));
        inscription_mdp = new QLineEdit(groupBox_2);
        inscription_mdp->setObjectName(QStringLiteral("inscription_mdp"));
        inscription_mdp->setGeometry(QRect(210, 180, 113, 20));
        inscription_inscrit = new QPushButton(groupBox_2);
        inscription_inscrit->setObjectName(QStringLiteral("inscription_inscrit"));
        inscription_inscrit->setGeometry(QRect(230, 290, 101, 23));
        inscription_inscrit->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(211, 230, 111, 22));
        stackedWidget->addWidget(page_2);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        affiche_utilisateur = new QPushButton(page_6);
        affiche_utilisateur->setObjectName(QStringLiteral("affiche_utilisateur"));
        affiche_utilisateur->setGeometry(QRect(10, 360, 171, 51));
        pushButton_5 = new QPushButton(page_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 430, 171, 51));
        pushButton_4 = new QPushButton(page_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 500, 171, 41));
        gif = new QLabel(page_6);
        gif->setObjectName(QStringLiteral("gif"));
        gif->setGeometry(QRect(0, 0, 951, 561));
        gif->setPixmap(QPixmap(QString::fromUtf8("gif.gif")));
        video = new QVideoWidget(page_6);
        video->setObjectName(QStringLiteral("video"));
        video->setGeometry(QRect(200, 10, 741, 541));
        stackedWidget->addWidget(page_6);
        gif->raise();
        affiche_utilisateur->raise();
        pushButton_5->raise();
        pushButton_4->raise();
        video->raise();
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_6 = new QGroupBox(page_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 30, 611, 401));
        supprimer_droit = new QPushButton(groupBox_6);
        supprimer_droit->setObjectName(QStringLiteral("supprimer_droit"));
        supprimer_droit->setGeometry(QRect(200, 360, 131, 23));
        supprimer_droit->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        affiche_droit = new QTableView(groupBox_6);
        affiche_droit->setObjectName(QStringLiteral("affiche_droit"));
        affiche_droit->setGeometry(QRect(30, 40, 551, 291));
        label_33 = new QLabel(page_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(650, 100, 291, 331));
        label_33->setPixmap(QPixmap(QString::fromUtf8("padlock_78356.png")));
        stackedWidget->addWidget(page_7);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 660, 221, 41));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(0, 0, 321, 801));
        label_25->setStyleSheet(QStringLiteral("background-color : rgb(255, 170, 127);"));
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(-10, 0, 1311, 61));
        label_26->setStyleSheet(QLatin1String("*{\n"
"background: rgb(175, 31, 36);\n"
"}"));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(1090, 10, 201, 31));
        label_27->setStyleSheet(QLatin1String("font: 63 16pt \"Yu Gothic UI Semibold\";\n"
"color : white;"));
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(90, 100, 151, 21));
        label_28->setStyleSheet(QLatin1String("color: rgb(240, 75, 36);\n"
"\n"
"font: 12pt \"Sitka Text\";\n"
""));
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(100, 120, 211, 20));
        label_29->setStyleSheet(QLatin1String("color : rgb(240, 75, 36);\n"
"font: 25 6pt \"Yu Gothic UI Light\";"));
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(80, 20, 141, 81));
        label_30->setPixmap(QPixmap(QString::fromUtf8("koujniti_logo.png")));
        hola = new QLabel(centralwidget);
        hola->setObjectName(QStringLiteral("hola"));
        hola->setGeometry(QRect(320, 60, 981, 741));
        hola->setPixmap(QPixmap(QString::fromUtf8("Calque 0.png")));
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 180, 341, 331));
        label_34->setPixmap(QPixmap(QString::fromUtf8("man1.png")));
        mute1 = new QPushButton(centralwidget);
        mute1->setObjectName(QStringLiteral("mute1"));
        mute1->setGeometry(QRect(180, 560, 51, 31));
        mute1->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        music = new QLabel(centralwidget);
        music->setObjectName(QStringLiteral("music"));
        music->setGeometry(QRect(10, 550, 61, 41));
        music->setPixmap(QPixmap(QString::fromUtf8("mui.png")));
        pause1 = new QPushButton(centralwidget);
        pause1->setObjectName(QStringLiteral("pause1"));
        pause1->setGeometry(QRect(240, 560, 51, 31));
        pause1->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        play1 = new QPushButton(centralwidget);
        play1->setObjectName(QStringLiteral("play1"));
        play1->setGeometry(QRect(80, 560, 91, 31));
        play1->setStyleSheet(QLatin1String("QPushButton{\n"
"    color: rgb(255, 170, 127);\n"
"	font: 63 10pt \"Yu Gothic UI Semibold\";\n"
"\n"
"    background-color: rgb(255, 170, 127);\n"
"	background: rgb(85, 0, 0);\n"
"\n"
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
        Login->setCentralWidget(centralwidget);
        hola->raise();
        label_26->raise();
        label_25->raise();
        stackedWidget->raise();
        pushButton_3->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        label_30->raise();
        label_34->raise();
        mute1->raise();
        music->raise();
        pause1->raise();
        play1->raise();
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1296, 22));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", Q_NULLPTR));
        Login_connexion->setText(QApplication::translate("Login", "Connexion", Q_NULLPTR));
        Login_ins->setText(QApplication::translate("Login", "Cr\303\251er un compte", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", Q_NULLPTR));
        label_31->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Login", "Ajouter utilisateur", Q_NULLPTR));
        label_8->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Pr\303\251nom</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Role</span></p></body></html>", Q_NULLPTR));
        inscription_nom_2->setText(QString());
        inscription_prenom_2->setText(QString());
        inscription_inscrit_2->setText(QApplication::translate("Login", "Ajouter", Q_NULLPTR));
        inscription_role->clear();
        inscription_role->insertItems(0, QStringList()
         << QApplication::translate("Login", "Gerant", Q_NULLPTR)
         << QApplication::translate("Login", "Chef", Q_NULLPTR)
         << QApplication::translate("Login", "Serveur", Q_NULLPTR)
         << QApplication::translate("Login", "Caissier", Q_NULLPTR)
         << QApplication::translate("Login", "Gestionniare commande", Q_NULLPTR)
         << QApplication::translate("Login", "Gestionnaire fournisseur", Q_NULLPTR)
        );
        label_35->setText(QString());
        groupBox_4->setTitle(QApplication::translate("Login", "Modifier utilisateur", Q_NULLPTR));
        label_13->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Pr\303\251nom</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Role</span></p></body></html>", Q_NULLPTR));
        inscription_nom_3->setText(QString());
        inscription_prenom_3->setText(QString());
        modifier_utilisateur->setText(QApplication::translate("Login", "Modifier", Q_NULLPTR));
        inscription_role_3->clear();
        inscription_role_3->insertItems(0, QStringList()
         << QApplication::translate("Login", "G\303\251rant", Q_NULLPTR)
         << QApplication::translate("Login", "Chef", Q_NULLPTR)
         << QApplication::translate("Login", "Serveur", Q_NULLPTR)
         << QApplication::translate("Login", "Caissier", Q_NULLPTR)
         << QApplication::translate("Login", "Gestionniare commande", Q_NULLPTR)
         << QApplication::translate("Login", "Gestionnaire fournisseur", Q_NULLPTR)
        );
        label_19->setText(QApplication::translate("Login", "id", Q_NULLPTR));
        label_36->setText(QString());
        ajoute_droit->setText(QApplication::translate("Login", "Ajouter", Q_NULLPTR));
        supp_droit->setText(QApplication::translate("Login", "Supprimer", Q_NULLPTR));
        label_22->setText(QApplication::translate("Login", "code_droit", Q_NULLPTR));
        label_23->setText(QApplication::translate("Login", "libelle_droit", Q_NULLPTR));
        modifier_droit->setText(QApplication::translate("Login", "Modifier", Q_NULLPTR));
        label_37->setText(QString());
        ajoute_droit_3->setText(QApplication::translate("Login", "Ajouter", Q_NULLPTR));
        label_38->setText(QString());
        label_3->setText(QApplication::translate("Login", "Afficher utilisateur", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login", "Supprimer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Login", "Afficher droit acces", Q_NULLPTR));
        id_des->setText(QApplication::translate("Login", "Par ID descandant", Q_NULLPTR));
        tri->setText(QApplication::translate("Login", "Trier", Q_NULLPTR));
        radio_id->setText(QApplication::translate("Login", "Par ID", Q_NULLPTR));
        radio_role->setText(QApplication::translate("Login", "PAR ROLE", Q_NULLPTR));
        radio_nom->setText(QApplication::translate("Login", "PAR NOM", Q_NULLPTR));
        recherche->setText(QApplication::translate("Login", "Recherche", Q_NULLPTR));
        id_asc->setText(QApplication::translate("Login", "Par ID ascendant", Q_NULLPTR));
        role_asc->setText(QApplication::translate("Login", "PAR ROLE ascendant", Q_NULLPTR));
        nom_asc->setText(QApplication::translate("Login", "PAR NOM ascendant", Q_NULLPTR));
        role_desc->setText(QApplication::translate("Login", "PAR ROLE descandant", Q_NULLPTR));
        nom_desc->setText(QApplication::translate("Login", "PAR NOM descandant", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Login", "Affecter droit", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Login", "Excel", Q_NULLPTR));
        Supp_droitut->setText(QApplication::translate("Login", "Supprimer", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Login", "Ajout droit", Q_NULLPTR));
        label_21->setText(QApplication::translate("Login", "libelle droit", Q_NULLPTR));
        label_20->setText(QApplication::translate("Login", "Code droit", Q_NULLPTR));
        ajout_droit->setText(QApplication::translate("Login", "Ajouter", Q_NULLPTR));
        label_32->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Login", "Inscription", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Pr\303\251nom</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", Q_NULLPTR));
        label_18->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Role</span></p></body></html>", Q_NULLPTR));
        inscription_nom->setText(QString());
        inscription_prenom->setText(QString());
        inscription_inscrit->setText(QApplication::translate("Login", "S'inscrire", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Login", "Gerant", Q_NULLPTR)
         << QApplication::translate("Login", "Chef", Q_NULLPTR)
         << QApplication::translate("Login", "Serveur", Q_NULLPTR)
         << QApplication::translate("Login", "Caissier", Q_NULLPTR)
         << QApplication::translate("Login", "Gestionniare commande", Q_NULLPTR)
         << QApplication::translate("Login", "Gestionnaire fournisseur", Q_NULLPTR)
        );
        affiche_utilisateur->setText(QApplication::translate("Login", "Afficher utilisateurs", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Login", "Afficher droits", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Login", "Ajout droit", Q_NULLPTR));
        gif->setText(QString());
        groupBox_6->setTitle(QApplication::translate("Login", "Affiche droit", Q_NULLPTR));
        supprimer_droit->setText(QApplication::translate("Login", "Supprimer", Q_NULLPTR));
        label_33->setText(QString());
        pushButton_3->setText(QApplication::translate("Login", "Retour", Q_NULLPTR));
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QApplication::translate("Login", "K O U J I N T I ", Q_NULLPTR));
        label_28->setText(QApplication::translate("Login", "K O U J I N T I ", Q_NULLPTR));
        label_29->setText(QApplication::translate("Login", "_______Restauration_______", Q_NULLPTR));
        label_30->setText(QString());
        hola->setText(QString());
        label_34->setText(QString());
        mute1->setText(QApplication::translate("Login", "mute", Q_NULLPTR));
        music->setText(QString());
        pause1->setText(QApplication::translate("Login", "pause", Q_NULLPTR));
        play1->setText(QApplication::translate("Login", "play", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
