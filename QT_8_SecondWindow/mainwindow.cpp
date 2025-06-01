#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "seconddialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    SecondDialog secondDialog;
    secondDialog.setModal(true);
    secondDialog.exec();
}


void MainWindow::on_modalLessApproach_clicked()
{
    hide();
    secondDialog = new SecondDialog(this);
    secondDialog->show();
}

