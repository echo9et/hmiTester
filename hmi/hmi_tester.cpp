#include "hmi_tester.h"
#include "./ui_hmi_tester.h"
hmi_tester::hmi_tester(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::hmi_tester)
{
    ui->setupUi(this);

    _inputPlace = new InputPlace(this);
    ui->mainLayout->addWidget(_inputPlace);

    _jsonPlace = new JsonPlace(this);
    ui->mainLayout->addWidget(_jsonPlace);

    _loggerPlace = new LoggerPlace(this);
    ui->mainLayout->addWidget(_loggerPlace);
}

hmi_tester::~hmi_tester()
{
    delete ui;
}

