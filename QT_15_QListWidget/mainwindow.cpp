#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QListWidgetItem *item = new QListWidgetItem(QIcon(":/res/img/orange.png"), "Orange");
    ui->listWidget->addItem(item);

    QListWidgetItem *banana = new QListWidgetItem(QIcon(":/res/img/banana.png"), "Banana");
    ui->listWidget->addItem(banana);

    QListWidgetItem *coconut = new QListWidgetItem(QIcon(":/res/img/coconut.png"), "Coconut");
    ui->listWidget->addItem(coconut);

    QListWidgetItem *melon = new QListWidgetItem(QIcon(":/res/img/watermelon.png"), "Water Melon");
    ui->listWidget->addItem(melon);

    // ui->listWidget->addItem("Banana");
    // ui->listWidget->addItem("Coconut");
    // ui->listWidget->addItem("Grapes");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::information(this, "Title", ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackground(Qt::black);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}

