/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionsomet;
    QAction *actionslsdkfj;
    QAction *actionskdfj;
    QAction *actiondj;
    QAction *actionafter_seperator;
    QAction *actionnew_thing;
    QAction *actionnew_one;
    QAction *actionanother_new;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuQT1;
    QMenu *menuanother;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::WindowModal);
        MainWindow->resize(1011, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Downloads/F-7561738669750058_x_gpk_logo(5).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionsomet = new QAction(MainWindow);
        actionsomet->setObjectName("actionsomet");
        actionslsdkfj = new QAction(MainWindow);
        actionslsdkfj->setObjectName("actionslsdkfj");
        actionskdfj = new QAction(MainWindow);
        actionskdfj->setObjectName("actionskdfj");
        actiondj = new QAction(MainWindow);
        actiondj->setObjectName("actiondj");
        actionafter_seperator = new QAction(MainWindow);
        actionafter_seperator->setObjectName("actionafter_seperator");
        actionnew_thing = new QAction(MainWindow);
        actionnew_thing->setObjectName("actionnew_thing");
        actionnew_one = new QAction(MainWindow);
        actionnew_one->setObjectName("actionnew_one");
        actionanother_new = new QAction(MainWindow);
        actionanother_new->setObjectName("actionanother_new");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 90, 161, 71));
        pushButton->setAutoFillBackground(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Downloads/default_user.webp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(80, 80));
        pushButton->setCheckable(false);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(160, 260, 88, 22));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(430, 310, 241, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1011, 21));
        menuQT1 = new QMenu(menubar);
        menuQT1->setObjectName("menuQT1");
        menuanother = new QMenu(menuQT1);
        menuanother->setObjectName("menuanother");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuQT1->menuAction());
        menuQT1->addAction(actionsomet);
        menuQT1->addAction(menuanother->menuAction());
        menuQT1->addAction(actionslsdkfj);
        menuQT1->addAction(actionskdfj);
        menuQT1->addAction(actiondj);
        menuQT1->addSeparator();
        menuQT1->addAction(actionafter_seperator);
        menuanother->addAction(actionnew_thing);
        menuanother->addAction(actionnew_one);
        menuanother->addAction(actionanother_new);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionsomet->setText(QCoreApplication::translate("MainWindow", "somet", nullptr));
        actionslsdkfj->setText(QCoreApplication::translate("MainWindow", "slsdkfj", nullptr));
        actionskdfj->setText(QCoreApplication::translate("MainWindow", "skdfj", nullptr));
        actiondj->setText(QCoreApplication::translate("MainWindow", "dj", nullptr));
        actionafter_seperator->setText(QCoreApplication::translate("MainWindow", "after seperator", nullptr));
        actionnew_thing->setText(QCoreApplication::translate("MainWindow", "new thing", nullptr));
        actionnew_one->setText(QCoreApplication::translate("MainWindow", "new one", nullptr));
        actionanother_new->setText(QCoreApplication::translate("MainWindow", "another new", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Something else", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menuQT1->setTitle(QCoreApplication::translate("MainWindow", "QT1", nullptr));
        menuanother->setTitle(QCoreApplication::translate("MainWindow", "another", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
