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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;

    void setupUi(QDialog *affichage)
    {
        if (affichage->objectName().isEmpty())
            affichage->setObjectName(QStringLiteral("affichage"));
        affichage->resize(400, 300);
        lineEdit = new QLineEdit(affichage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 70, 113, 22));
        lineEdit_2 = new QLineEdit(affichage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 140, 113, 22));
        lineEdit_3 = new QLineEdit(affichage);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 210, 113, 22));
        label = new QLabel(affichage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 70, 121, 21));
        label_2 = new QLabel(affichage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 140, 151, 21));
        label_3 = new QLabel(affichage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 210, 121, 21));
        groupBox = new QGroupBox(affichage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 381, 251));

        retranslateUi(affichage);

        QMetaObject::connectSlotsByName(affichage);
    } // setupUi

    void retranslateUi(QDialog *affichage)
    {
        affichage->setWindowTitle(QApplication::translate("affichage", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("affichage", "CIN :", Q_NULLPTR));
        label_2->setText(QApplication::translate("affichage", "Prenom ", Q_NULLPTR));
        label_3->setText(QApplication::translate("affichage", "Nom:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("affichage", "Afficher Un Client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class affichage: public Ui_affichage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHAGE_H
