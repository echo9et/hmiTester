/********************************************************************************
** Form generated from reading UI file 'json_place.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JSON_PLACE_H
#define UI_JSON_PLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JsonPlace
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *mainVLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *JsonPlace)
    {
        if (JsonPlace->objectName().isEmpty())
            JsonPlace->setObjectName(QString::fromUtf8("JsonPlace"));
        JsonPlace->resize(400, 600);
        gridLayout = new QGridLayout(JsonPlace);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainVLayout = new QVBoxLayout();
        mainVLayout->setObjectName(QString::fromUtf8("mainVLayout"));

        gridLayout->addLayout(mainVLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(JsonPlace);

        QMetaObject::connectSlotsByName(JsonPlace);
    } // setupUi

    void retranslateUi(QWidget *JsonPlace)
    {
        JsonPlace->setWindowTitle(QApplication::translate("JsonPlace", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JsonPlace: public Ui_JsonPlace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JSON_PLACE_H
