/********************************************************************************
** Form generated from reading UI file 'json_custom_widgets.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JSON_CUSTOM_WIDGETS_H
#define UI_JSON_CUSTOM_WIDGETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_json_custom_widgets
{
public:
    QLabel *labelWidget;
    QLabel *label_2;
    QLabel *labelType;
    QLabel *labelId;
    QLabel *label_3;
    QSlider *slider;
    QLineEdit *lineEditMin;
    QLineEdit *lineEditMax;

    void setupUi(QWidget *json_custom_widgets)
    {
        if (json_custom_widgets->objectName().isEmpty())
            json_custom_widgets->setObjectName(QString::fromUtf8("json_custom_widgets"));
        json_custom_widgets->resize(375, 100);
        json_custom_widgets->setMinimumSize(QSize(375, 100));
        json_custom_widgets->setMaximumSize(QSize(375, 100));
        labelWidget = new QLabel(json_custom_widgets);
        labelWidget->setObjectName(QString::fromUtf8("labelWidget"));
        labelWidget->setGeometry(QRect(10, 10, 121, 17));
        label_2 = new QLabel(json_custom_widgets);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 41, 17));
        labelType = new QLabel(json_custom_widgets);
        labelType->setObjectName(QString::fromUtf8("labelType"));
        labelType->setGeometry(QRect(70, 40, 61, 17));
        labelId = new QLabel(json_custom_widgets);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setGeometry(QRect(50, 60, 61, 17));
        label_3 = new QLabel(json_custom_widgets);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 41, 17));
        slider = new QSlider(json_custom_widgets);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(160, 40, 101, 16));
        slider->setOrientation(Qt::Horizontal);
        lineEditMin = new QLineEdit(json_custom_widgets);
        lineEditMin->setObjectName(QString::fromUtf8("lineEditMin"));
        lineEditMin->setGeometry(QRect(270, 10, 91, 25));
        lineEditMax = new QLineEdit(json_custom_widgets);
        lineEditMax->setObjectName(QString::fromUtf8("lineEditMax"));
        lineEditMax->setGeometry(QRect(270, 50, 91, 25));

        retranslateUi(json_custom_widgets);

        QMetaObject::connectSlotsByName(json_custom_widgets);
    } // setupUi

    void retranslateUi(QWidget *json_custom_widgets)
    {
        json_custom_widgets->setWindowTitle(QApplication::translate("json_custom_widgets", "Form", nullptr));
        labelWidget->setText(QApplication::translate("json_custom_widgets", "label_widget", nullptr));
        label_2->setText(QApplication::translate("json_custom_widgets", "type:", nullptr));
        labelType->setText(QApplication::translate("json_custom_widgets", "type", nullptr));
        labelId->setText(QApplication::translate("json_custom_widgets", "0", nullptr));
        label_3->setText(QApplication::translate("json_custom_widgets", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class json_custom_widgets: public Ui_json_custom_widgets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JSON_CUSTOM_WIDGETS_H
