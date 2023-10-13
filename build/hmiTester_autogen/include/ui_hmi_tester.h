/********************************************************************************
** Form generated from reading UI file 'hmi_tester.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMI_TESTER_H
#define UI_HMI_TESTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hmi_tester
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *mainLayout;

    void setupUi(QWidget *hmi_tester)
    {
        if (hmi_tester->objectName().isEmpty())
            hmi_tester->setObjectName(QString::fromUtf8("hmi_tester"));
        hmi_tester->resize(724, 649);
        gridLayout = new QGridLayout(hmi_tester);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainLayout = new QHBoxLayout();
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));

        gridLayout->addLayout(mainLayout, 0, 0, 1, 1);


        retranslateUi(hmi_tester);

        QMetaObject::connectSlotsByName(hmi_tester);
    } // setupUi

    void retranslateUi(QWidget *hmi_tester)
    {
        hmi_tester->setWindowTitle(QApplication::translate("hmi_tester", "hmi_tester", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hmi_tester: public Ui_hmi_tester {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMI_TESTER_H
