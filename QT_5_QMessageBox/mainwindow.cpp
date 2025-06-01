#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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
    /*
    void about
    void aboutQt
    StandardButton critical
    StandardButton information
    StandardButton question
    StandardButton warning
    */

    // QMessageBox::about(this, "My title", "Here is a few description");
    // QMessageBox::aboutQt(this, "My title");
    // QMessageBox::critical(this, "Danger", "Danger this system got explode in few seconds");

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Question", "Have you eat pizza today", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }else{
        qDebug() << "No button clicked";
    }

    // QMessageBox::warning(this, "Warning", "Too much heat...");
}

