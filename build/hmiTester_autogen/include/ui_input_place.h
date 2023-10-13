/********************************************************************************
** Form generated from reading UI file 'input_place.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_PLACE_H
#define UI_INPUT_PLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputPlace
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *mainGLayout;
    QLabel *labelPush;
    QLabel *labelValue;
    QLabel *labelId;
    QLabel *labelType;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdAddWidget;
    QPushButton *cmdPushAll;

    void setupUi(QWidget *InputPlace)
    {
        if (InputPlace->objectName().isEmpty())
            InputPlace->setObjectName(QString::fromUtf8("InputPlace"));
        InputPlace->resize(475, 600);
        gridLayout = new QGridLayout(InputPlace);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mainGLayout = new QGridLayout();
        mainGLayout->setObjectName(QString::fromUtf8("mainGLayout"));
        labelPush = new QLabel(InputPlace);
        labelPush->setObjectName(QString::fromUtf8("labelPush"));
        labelPush->setAlignment(Qt::AlignCenter);

        mainGLayout->addWidget(labelPush, 0, 3, 1, 1);

        labelValue = new QLabel(InputPlace);
        labelValue->setObjectName(QString::fromUtf8("labelValue"));
        labelValue->setAlignment(Qt::AlignCenter);

        mainGLayout->addWidget(labelValue, 0, 1, 1, 1);

        labelId = new QLabel(InputPlace);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setAlignment(Qt::AlignCenter);

        mainGLayout->addWidget(labelId, 0, 0, 1, 1);

        labelType = new QLabel(InputPlace);
        labelType->setObjectName(QString::fromUtf8("labelType"));
        labelType->setAlignment(Qt::AlignCenter);

        mainGLayout->addWidget(labelType, 0, 2, 1, 1);


        verticalLayout->addLayout(mainGLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        cmdAddWidget = new QPushButton(InputPlace);
        cmdAddWidget->setObjectName(QString::fromUtf8("cmdAddWidget"));

        verticalLayout->addWidget(cmdAddWidget);

        cmdPushAll = new QPushButton(InputPlace);
        cmdPushAll->setObjectName(QString::fromUtf8("cmdPushAll"));

        verticalLayout->addWidget(cmdPushAll);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(InputPlace);

        QMetaObject::connectSlotsByName(InputPlace);
    } // setupUi

    void retranslateUi(QWidget *InputPlace)
    {
        InputPlace->setWindowTitle(QApplication::translate("InputPlace", "Form", nullptr));
        labelPush->setText(QApplication::translate("InputPlace", "Push", nullptr));
        labelValue->setText(QApplication::translate("InputPlace", "Value", nullptr));
        labelId->setText(QApplication::translate("InputPlace", "ID", nullptr));
        labelType->setText(QApplication::translate("InputPlace", "Type", nullptr));
        cmdAddWidget->setText(QApplication::translate("InputPlace", "add", nullptr));
        cmdPushAll->setText(QApplication::translate("InputPlace", "push all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputPlace: public Ui_InputPlace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_PLACE_H
