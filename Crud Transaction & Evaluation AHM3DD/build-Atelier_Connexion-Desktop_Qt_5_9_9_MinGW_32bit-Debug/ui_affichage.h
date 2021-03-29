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
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *affichage)
    {
        if (affichage->objectName().isEmpty())
            affichage->setObjectName(QStringLiteral("affichage"));
        affichage->resize(815, 429);
        groupBox = new QGroupBox(affichage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 70, 311, 161));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 47, 13));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 47, 13));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 47, 13));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 40, 113, 20));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 80, 113, 20));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 120, 113, 20));

        retranslateUi(affichage);

        QMetaObject::connectSlotsByName(affichage);
    } // setupUi

    void retranslateUi(QDialog *affichage)
    {
        affichage->setWindowTitle(QApplication::translate("affichage", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("affichage", "Ajouter Client", Q_NULLPTR));
        label->setText(QApplication::translate("affichage", "Nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("affichage", "Pr\303\251nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("affichage", "Age", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class affichage: public Ui_affichage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHAGE_H
