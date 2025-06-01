#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDateTime"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myFunction()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunction(){
    QTime time = QTime::currentTime();
    QString timeString = time.toString("hh : mm : ss");

    if((time.second() % 2) == 0){
        timeString[3] = ' ';
        timeString[8] = ' ';
    }

    ui->time_label->setText(timeString);
}
