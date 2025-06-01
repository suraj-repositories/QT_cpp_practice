#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "QIcon"
#include <QDesktopServices>
#include <QUrl>

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("About NotePad");
    this->setWindowIcon(QIcon(":/res/img/about.png"));

    ui->descriptionBrowser->setOpenExternalLinks(false);
    connect(ui->descriptionBrowser, &QTextBrowser::anchorClicked, this, [](const QUrl &url) {
        QDesktopServices::openUrl(url);
    });


}

AboutDialog::~AboutDialog()
{
    delete ui;
}
