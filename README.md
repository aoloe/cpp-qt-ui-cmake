# Cpp, Qt, Designer (.ui) and cmake

Minimal UI application with Qt, Designer (.ui) and cmake

- Create a main window `.ui` file with designer.
  - Start the Qt Designer
  - With "File > New" dialog create a new "Main Window".
- Creatae the source code files:
  - `main.cpp`
  - `sampleapp.h` and `sampleapp.cpp`
  - `mainwindow.h` and `mainwindow.cpp`

- Add menu entries.
- Add a toolbar with icons
  - Add resources
- high definition screen...
- how to attach standard actions to actions defined in the designer's actions editor?
 
## Tutorial

### Requirements

On Ubuntu / Debian Linux you need

- `build-essential`
- `cmake` (>= 3.2),
- `qtbase5-dev`
- `qttools5-dev`
- `qttools5-dev-tools`

### Setup the project

Create a `src` directory.

Create an _empty_ `main.cpp` in the `src` directory:

```cpp
int main()
{
}
```

Create a simple `CMakeLists.txt` file in the project's main directory:

```CMake
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(sample-app)

SET(CMAKE_CXX_STANDARD 14)

ADD_EXECUTABLE(sample-app
    src/main.cpp
)
```

Create a `build` directory in your projejct directory.

Open a terminal, `cd` into the build directory, and run:

```sh
$ cmake ..
$ make
```

This will create the `sample-app` executable.

### Create a Qt Application

Edit `main.cpp` so that it creates a `QApplication`:

```cpp
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    return app.exec();
}
```

Add to `CMakeLists.txt` the commands for working with the Qt framework. At the end it should look like this:

```CMake
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(sample-app)

SET(CMAKE_CXX_STANDARD 14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)

set(CMAKE_AUTOUIC ON)

ADD_EXECUTABLE(sample-app
    src/main.cpp
)

target_link_libraries(sample-app
    Qt5::Widgets
)
```

Now, when you run your `./sample-app`, the program will not automatically quit, but will wait for being quit. You can quit it by pressing `ctrl-c`.

### Create a window




### Create _your_ application

Generally, speaking it's not a good practice to put too much logic in the `main.cpp` or in the `MainWindow`.

Create a _void_ application in the `src/sampleapp.h` and `src/sampleapp.cpp` files:

## Notes

- If Qt is installed in a non standard location or the location is not i nthe path run:  
  `cmake -DCMAKE_PREFIX_PATH="/path/to/the/directory/with/the/cmake/files"`

Get inspired from:

- https://doc-snapshots.qt.io/qt5-5.9/gettingstartedqt.html
- http://doc.qt.io/qt-5/qtsensors-sensorgestures-example.html
- http://doc.qt.io/qt-5/designer-creating-mainwindows.html#toolbars
- http://zetcode.com/gui/qt5/menusandtoolbars/
- not so good qt official documentation: http://doc.qt.io/qt-5/cmake-manual.html
- a better cmake official documentation: https://cmake.org/cmake/help/v3.0/manual/cmake-qt.7.html#manual:cmake-qt(7)
