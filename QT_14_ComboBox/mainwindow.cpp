#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem(QIcon(":/res/img/orange.png"), "Orange");
    ui->comboBox->addItem(QIcon(":/res/img/mango.png"), "Mango");
    ui->comboBox->addItem(QIcon(":/res/img/grapes.png"), "Grapes");
    ui->comboBox->addItem(QIcon(":/res/img/banana.png"), "Banana");
    ui->comboBox->addItem(QIcon(":/res/img/coconut.png"), "Coconut");

    ui->comboBox->insertItem(1, QIcon(":/res/img/watermelon.png"), "WaterMelon");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;

    QPixmap pixmap(":/res/img/"+ ui->comboBox->currentText().toLower() +".png");
    msgBox.setIconPixmap(pixmap);

    msgBox.setWindowTitle("Selected Item");
    msgBox.setText(ui->comboBox->currentText());
    msgBox.exec();

}

