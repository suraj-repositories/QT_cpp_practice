/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QTimeEdit *timeEdit;
    QDateTimeEdit *dateTimeEdit;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_4;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QVBoxLayout *verticalLayout_3;
    QDial *dial_3;
    QDial *dial_2;
    QDial *dial;
    QWidget *page_2;
    QCalendarWidget *calendarWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(400, 300);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName("verticalLayout");
        toolBox = new QToolBox(Form);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 382, 232));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        timeEdit = new QTimeEdit(page);
        timeEdit->setObjectName("timeEdit");

        verticalLayout_2->addWidget(timeEdit);

        dateTimeEdit = new QDateTimeEdit(page);
        dateTimeEdit->setObjectName("dateTimeEdit");

        verticalLayout_2->addWidget(dateTimeEdit);

        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName("dateEdit");

        verticalLayout_2->addWidget(dateEdit);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalSlider = new QSlider(page);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider);

        horizontalSlider_2 = new QSlider(page);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_2);

        horizontalSlider_3 = new QSlider(page);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        dial_3 = new QDial(page);
        dial_3->setObjectName("dial_3");

        verticalLayout_3->addWidget(dial_3);

        dial_2 = new QDial(page);
        dial_2->setObjectName("dial_2");

        verticalLayout_3->addWidget(dial_2);

        dial = new QDial(page);
        dial->setObjectName("dial");

        verticalLayout_3->addWidget(dial);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout);

        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 382, 232));
        calendarWidget = new QCalendarWidget(page_2);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(10, 0, 312, 163));
        buttonBox = new QDialogButtonBox(page_2);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(210, 190, 166, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(Form);

        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(1);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Form", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Form", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
