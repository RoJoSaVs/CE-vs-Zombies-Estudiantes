#include "main.h"
#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "GUI/Window.h"


int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    Window mainWindow;
    mainWindow.setFixedSize(897, 650);
    mainWindow.setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowBackground.png)");
    mainWindow.show();
    return app.exec();
}