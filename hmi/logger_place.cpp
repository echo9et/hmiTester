#include "logger_place.h"
#include "ui_logger_place.h"

LoggerPlace::LoggerPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoggerPlace)
{
    ui->setupUi(this);
}

LoggerPlace::~LoggerPlace()
{
    delete ui;
}
