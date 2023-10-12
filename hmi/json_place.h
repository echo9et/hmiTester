#ifndef JSON_PLACE_H
#define JSON_PLACE_H

#include <QWidget>
#include <QJsonDocument>

namespace Ui {
class JsonPlace;
}

const QString PATH_JSON = ".json";

class JsonPlace : public QWidget
{
    Q_OBJECT

public:
    explicit JsonPlace(QWidget *parent = nullptr);
    ~JsonPlace();

private:
    Ui::JsonPlace *ui;
};

#endif // JSON_PLACE_H
