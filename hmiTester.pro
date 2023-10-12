QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    hmi/json_custom_widgets.cpp \
    hmi/json_place.cpp \
    libs/json.cpp \
    hmi/logger_place.cpp \
    hmi/hmi_tester.cpp \
    hmi/input_place.cpp \
    main.cpp


HEADERS += \
    hmi/hmi_tester.h \
    hmi/input_place.h \
    hmi/json_custom_widgets.h \
    hmi/json_data.h \
    hmi/json_place.h \
    hmi/logger_place.h \
    libs/json.h \

FORMS += \
    hmi/hmi_tester.ui \
    hmi/input_place.ui \
    hmi/logger_place.ui \
    hmi/ui_json_place/json_custom_widgets.ui \
    hmi/json_place.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
