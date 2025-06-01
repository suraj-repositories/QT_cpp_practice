#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Some title");

    w.setFont(QFont("Comic Sans MS", 10, QFont::Normal, false));

    w.setStyleSheet("QMainWindow {"
                    "background-image: url(\"/home/shubham/Documents/Qt_workspace/QT_1/images/background.png\");"
                    "background-repeat: no-repeat;"
                    "background-position: center;"
                    "background-attachment: fixed;"
                    "background-size: cover;"
                    "}");


    w.show();
    return a.exec();
}
