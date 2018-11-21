#include "src/sampleapp.h"
#include "src/mainwindow.h"

int main(int argc, char *argv[])
{
    SampleApp app(argc, argv);

    MainWindow main_window;
    main_window.show();

    return app.exec();
}

