#include "input_place.h"
#include "ui_input_place.h"

#include <QIntValidator>
#include <QDoubleValidator>
#include <QValidator>

#include <QDebug>

class SingletonQIntValidator
{
    SingletonQIntValidator()
    {
        qDebug() << "constructor SingletonQIntValidator";
        QLocale local(QLocale::C);
        local.setNumberOptions(QLocale::RejectGroupSeparator);

        _validator = new QIntValidator();
        _validator->setLocale(local);
    }
    ~SingletonQIntValidator()
    {
        delete _validator;
    }

    static SingletonQIntValidator* _instance;
    QIntValidator* _validator;

protected:

public:
    static SingletonQIntValidator* getInstance()
    {
        if ( _instance == nullptr )
            _instance = new SingletonQIntValidator();
        return _instance;
    }
    QIntValidator* getValidator()
    {
        return _validator;
    }
};
SingletonQIntValidator* SingletonQIntValidator::_instance = nullptr;

class SingletonQDoubleValidator : public QDoubleValidator
{
    SingletonQDoubleValidator()
    {
        qDebug() << "constructor SingletonQDoubleValidator";
        QLocale local(QLocale::C);
        local.setNumberOptions(QLocale::RejectGroupSeparator);

        _validator = new QDoubleValidator();
        _validator->setNotation(QDoubleValidator::StandardNotation);
        _validator->setLocale(local);
    }
    ~SingletonQDoubleValidator()
    {
        delete _validator;
    }

    static SingletonQDoubleValidator* _instance;
    QDoubleValidator* _validator;
public:
    static SingletonQDoubleValidator* getInstance()
    {
        if ( _instance == nullptr )
            _instance = new SingletonQDoubleValidator();
        return _instance;
    }
    QDoubleValidator* getValidator()
    {
        return _validator;
    }
};
SingletonQDoubleValidator* SingletonQDoubleValidator::_instance = nullptr;


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
    _lineEditId->setValidator( SingletonQIntValidator::getInstance()->getValidator() );

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
        _lineEditValue->setValidator( SingletonQIntValidator::getInstance()->getValidator() );
    }
    else if ( type == "double" )
    {
        _lineEditValue->setValidator( SingletonQDoubleValidator::getInstance()->getValidator() );
    }
    else
    {
        _lineEditValue->setValidator( nullptr );
    }
}

//------------------------------END--------------------------------------------
