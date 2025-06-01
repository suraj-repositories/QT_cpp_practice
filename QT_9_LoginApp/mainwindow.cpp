#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QPixmap"
#include "QDebug"
#include "QFile"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ------ ADD IMAGE LOGIC -------
    // QPixmap pix("/home/shubham/Downloads/logo.png");
    QPixmap pix(":/resource/img/logo.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio, Qt::SmoothTransformation));

    // QStatus bar edit's
    ui->statusbar->addPermanentWidget(ui->label_3);
    ui->statusbar->addPermanentWidget(ui->progressBar);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    // LOGIN LOGIC
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test"){
        // QMessageBox::information(this, "Login Successful", "Username and password is correct");
        hide();
        secondDialog = new SecondDialog(this);
        secondDialog->show();



    }else{
        // QMessageBox::warning(this, "Login Failed", "Wrong credentials!");
        ui->statusbar->showMessage("Wrong Credentials" , 3000);
    }

}

