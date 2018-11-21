#include "sampleapp.h"

SampleApp::SampleApp(int &argc, char *argv[]) :
    QApplication(argc, argv)
{
    setApplicationName("Sample App");
    setApplicationVersion("0.1");
}

