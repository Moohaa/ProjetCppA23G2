/********************************************************************************
** Form generated from reading UI file 'affichage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHAGE_H
#define UI_AFFICHAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_affichage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLineEdit *Nom;
    QLineEdit *Nom_2;
    QLineEdit *CIN;
    QLabel *label_4;
    QLineEdit *Prenom;

    void setupUi(QDialog *affichage)
    {
        if (affichage->objectName().isEmpty())
            affichage->setObjectName(QStringLiteral("affichage"));
        affichage->resize(400, 300);
        label = new QLabel(affichage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 47, 14));
        label_2 = new QLabel(affichage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 47, 14));
        label_3 = new QLabel(affichage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 47, 14));
        groupBox = new QGroupBox(affichage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 50, 211, 181));
        Nom = new QLineEdit(groupBox);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(60, 100, 113, 20));
        Nom_2 = new QLineEdit(groupBox);
        Nom_2->setObjectName(QStringLiteral("Nom_2"));
        Nom_2->setGeometry(QRect(60, 130, 113, 20));
        CIN = new QLineEdit(affichage);
        CIN->setObjectName(QStringLiteral("CIN"));
        CIN->setGeometry(QRect(70, 90, 113, 20));
        label_4 = new QLabel(affichage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 180, 47, 14));
        Prenom = new QLineEdit(affichage);
        Prenom->setObjectName(QStringLiteral("Prenom"));
        Prenom->setGeometry(QRect(70, 120, 113, 20));

        retranslateUi(affichage);

        QMetaObject::connectSlotsByName(affichage);
    } // setupUi

    void retranslateUi(QDialog *affichage)
    {
        affichage->setWindowTitle(QApplication::translate("affichage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("affichage", "CIN:", Q_NULLPTR));
        label_2->setText(QApplication::translate("affichage", "Prenom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("affichage", "Nom: ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("affichage", "Afficher client:", Q_NULLPTR));
        label_4->setText(QApplication::translate("affichage", "Age:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class affichage: public Ui_affichage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHAGE_H
