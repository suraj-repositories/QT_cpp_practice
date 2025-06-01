#include <QApplication>

#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QLabel label("Hello, world!");
    label.setWindowTitle("Window title");
    label.resize(400, 400);

    label.show();
    return app.exec();
}
