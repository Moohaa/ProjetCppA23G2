/********************************************************************************
** Form generated from reading UI file 'stat.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_H
#define UI_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_stati
{
public:
    QLabel *labelF;
    QLabel *label_2F;

    void setupUi(QDialog *stati)
    {
        if (stati->objectName().isEmpty())
            stati->setObjectName(QStringLiteral("stati"));
        stati->resize(539, 390);
        labelF = new QLabel(stati);
        labelF->setObjectName(QStringLiteral("labelF"));
        labelF->setGeometry(QRect(440, 300, 47, 13));
        label_2F = new QLabel(stati);
        label_2F->setObjectName(QStringLiteral("label_2F"));
        label_2F->setGeometry(QRect(440, 340, 47, 13));

        retranslateUi(stati);

        QMetaObject::connectSlotsByName(stati);
    } // setupUi

    void retranslateUi(QDialog *stati)
    {
        stati->setWindowTitle(QApplication::translate("stati", "Dialog", nullptr));
        labelF->setText(QApplication::translate("stati", "TextLabel", nullptr));
        label_2F->setText(QApplication::translate("stati", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stati: public Ui_stati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H
