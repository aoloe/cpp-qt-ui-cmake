CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(sample-app)

SET(CMAKE_CXX_STANDARD 14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)

set(CMAKE_AUTOUIC ON)

ADD_EXECUTABLE(sample-app
    src/main.cpp
    src/sampleapp.cpp
    src/mainwindow.cpp
)

target_link_libraries(sample-app
    Qt5::Widgets
)

