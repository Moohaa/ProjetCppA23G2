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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stati
{
public:
    QLabel *labelF;
    QLabel *label_2F;
    QWidget *widget_2FF;
    QWidget *widget;
    QWidget *widget_3FF;
    QLabel *label_3F;
    QLabel *label;
    QWidget *widget_4FF;
    QLabel *label_4F;

    void setupUi(QDialog *stati)
    {
        if (stati->objectName().isEmpty())
            stati->setObjectName(QStringLiteral("stati"));
        stati->resize(627, 384);
        labelF = new QLabel(stati);
        labelF->setObjectName(QStringLiteral("labelF"));
        labelF->setGeometry(QRect(500, 260, 121, 16));
        label_2F = new QLabel(stati);
        label_2F->setObjectName(QStringLiteral("label_2F"));
        label_2F->setGeometry(QRect(500, 290, 121, 16));
        widget_2FF = new QWidget(stati);
        widget_2FF->setObjectName(QStringLiteral("widget_2FF"));
        widget_2FF->setGeometry(QRect(470, 260, 21, 21));
        widget_2FF->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:1 rgba(251, 0, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.011, x2:1, y2:0, stop:1 rgba(14, 0, 134, 255));"));
        widget = new QWidget(stati);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(470, 290, 21, 21));
        widget->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 193, 35, 255), stop:0.98995 rgba(0, 170, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0.964824, y1:0, x2:1, y2:0, stop:1 rgba(8, 141, 23, 255));"));
        widget_3FF = new QWidget(stati);
        widget_3FF->setObjectName(QStringLiteral("widget_3FF"));
        widget_3FF->setGeometry(QRect(470, 350, 21, 21));
        widget_3FF->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 193, 35, 255), stop:0.98995 rgba(0, 170, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.979899 rgba(169, 4, 4, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));r: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:1 rgba(137, 135, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.979899 rgba(169, 4, 4, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_3F = new QLabel(stati);
        label_3F->setObjectName(QStringLiteral("label_3F"));
        label_3F->setGeometry(QRect(500, 320, 121, 16));
        label = new QLabel(stati);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 541, 20));
        QFont font;
        font.setFamily(QStringLiteral("Sitka"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        widget_4FF = new QWidget(stati);
        widget_4FF->setObjectName(QStringLiteral("widget_4FF"));
        widget_4FF->setGeometry(QRect(470, 320, 21, 21));
        widget_4FF->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 193, 35, 255), stop:0.98995 rgba(0, 170, 0, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0.975, y1:0.023, x2:1, y2:0, stop:1 rgba(136, 135, 135, 255));"));
        label_4F = new QLabel(stati);
        label_4F->setObjectName(QStringLiteral("label_4F"));
        label_4F->setGeometry(QRect(500, 350, 121, 16));

        retranslateUi(stati);

        QMetaObject::connectSlotsByName(stati);
    } // setupUi

    void retranslateUi(QDialog *stati)
    {
        stati->setWindowTitle(QApplication::translate("stati", "Dialog", nullptr));
        labelF->setText(QApplication::translate("stati", "TextLabel", nullptr));
        label_2F->setText(QApplication::translate("stati", "TextLabel", nullptr));
        label_3F->setText(QApplication::translate("stati", "TextLabel", nullptr));
        label->setText(QApplication::translate("stati", "                                                Statistiques sur les prix des commandes", nullptr));
        label_4F->setText(QApplication::translate("stati", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stati: public Ui_stati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H
