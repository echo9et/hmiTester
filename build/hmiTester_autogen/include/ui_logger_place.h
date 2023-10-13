/********************************************************************************
** Form generated from reading UI file 'logger_place.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGER_PLACE_H
#define UI_LOGGER_PLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoggerPlace
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *mainVLayout;
    QPlainTextEdit *plainTextLogger;
    QPushButton *pushButton;

    void setupUi(QWidget *LoggerPlace)
    {
        if (LoggerPlace->objectName().isEmpty())
            LoggerPlace->setObjectName(QString::fromUtf8("LoggerPlace"));
        LoggerPlace->resize(300, 600);
        LoggerPlace->setMinimumSize(QSize(300, 600));
        LoggerPlace->setMaximumSize(QSize(300, 600));
        gridLayout = new QGridLayout(LoggerPlace);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainVLayout = new QVBoxLayout();
        mainVLayout->setSpacing(0);
        mainVLayout->setObjectName(QString::fromUtf8("mainVLayout"));
        plainTextLogger = new QPlainTextEdit(LoggerPlace);
        plainTextLogger->setObjectName(QString::fromUtf8("plainTextLogger"));

        mainVLayout->addWidget(plainTextLogger);

        pushButton = new QPushButton(LoggerPlace);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        mainVLayout->addWidget(pushButton);


        gridLayout->addLayout(mainVLayout, 0, 0, 1, 1);


        retranslateUi(LoggerPlace);

        QMetaObject::connectSlotsByName(LoggerPlace);
    } // setupUi

    void retranslateUi(QWidget *LoggerPlace)
    {
        LoggerPlace->setWindowTitle(QApplication::translate("LoggerPlace", "Form", nullptr));
        pushButton->setText(QApplication::translate("LoggerPlace", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoggerPlace: public Ui_LoggerPlace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGER_PLACE_H
