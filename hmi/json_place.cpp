#include "json_place.h"
#include "ui_json_place.h"

#include "./libs/json.h"

#include <QFile>
#include <QDebug>
#include <iostream>
#include <sstream>
#include "json_custom_widgets.h"

using namespace inputPlace::widgets;

inline void parserJson(QFile& file_json, QVector<StructSlider>& container)
{
    try
    {
        std::stringstream stream ;
        stream << file_json.readAll().toStdString();

        const auto doc = json::Load(stream).GetRoot().AsDict();
        const auto& array = doc.at("objs").AsArray();

        for ( const auto& item : array )
        {
            if ( QString::fromStdString(item.AsDict().at("type_obj").AsString()) == "slider" )
            {
                container.push_back({
                                        QString::fromStdString(item.AsDict().at("label").AsString()),
                                        QString::fromStdString(item.AsDict().at("type_val").AsString()),
                                        item.AsDict().at("id").AsInt(),
                                        item.AsDict().at("min").AsInt(),
                                        item.AsDict().at("max").AsInt()
                                    });
            }
        }
    }
    catch (...)
    {
        container.clear();
    }
}

JsonPlace::JsonPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JsonPlace)
{
    ui->setupUi(this);

    QFile file("data.json");
    if ( !file.open(QIODevice::ReadOnly) )
    {
       return;
    }    

    QVector<StructSlider> widgets;
    parserJson(file, widgets);
    for ( const auto& struct_slider : widgets )
    {
        CustomSlider* slider = new  CustomSlider( struct_slider, this);
        ui->mainVLayout->addWidget(slider);
    }
}

JsonPlace::~JsonPlace()
{
    delete ui;
}
