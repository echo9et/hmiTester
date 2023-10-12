#include "json_custom_widgets.h"
#include "ui_json_place/ui_json_custom_widgets.h"

using namespace inputPlace::widgets;

CustomSlider::CustomSlider(StructSlider ss, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::json_custom_widgets)
{
    ui->setupUi(this);

    ui->slider->setMinimum(ss.min);
    ui->slider->setMaximum(ss.max);

    ui->lineEditMin->setText(QString::number (ss.min));
    ui->lineEditMax->setText(QString::number (ss.max));

    ui->labelId->setText(QString::number (ss.id));
    ui->labelType->setText(ss.type_val);
    ui->labelWidget->setText(ss.label);
}

CustomSlider::~CustomSlider()
{
    delete ui;
}
