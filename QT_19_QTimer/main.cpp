#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    /*
        QTimer : It helps to perform your tasks based on time you set
                for example : perform task on timer interval or timeout

        Steps :
        1. include in mainwindow.h file
        2. define in mainwindow.h private section
        3. add public slots to define your function

        4. In mainwindow.cpp override the public slots function or define body
        5. create the timer object in constructor
        6. bind with signale and slot using connect function
        7. start the timer
    */


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
