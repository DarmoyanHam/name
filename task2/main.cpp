#include "mainwindow.h"
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    NamePopup mainWidget;
    mainWidget.resize(350, 100);
    mainWidget.setWindowTitle("Name Popup App");
    mainWidget.show();

    return app.exec();
}

