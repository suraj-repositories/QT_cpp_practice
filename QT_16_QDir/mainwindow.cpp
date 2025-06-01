#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDir"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // -------------------------- check dir exists -----------------------------
    // QDir dir("/home/shubham/Desktop");

    // if(dir.exists()){
    //     QMessageBox::information(this, "title", "Exists");
    // }else{
    //     QMessageBox::information(this, "title", "Not Exists");
    // }

    // -------------------------- list dir files ----------------------------------
    QDir dir;

    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItem(var.absolutePath());
    }

    QDir dir_2("/home/shubham/Desktop");

    foreach(QFileInfo var, dir_2.entryInfoList()){
        if(var.isDir())
        ui->listWidget->addItem(var.absoluteFilePath());

        if(var.isFile())
        ui->listWidget->addItem(var.absoluteFilePath());
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("/home/shubham/Desktop/YYY");

    if (dir.exists()) {
        QMessageBox::information(this, "Title", "Directory already exists.");
    } else {
        if (dir.mkpath(".")) {
            QMessageBox::information(this, "Title", "Directory created successfully.");
        } else {
            QMessageBox::critical(this, "Title", "Failed to create directory.");
        }
    }

}

