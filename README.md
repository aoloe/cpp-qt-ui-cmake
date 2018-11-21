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
