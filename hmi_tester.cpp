#include "hmi_tester.h"
#include "./ui_hmi_tester.h"
hmi_tester::hmi_tester(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hmi_tester)
{
    ui->setupUi(this);

    _inputPlace = new InputPlace(this);
    ui->mainLayout->addWidget(_inputPlace);

}

hmi_tester::~hmi_tester()
{
    delete ui;
}

