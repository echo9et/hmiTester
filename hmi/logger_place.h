#ifndef LOGGER_PLACE_H
#define LOGGER_PLACE_H

#include <QWidget>

namespace Ui {
class LoggerPlace;
}

class LoggerPlace : public QWidget
{
    Q_OBJECT

public:
    explicit LoggerPlace(QWidget *parent = nullptr);
    ~LoggerPlace();

private:
    Ui::LoggerPlace *ui;
};

#endif // LOGGER_PLACE_H
