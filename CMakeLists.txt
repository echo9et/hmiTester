cmake_minimum_required(VERSION 3.5)

project(hmiTester LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(hmiTester
                main.cpp
                hmi/hmi_tester.cpp hmi/hmi_tester.h hmi/hmi_tester.ui
                hmi/input_place.cpp hmi/input_place.h hmi/input_place.ui
                hmi/json_place.cpp hmi/json_place.h hmi/json_place.ui 
                hmi/json_custom_widgets.cpp hmi/json_custom_widgets.h hmi/ui_json_place/json_custom_widgets.ui
                hmi/logger_place.cpp hmi/logger_place.h hmi/logger_place.ui  
                libs/json.cpp libs/json.h              
               )

target_link_libraries(hmiTester PRIVATE Qt5::Widgets)
