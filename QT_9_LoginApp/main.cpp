#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    /*
    Status bar : availabel on the bottom of each application used to show metadata

    password : to create input type password : you need to chanage echo mode to password available on properties of line text on ui editorE
    */

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
