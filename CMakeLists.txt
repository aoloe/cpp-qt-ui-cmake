cmake_minimum_required(VERSION 3.2)

project(sample-app)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets)

add_executable(sample-app
    src/main.cpp
    src/sampleapp.cpp
    src/mainwindow.cpp
)

target_link_libraries(sample-app
    Qt5::Widgets
)
