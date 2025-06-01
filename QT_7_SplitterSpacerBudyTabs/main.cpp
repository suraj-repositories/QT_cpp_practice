#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    /*
        Splitters : Just like jsplitpane in java, uses to create splitted area. Commonly used to create sidebars, on bottom console bars

        Spacers : A spacer gives extra null space to your component, Vertically | Horizontally

        Buddy : A buddy is a label and input kind of thing
                If you make components budy they behave like one, like you click on label and input on focus

        Tabs : You can change the tab order,
               When you press tab on your software where does the focus shift
               You can manage the order

    */

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
