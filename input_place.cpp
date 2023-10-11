#include "input_place.h"
#include "ui_input_place.h"

//---------------------------InputPlace---------------------------------------
InputPlace::InputPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputPlace)
{
    ui->setupUi(this);
//    on_cmdAddWidget_clicked();
}

InputPlace::~InputPlace()
{
    delete ui;
}

void InputPlace::on_cmdAddWidget_clicked()
{
    InputWidget* inputWidget = new InputWidget(this, &_supportType);
    ui->areaId->addWidget(inputWidget->_lineEditId);
    ui->areaValue->addWidget(inputWidget->_lineEditValue);
    ui->areaType->addWidget(inputWidget->_cmdType);
    ui->areaPush->addWidget(inputWidget->_cmdPush);
}

void InputPlace::on_cmdPushAll_clicked()
{

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
    _lineEditValue = new QLineEdit(this);
    _cmdPush = new QPushButton(this);
    _cmdPush->setText("push");

    _cmdType = new QPushButton(this);
    _cmdType->setText("type");
    connect(_cmdType, &QPushButton::clicked,
            this,    &InputWidget::changeType);
}

void InputWidget::changeType()
{
    changeTextCmdType();
    changeTypeInputLineEdit();
}

void InputWidget::changeTextCmdType()
{
//    auto it = _supportType->find(_cmdType->text());
//    if ( it == _supportType->end() || ++it == _supportType->end() )
//         _cmdType->setText(*_supportType->begin());
//    _cmdType->setText(*it);
}

void InputWidget::changeTypeInputLineEdit()
{
    QString type = _cmdType->text();
    if ( type == "int" )
    {

    }
}

//------------------------------END--------------------------------------------
