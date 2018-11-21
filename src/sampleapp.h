#ifndef SAMPLEAPP_H
#define SAMPLEAPP_H

#include<QApplication>

class SampleApp : public QApplication
{
    Q_OBJECT
public:
    explicit SampleApp(int &argc, char *argv[]);
};
#endif
