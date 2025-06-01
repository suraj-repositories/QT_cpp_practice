#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFileDialog"
#include "QMessageBox"
#include "QDir"

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
    // QString filter = "All File (*.*) ;; Text File (*.txt) ;; Png File (*.png)";
    // QString filter = "Text File (*.txt) ;; Png File (*.png)";
    QString filter = "Pdf File (*.pdf) ;; Zip File (*.zip)";

    QString file_name = QFileDialog::getOpenFileName(this, "My Title Here", QDir::homePath(), filter);
    QMessageBox::information(this, "....", file_name);


}

