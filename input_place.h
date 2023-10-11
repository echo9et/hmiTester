#ifndef INPUT_PLACE_H
#define INPUT_PLACE_H

#include <QWidget>

#include <QString>
#include <QSet>

#include "QLineEdit"
#include "QPushButton"
#include "QLabel"

QT_BEGIN_NAMESPACE
namespace Ui {
class InputPlace;
}
QT_END_NAMESPACE

class InputPlace : public QWidget
{
    Q_OBJECT

public:
    explicit InputPlace(QWidget *parent = nullptr);

    ~InputPlace();

private slots:
    void on_cmdAddWidget_clicked();

    void on_cmdPushAll_clicked();

private:
    void changeTypeCmd(QPushButton*);
    void changeTypeCmd(QLineEdit*);
    QSet<QString> _supportType = {"int","double", "string"};
    Ui::InputPlace *ui;
};

class InputWidget : public QWidget
{
    Q_OBJECT

public:

    explicit InputWidget(QWidget* parent, QSet<QString>* supportType);

    QPushButton * _cmdType;
    QPushButton * _cmdPush;
    QLineEdit   * _lineEditId;
    QLineEdit   * _lineEditValue;
public slots:
    void changeType();

private:
    void changeTextCmdType();
    void changeTypeInputLineEdit();
    QSet<QString>* _supportType;
};

#endif // INPUT_PLACE_H
