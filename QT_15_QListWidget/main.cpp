#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    /*
        QList Item : it is just like list, you can create list by using item names or icon also
    */

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
