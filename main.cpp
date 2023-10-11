#include "hmi_tester.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hmi_tester w;
    w.show();
    return a.exec();
}
