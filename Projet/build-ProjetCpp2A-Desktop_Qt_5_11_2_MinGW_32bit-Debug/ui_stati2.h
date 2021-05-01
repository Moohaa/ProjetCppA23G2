/********************************************************************************
** Form generated from reading UI file 'stati2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATI2_H
#define UI_STATI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_stati2
{
public:

    void setupUi(QDialog *stati2)
    {
        if (stati2->objectName().isEmpty())
            stati2->setObjectName(QStringLiteral("stati2"));
        stati2->resize(400, 300);

        retranslateUi(stati2);

        QMetaObject::connectSlotsByName(stati2);
    } // setupUi

    void retranslateUi(QDialog *stati2)
    {
        stati2->setWindowTitle(QApplication::translate("stati2", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stati2: public Ui_stati2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATI2_H
