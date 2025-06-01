#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("NotePad");
    w.setWindowIcon(QIcon(":/res/img/orange.png"));

    w.show();
    return a.exec();
}
