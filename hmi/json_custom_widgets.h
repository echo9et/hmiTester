#ifndef INPUT_PLACE_CUSTOM_WIDGETS_H
#define INPUT_PLACE_CUSTOM_WIDGETS_H

#include <QWidget>

namespace Ui {
class json_custom_widgets;
}

namespace inputPlace::widgets {


struct StructSlider
{
    QString label;
    QString type_val;
    int id = 0;
    int min = 0;
    int max = 0;

};

class CustomSlider : public QWidget
{
    Q_OBJECT

public:
    explicit CustomSlider( StructSlider structSlider, QWidget *parent = nullptr );
    ~CustomSlider();

private:
    Ui::json_custom_widgets *ui;
};



}

#endif // INPUT_PLACE_CUSTOM_WIDGETS_H
