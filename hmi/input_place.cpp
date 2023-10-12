#include "input_place.h"
#include "ui_input_place.h"

#include <QIntValidator>
#include <QDoubleValidator>
#include <QValidator>

#include <QDebug>

//---------------------------InputPlace---------------------------------------

InputPlace::InputPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputPlace)
{
    ui->setupUi(this);
    on_cmdAddWidget_clicked();
}

InputPlace::~InputPlace()
{
    delete ui;
}

void InputPlace::on_cmdAddWidget_clicked()
{
    InputWidget* inputWidget = new InputWidget(this, &_supportType);
    const int row = ui->mainGLayout->rowCount();
    ui->mainGLayout->addWidget(inputWidget->_lineEditId, row, 0);
    ui->mainGLayout->addWidget(inputWidget->_lineEditValue, row, 1);
    ui->mainGLayout->addWidget(inputWidget->_cmdType, row, 2);
    ui->mainGLayout->addWidget(inputWidget->_cmdPush, row, 3);

    connect(this,        &InputPlace::pushAll,
            inputWidget, &InputWidget::cmdPush );
}

void InputPlace::on_cmdPushAll_clicked()
{
    emit pushAll();
}

void InputPlace::changeTypeCmd(QPushButton* cmdType)
{
    auto it = _supportType.find(cmdType->text());
    if ( it == _supportType.end() || (++it) == _supportType.end() )
    {
        cmdType->setText(*_supportType.begin());
    }
    cmdType->setText(*it);
}

//------------------------------END--------------------------------------------

//---------------------------InputWidget---------------------------------------

InputWidget::InputWidget(QWidget *parent, QSet<QString>* supportType ) :
    QWidget(parent),
    _supportType(supportType)
{
    _lineEditId = new QLineEdit(this);
    QLocale local(QLocale::C);
    local.setNumberOptions(QLocale::RejectGroupSeparator);

    QIntValidator* validator = new QIntValidator(this);
    validator->setLocale(local);

    _lineEditId->setValidator( validator );

    _lineEditValue = new QLineEdit(this);

    _cmdPush = new QPushButton(this);
    _cmdPush->setText("push");
    connect(_cmdPush, &QPushButton::clicked,
            this,     &InputWidget::cmdPush);

    _cmdType = new QPushButton(this);
    _cmdType->setText("type");
    connect(_cmdType, &QPushButton::clicked,
            this,     &InputWidget::changeType);
}

void InputWidget::changeType()
{
    changeTextCmdType();
    changeTypeInputLineEdit();
}

void InputWidget::cmdPush()
{
    if ( _lineEditId->text().isEmpty() || _lineEditValue->text().isEmpty() )
    {
        return;
    }

    int id = _lineEditId->text().toInt();

    if ( _cmdType->text() == "int" )
    {
        qDebug()<< "id : " << id << " int " << _lineEditValue->text().toInt();
    }
    else if ( _cmdType->text() == "double" )
    {
        qDebug()<< "id : " << id << " double " << _lineEditValue->text().toDouble() << "->" << _lineEditValue->text();
    }
    else
    {
        qDebug()<< "id : " << id << " string " << _lineEditValue->text();
    }
}

void InputWidget::changeTextCmdType()
{
    auto it = _supportType->find(_cmdType->text());

    if ( it == _supportType->end() || ++it == _supportType->end() )
        _cmdType->setText(*_supportType->begin());
    else
        _cmdType->setText(*it);
}

void InputWidget::changeTypeInputLineEdit()
{
    QString type = _cmdType->text();
    _lineEditValue->clear();

    if ( type == "int" )
    {
        QLocale local(QLocale::C);
        local.setNumberOptions(QLocale::RejectGroupSeparator);

        QIntValidator* validator = new QIntValidator(this);
        validator->setLocale(local);

        _lineEditValue->setValidator( validator );
    }
    else if ( type == "double" )
    {
        QLocale local(QLocale::C);
        local.setNumberOptions(QLocale::RejectGroupSeparator);

        QDoubleValidator* validator = new QDoubleValidator(this);
        validator->setNotation(QDoubleValidator::StandardNotation);
        validator->setLocale(local);

        _lineEditValue->setValidator( validator );
    }
    else
    {
        _lineEditValue->setValidator( nullptr );
    }
}

//------------------------------END--------------------------------------------
