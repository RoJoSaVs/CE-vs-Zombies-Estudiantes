#include "gameWindow.h"
#include "Window.h"

Window::Window(QWidget *parent) : QMainWindow(parent) {

    startButton = new QPushButton("", this);
    connect(startButton, SIGNAL (released()), this, SLOT (handleButton()));
    startButton->setGeometry(430, 545, 443,81);
    startButton->setFlat(true);
    startButton->setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowButton.png)");

}

void Window::handleButton(){
    gameWindow *gameWindow = new gameWindow();
    gameWindow->setFixedSize(897, 650);
    gameWindow->setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/gameWindowBackground.png)");
    gameWindow->show();
}