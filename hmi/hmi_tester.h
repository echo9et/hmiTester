#ifndef HMI_TESTER_H
#define HMI_TESTER_H

#include <QWidget>

#include "input_place.h"
#include "json_place.h"
#include "logger_place.h"

QT_BEGIN_NAMESPACE
namespace Ui { class hmi_tester; }
QT_END_NAMESPACE

class hmi_tester : public QWidget
{
    Q_OBJECT

public:
    hmi_tester(QWidget *parent = nullptr);
    ~hmi_tester();

private:
    InputPlace* _inputPlace;
    JsonPlace* _jsonPlace;
    LoggerPlace* _loggerPlace;

    Ui::hmi_tester *ui;
};
#endif // HMI_TESTER_H
