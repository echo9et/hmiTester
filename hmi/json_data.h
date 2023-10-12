#ifndef JSON_DATA_H
#define JSON_DATA_H

#include "./libs/json.hpp"

using json = nlohmann::json;

static const json j2 =
{
    {"Speedometr", {{"type_obj", "arc"}, {"type_val", "int"}, {"min", 0}, {"max", 160}, {"id", 1}}},
    {"Tachometer", {{"type_obj", "arc"}, {"type_val", "int"}, {"min", 0}, {"max", 120}, {"id", 3}}},

    {"Losses bar cleaning", {{"type_obj", "slider"}, {"type_val", "int"}, {"min", 0}, {"max", 100}, {"id", 5}}},
    {"Losses bar final", {{"type_obj", "slider"}, {"type_val", "int"}, {"min", 0}, {"max", 100}, {"id", 8}}},
    {"Losses bar straw", {{"type_obj", "slider"}, {"type_val", "int"}, {"min", 0}, {"max", 100}, {"id", 11}}},

    {"Losses bar cleaning (mode)", {{"type_obj", "switch"}, {"type_val", "int"}, {"id", 7}}},
    {"Losses bar final (mode)", {{"type_obj", "switch"}, {"type_val", "int"}, {"id", 10}}},
    {"Losses bar straw (mode)", {{"type_obj", "switch"}, {"type_val", "int"}, {"id", 13}}},

    {"Theme", {{"type_obj", "switch"}, {"type_val", "double"}, {"id", 100}}}
};


#endif // JSON_DATA_H
