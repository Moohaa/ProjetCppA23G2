/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QWidget *page_10;
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
    QWidget *page_12;
    QTableView *AJT_DROIT;
    QPushButton *ajoute_droit_3;
    QLineEdit *codedroit_inscri_3;
    QComboBox *liste_droit_3;
    QLineEdit *line_id;
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
    QWidget *page_15;
    QWidget *page_6;
    QPushButton *affiche_utilisateur;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QWidget *page_30;
    QWidget *page_7;
    QGroupBox *groupBox_6;
    QPushButton *supprimer_droit;
    QTableView *affiche_droit;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1143, 768);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 1091, 641));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 50, 631, 431));
        groupBox->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 140, 91, 16));
        Login_connexion = new QPushButton(groupBox);
        Login_connexion->setObjectName(QStringLiteral("Login_connexion"));
        Login_connexion->setGeometry(QRect(190, 190, 101, 23));
        Login_ins = new QPushButton(groupBox);
        Login_ins->setObjectName(QStringLiteral("Login_ins"));
        Login_ins->setGeometry(QRect(360, 190, 121, 23));
        Login_ins->setStyleSheet(QStringLiteral(""));
        login_email = new QLineEdit(groupBox);
        login_email->setObjectName(QStringLiteral("login_email"));
        login_email->setGeometry(QRect(270, 80, 131, 20));
        login_mdp = new QLineEdit(groupBox);
        login_mdp->setObjectName(QStringLiteral("login_mdp"));
        login_mdp->setGeometry(QRect(270, 140, 131, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 80, 47, 14));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 60, 611, 411));
        groupBox_3->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 80, 47, 14));
        label_8->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 110, 47, 14));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 140, 47, 31));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 180, 91, 20));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(140, 220, 41, 16));
        label_12->setMinimumSize(QSize(41, 0));
        label_12->setMaximumSize(QSize(41, 16777215));
        inscription_nom_2 = new QLineEdit(groupBox_3);
        inscription_nom_2->setObjectName(QStringLiteral("inscription_nom_2"));
        inscription_nom_2->setGeometry(QRect(210, 80, 113, 20));
        inscription_prenom_2 = new QLineEdit(groupBox_3);
        inscription_prenom_2->setObjectName(QStringLiteral("inscription_prenom_2"));
        inscription_prenom_2->setGeometry(QRect(210, 110, 113, 20));
        inscription_email_2 = new QLineEdit(groupBox_3);
        inscription_email_2->setObjectName(QStringLiteral("inscription_email_2"));
        inscription_email_2->setGeometry(QRect(210, 140, 113, 20));
        inscription_mdp_2 = new QLineEdit(groupBox_3);
        inscription_mdp_2->setObjectName(QStringLiteral("inscription_mdp_2"));
        inscription_mdp_2->setGeometry(QRect(210, 180, 113, 20));
        inscription_inscrit_2 = new QPushButton(groupBox_3);
        inscription_inscrit_2->setObjectName(QStringLiteral("inscription_inscrit_2"));
        inscription_inscrit_2->setGeometry(QRect(230, 270, 101, 23));
        inscription_inscrit_2->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }"));
        inscription_role = new QComboBox(groupBox_3);
        inscription_role->addItem(QString());
        inscription_role->addItem(QString());
        inscription_role->addItem(QString());
        inscription_role->addItem(QString());
        inscription_role->addItem(QString());
        inscription_role->addItem(QString());
        inscription_role->setObjectName(QStringLiteral("inscription_role"));
        inscription_role->setGeometry(QRect(210, 220, 121, 22));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 70, 611, 411));
        groupBox_4->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(150, 80, 47, 14));
        label_13->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(140, 110, 47, 14));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(150, 140, 47, 31));
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
        inscription_nom_3->setGeometry(QRect(210, 80, 113, 20));
        inscription_prenom_3 = new QLineEdit(groupBox_4);
        inscription_prenom_3->setObjectName(QStringLiteral("inscription_prenom_3"));
        inscription_prenom_3->setGeometry(QRect(210, 110, 113, 20));
        inscription_email_3 = new QLineEdit(groupBox_4);
        inscription_email_3->setObjectName(QStringLiteral("inscription_email_3"));
        inscription_email_3->setGeometry(QRect(210, 140, 113, 20));
        inscription_mdp_3 = new QLineEdit(groupBox_4);
        inscription_mdp_3->setObjectName(QStringLiteral("inscription_mdp_3"));
        inscription_mdp_3->setGeometry(QRect(210, 180, 113, 20));
        modifier_utilisateur = new QPushButton(groupBox_4);
        modifier_utilisateur->setObjectName(QStringLiteral("modifier_utilisateur"));
        modifier_utilisateur->setGeometry(QRect(230, 280, 101, 23));
        modifier_utilisateur->setStyleSheet(QLatin1String("QPushButton { color: red }\n"
"QLineEdit { color: red }\n"
"QComboBox { color: red }"));
        inscription_role_3 = new QComboBox(groupBox_4);
        inscription_role_3->addItem(QString());
        inscription_role_3->addItem(QString());
        inscription_role_3->addItem(QString());
        inscription_role_3->addItem(QString());
        inscription_role_3->addItem(QString());
        inscription_role_3->addItem(QString());
        inscription_role_3->setObjectName(QStringLiteral("inscription_role_3"));
        inscription_role_3->setGeometry(QRect(210, 220, 111, 22));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(160, 50, 47, 14));
        inscription_id_3 = new QLineEdit(groupBox_4);
        inscription_id_3->setObjectName(QStringLiteral("inscription_id_3"));
        inscription_id_3->setGeometry(QRect(210, 50, 113, 20));
        stackedWidget->addWidget(page_4);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        stackedWidget->addWidget(page_10);
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
        ajoute_droit->setGeometry(QRect(150, 70, 75, 23));
        tab_droit = new QTableView(page_9);
        tab_droit->setObjectName(QStringLiteral("tab_droit"));
        tab_droit->setGeometry(QRect(25, 141, 401, 361));
        supp_droit = new QPushButton(page_9);
        supp_droit->setObjectName(QStringLiteral("supp_droit"));
        supp_droit->setGeometry(QRect(640, 350, 75, 23));
        label_22 = new QLabel(page_9);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(530, 230, 51, 16));
        label_23 = new QLabel(page_9);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(520, 270, 81, 20));
        modif_code = new QLineEdit(page_9);
        modif_code->setObjectName(QStringLiteral("modif_code"));
        modif_code->setGeometry(QRect(630, 230, 113, 20));
        modif_lib = new QLineEdit(page_9);
        modif_lib->setObjectName(QStringLiteral("modif_lib"));
        modif_lib->setGeometry(QRect(630, 270, 113, 20));
        modifier_droit = new QPushButton(page_9);
        modifier_droit->setObjectName(QStringLiteral("modifier_droit"));
        modifier_droit->setGeometry(QRect(640, 320, 75, 23));
        stackedWidget->addWidget(page_9);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        AJT_DROIT = new QTableView(page_12);
        AJT_DROIT->setObjectName(QStringLiteral("AJT_DROIT"));
        AJT_DROIT->setGeometry(QRect(40, 90, 631, 451));
        ajoute_droit_3 = new QPushButton(page_12);
        ajoute_droit_3->setObjectName(QStringLiteral("ajoute_droit_3"));
        ajoute_droit_3->setGeometry(QRect(170, 40, 75, 23));
        codedroit_inscri_3 = new QLineEdit(page_12);
        codedroit_inscri_3->setObjectName(QStringLiteral("codedroit_inscri_3"));
        codedroit_inscri_3->setGeometry(QRect(410, 40, 113, 20));
        liste_droit_3 = new QComboBox(page_12);
        liste_droit_3->setObjectName(QStringLiteral("liste_droit_3"));
        liste_droit_3->setGeometry(QRect(281, 40, 91, 22));
        line_id = new QLineEdit(page_12);
        line_id->setObjectName(QStringLiteral("line_id"));
        line_id->setGeometry(QRect(970, 20, 113, 20));
        stackedWidget->addWidget(page_12);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tab_affiche = new QTableView(page_5);
        tab_affiche->setObjectName(QStringLiteral("tab_affiche"));
        tab_affiche->setGeometry(QRect(0, 90, 601, 381));
        label_3 = new QLabel(page_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 30, 91, 41));
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 490, 131, 31));
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 490, 101, 31));
        id_des = new QRadioButton(page_5);
        id_des->setObjectName(QStringLiteral("id_des"));
        id_des->setGeometry(QRect(760, 110, 111, 18));
        tri = new QPushButton(page_5);
        tri->setObjectName(QStringLiteral("tri"));
        tri->setGeometry(QRect(640, 270, 75, 23));
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
        pushButton_6->setGeometry(QRect(400, 490, 91, 31));
        pushButton_7 = new QPushButton(page_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(600, 370, 75, 23));
        stackedWidget->addWidget(page_5);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        aff_droitutilisateur = new QTableView(page_11);
        aff_droitutilisateur->setObjectName(QStringLiteral("aff_droitutilisateur"));
        aff_droitutilisateur->setGeometry(QRect(70, 40, 631, 371));
        Supp_droitut = new QPushButton(page_11);
        Supp_droitut->setObjectName(QStringLiteral("Supp_droitut"));
        Supp_droitut->setGeometry(QRect(320, 430, 75, 23));
        stackedWidget->addWidget(page_11);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_5 = new QGroupBox(page_8);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(80, 50, 631, 351));
        ajout_codedroit = new QLineEdit(groupBox_5);
        ajout_codedroit->setObjectName(QStringLiteral("ajout_codedroit"));
        ajout_codedroit->setGeometry(QRect(280, 110, 113, 20));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(170, 170, 81, 16));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(170, 110, 81, 16));
        ajout_droit = new QPushButton(groupBox_5);
        ajout_droit->setObjectName(QStringLiteral("ajout_droit"));
        ajout_droit->setGeometry(QRect(270, 270, 75, 23));
        ajout_libelledroit = new QLineEdit(groupBox_5);
        ajout_libelledroit->setObjectName(QStringLiteral("ajout_libelledroit"));
        ajout_libelledroit->setGeometry(QRect(280, 170, 113, 20));
        stackedWidget->addWidget(page_8);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 60, 671, 411));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 80, 47, 14));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 110, 47, 14));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 140, 47, 31));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 180, 91, 20));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(140, 220, 41, 16));
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
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(211, 230, 61, 22));
        stackedWidget->addWidget(page_2);
        page_15 = new QWidget();
        page_15->setObjectName(QStringLiteral("page_15"));
        stackedWidget->addWidget(page_15);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        affiche_utilisateur = new QPushButton(page_6);
        affiche_utilisateur->setObjectName(QStringLiteral("affiche_utilisateur"));
        affiche_utilisateur->setGeometry(QRect(280, 130, 101, 23));
        pushButton_5 = new QPushButton(page_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(280, 180, 101, 23));
        pushButton_4 = new QPushButton(page_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 220, 91, 23));
        stackedWidget->addWidget(page_6);
        page_30 = new QWidget();
        page_30->setObjectName(QStringLiteral("page_30"));
        stackedWidget->addWidget(page_30);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_6 = new QGroupBox(page_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(50, 30, 681, 421));
        supprimer_droit = new QPushButton(groupBox_6);
        supprimer_droit->setObjectName(QStringLiteral("supprimer_droit"));
        supprimer_droit->setGeometry(QRect(220, 390, 75, 23));
        affiche_droit = new QTableView(groupBox_6);
        affiche_droit->setObjectName(QStringLiteral("affiche_droit"));
        affiche_droit->setGeometry(QRect(40, 40, 611, 341));
        stackedWidget->addWidget(page_7);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 20, 75, 23));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1143, 22));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("Login", "Login", nullptr));
        label_2->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", nullptr));
        Login_connexion->setText(QApplication::translate("Login", "Connexion", nullptr));
        Login_ins->setText(QApplication::translate("Login", "Cr\303\251er un compte", nullptr));
        label->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QApplication::translate("Login", "Ajouter utilisateur", nullptr));
        label_8->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Nom</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Pr\303\251nom</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Role</span></p></body></html>", nullptr));
        inscription_nom_2->setText(QString());
        inscription_prenom_2->setText(QString());
        inscription_inscrit_2->setText(QApplication::translate("Login", "Ajouter", nullptr));
        inscription_role->setItemText(0, QApplication::translate("Login", "Gerant", nullptr));
        inscription_role->setItemText(1, QApplication::translate("Login", "Chef", nullptr));
        inscription_role->setItemText(2, QApplication::translate("Login", "Serveur", nullptr));
        inscription_role->setItemText(3, QApplication::translate("Login", "Caissier", nullptr));
        inscription_role->setItemText(4, QApplication::translate("Login", "Gestionniare commande", nullptr));
        inscription_role->setItemText(5, QApplication::translate("Login", "Gestionnaire fournisseur", nullptr));

        groupBox_4->setTitle(QApplication::translate("Login", "Modifier utilisateur", nullptr));
        label_13->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Nom</span></p></body></html>", nullptr));
        label_14->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Pr\303\251nom</span></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", nullptr));
        label_17->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Role</span></p></body></html>", nullptr));
        inscription_nom_3->setText(QString());
        inscription_prenom_3->setText(QString());
        modifier_utilisateur->setText(QApplication::translate("Login", "Modifier", nullptr));
        inscription_role_3->setItemText(0, QApplication::translate("Login", "G\303\251rant", nullptr));
        inscription_role_3->setItemText(1, QApplication::translate("Login", "Chef", nullptr));
        inscription_role_3->setItemText(2, QApplication::translate("Login", "Serveur", nullptr));
        inscription_role_3->setItemText(3, QApplication::translate("Login", "Caissier", nullptr));
        inscription_role_3->setItemText(4, QApplication::translate("Login", "Gestionniare commande", nullptr));
        inscription_role_3->setItemText(5, QApplication::translate("Login", "Gestionnaire fournisseur", nullptr));

        label_19->setText(QApplication::translate("Login", "id", nullptr));
        ajoute_droit->setText(QApplication::translate("Login", "Ajouter", nullptr));
        supp_droit->setText(QApplication::translate("Login", "Supprimer", nullptr));
        label_22->setText(QApplication::translate("Login", "code_droit", nullptr));
        label_23->setText(QApplication::translate("Login", "libelle_droit", nullptr));
        modifier_droit->setText(QApplication::translate("Login", "Modifier", nullptr));
        ajoute_droit_3->setText(QApplication::translate("Login", "Ajouter", nullptr));
        label_3->setText(QApplication::translate("Login", "Afficher utilisateur", nullptr));
        pushButton->setText(QApplication::translate("Login", "Supprimer", nullptr));
        pushButton_2->setText(QApplication::translate("Login", "Afficher droit acces", nullptr));
        id_des->setText(QApplication::translate("Login", "Par ID descandant", nullptr));
        tri->setText(QApplication::translate("Login", "Trier", nullptr));
        radio_id->setText(QApplication::translate("Login", "Par ID", nullptr));
        radio_role->setText(QApplication::translate("Login", "PAR ROLE", nullptr));
        radio_nom->setText(QApplication::translate("Login", "PAR NOM", nullptr));
        recherche->setText(QApplication::translate("Login", "Recherche", nullptr));
        id_asc->setText(QApplication::translate("Login", "Par ID ascendant", nullptr));
        role_asc->setText(QApplication::translate("Login", "PAR ROLE ascendant", nullptr));
        nom_asc->setText(QApplication::translate("Login", "PAR NOM ascendant", nullptr));
        role_desc->setText(QApplication::translate("Login", "PAR ROLE descandant", nullptr));
        nom_desc->setText(QApplication::translate("Login", "PAR NOM descandant", nullptr));
        pushButton_6->setText(QApplication::translate("Login", "Affecter droit", nullptr));
        pushButton_7->setText(QApplication::translate("Login", "Excel", nullptr));
        Supp_droitut->setText(QApplication::translate("Login", "Supprimer", nullptr));
        groupBox_5->setTitle(QApplication::translate("Login", "Ajout droit", nullptr));
        label_21->setText(QApplication::translate("Login", "libelle droit", nullptr));
        label_20->setText(QApplication::translate("Login", "Code droit", nullptr));
        ajout_droit->setText(QApplication::translate("Login", "Ajouter", nullptr));
        groupBox_2->setTitle(QApplication::translate("Login", "Inscription", nullptr));
        label_4->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Nom</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Pr\303\251nom</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Email</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Mot de passe</span></p></body></html>", nullptr));
        label_18->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Role</span></p></body></html>", nullptr));
        inscription_nom->setText(QString());
        inscription_prenom->setText(QString());
        inscription_inscrit->setText(QApplication::translate("Login", "S'inscrire", nullptr));
        comboBox->setItemText(0, QApplication::translate("Login", "Gerant", nullptr));
        comboBox->setItemText(1, QApplication::translate("Login", "Chef", nullptr));
        comboBox->setItemText(2, QApplication::translate("Login", "Serveur", nullptr));
        comboBox->setItemText(3, QApplication::translate("Login", "Caissier", nullptr));
        comboBox->setItemText(4, QApplication::translate("Login", "Gestionniare commande", nullptr));
        comboBox->setItemText(5, QApplication::translate("Login", "Gestionnaire fournisseur", nullptr));

        affiche_utilisateur->setText(QApplication::translate("Login", "Afficher utilisateurs", nullptr));
        pushButton_5->setText(QApplication::translate("Login", "Afficher droits", nullptr));
        pushButton_4->setText(QApplication::translate("Login", "Ajout droit", nullptr));
        groupBox_6->setTitle(QApplication::translate("Login", "Affiche droit", nullptr));
        supprimer_droit->setText(QApplication::translate("Login", "Supprimer", nullptr));
        pushButton_3->setText(QApplication::translate("Login", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
