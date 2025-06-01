#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "QDir"
#include "QMessageBox"
#include "aboutdialog.h"
#include "QFont"
#include "QFontDialog"
#include "QColor"
#include "QColorDialog"
#include "QPrinter"
#include "QPrintDialog"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    file_path = "";
    ui->textEdit->setText("");
}


void MainWindow::on_actionOpen_triggered()
{

    QString file_name = QFileDialog::getOpenFileName(this, "Open The File", QDir::homePath());
    QFile file(file_name);

    file_path = file_name;

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();

}


void MainWindow::on_actionSave_triggered()
{

    QFile file(file_path);

    if(file_path == ""){
        on_actionSave_As_triggered();
        return;
    }

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning..", "File not saved..");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}


void MainWindow::on_actionSave_As_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Save The File", QDir::homePath());
    QFile file(file_name);

    file_path = file_name;

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning..", "File Not Saved..");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionAbout_triggered()
{
    aboutDialog = new AboutDialog(this);
    aboutDialog->show();
}


void MainWindow::on_actionFont_triggered()
{
    // boolean reference variable which value will be changed if font got selected
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);

    if(!ok){
        return;
    }
    ui->textEdit->setFont(font);

}


void MainWindow::on_actionText_Color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose Color");

    if(color.isValid()){
        ui->textEdit->setTextColor(color);
    }

}


void MainWindow::on_actionText_Background_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose Color");

    if(color.isValid()){
        ui->textEdit->setTextBackgroundColor(color);
    }
}


void MainWindow::on_actionEditor_Background_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose Color");

    if (color.isValid()) {
        QPalette palette = ui->textEdit->palette();
        palette.setColor(QPalette::Base, color);
        ui->textEdit->setPalette(palette);
    }
}


void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    if(dialog.exec() == QDialog::Rejected){
        return;
    }

    ui->textEdit->print(&printer);

}

