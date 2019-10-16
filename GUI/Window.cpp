#include "gameWindow.h"
#include "Window.h"
#include "../ProcesamientoDeJuego/Juego.h"


Window::Window(QWidget *parent) : QMainWindow(parent) {

    startButton = new QPushButton("", this);
    connect(startButton, SIGNAL (released()), this, SLOT (handleButton()));
    startButton->setGeometry(430, 545, 443,81);
    startButton->setFlat(true);
    startButton->setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowButton.png)");

}

void Window::handleButton(){
//    gameWindow gameWindow;
//    gameWindow.setModal(true);
//    gameWindow.setFixedSize(897, 650);
//    gameWindow.setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/gameWindowBackground.png)");
//    gameWindow.exec();
    this->hide();
    Juego *juego;
    juego = new Juego();
    juego->init("CEvsZombies", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 897, 650, false);
    while (juego->isRunning()){

        juego->handleEventos();
        juego->actualizar();
        juego->render();
    }
    juego->clean();

}