/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *topLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *iconLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *appInfoLabel;
    QSpacerItem *horizontalSpacer_3;
    QTextBrowser *descriptionBrowser;
    QPushButton *closeButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(390, 250);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        topLayout = new QHBoxLayout();
        topLayout->setObjectName("topLayout");
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        topLayout->addItem(horizontalSpacer_2);

        iconLabel = new QLabel(AboutDialog);
        iconLabel->setObjectName("iconLabel");
        iconLabel->setMinimumSize(QSize(64, 64));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/res/img/big-orange.png")));
        iconLabel->setScaledContents(true);
        iconLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        topLayout->addWidget(iconLabel);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        topLayout->addItem(horizontalSpacer);

        appInfoLabel = new QLabel(AboutDialog);
        appInfoLabel->setObjectName("appInfoLabel");
        appInfoLabel->setTextFormat(Qt::TextFormat::RichText);

        topLayout->addWidget(appInfoLabel);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        topLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(topLayout);

        descriptionBrowser = new QTextBrowser(AboutDialog);
        descriptionBrowser->setObjectName("descriptionBrowser");
        descriptionBrowser->setReadOnly(true);
        descriptionBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Inter'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This application does Text Editing. It's built using Qt and designed for ease of use and efficiency.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For more information, visit <a href=\"https://oranbyte.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">oranbyte.com</span></a>. </p></body></html>"));

        verticalLayout->addWidget(descriptionBrowser);

        closeButton = new QPushButton(AboutDialog);
        closeButton->setObjectName("closeButton");
        closeButton->setAutoDefault(false);

        verticalLayout->addWidget(closeButton, 0, Qt::AlignmentFlag::AlignRight);


        retranslateUi(AboutDialog);
        QObject::connect(closeButton, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::accept));

        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About This Application", nullptr));
        appInfoLabel->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700;\">NotePad</span></h2><p>Version 1.0.0</p><p>\302\251 2025 Oranbyte</p><p>Author: ProjectsAndPrograms</p></body></html>", nullptr));
        closeButton->setText(QCoreApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
