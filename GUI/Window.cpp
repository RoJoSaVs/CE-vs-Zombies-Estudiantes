//
// Created by tomas on 9/10/19.
//

#include "Window.h"

Window::Window(int argc, char *argv[], int width, int length, string title, QString imageURL) {
    this->width = width;
    this->length = length;

    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(width, length);
    window.show();
    window.setWindowTitle(
            QApplication::translate("toplevel", "Top-level widget"));
    window.setStyleSheet("background-image: url(" + imageURL + ")");

    QPushButton startButton = new QPushButton

    QPixmap pixmap("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowButton.png ");
    QIcon ButtonIcon(pixmap);
    startButton.setIcon(ButtonIcon);
    startButton.setGeometry(400, 640, 600,110);

    app.exec();
}
