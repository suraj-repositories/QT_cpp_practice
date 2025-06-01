#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "aboutdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionCopy_triggered();

    void on_actionSave_As_triggered();

    void on_actionSave_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionAbout_triggered();

    void on_actionFont_triggered();

    void on_actionText_Color_triggered();

    void on_actionText_Background_triggered();

    void on_actionEditor_Background_triggered();

    void on_actionPrint_triggered();

private:
    Ui::MainWindow *ui;

    QString file_path;

    AboutDialog *aboutDialog;
};
#endif // MAINWINDOW_H
