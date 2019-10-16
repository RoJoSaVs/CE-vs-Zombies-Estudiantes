#include <QtGui>
#include <QtWidgets/QApplication>
#include "GUI/Window.h"
#include "ProcesamientoDeJuego/Juego.h"

Juego *juego = nullptr;

int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    Window mainWindow;
    mainWindow.setFixedSize(897, 650);
    mainWindow.setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowBackground.png)");
    mainWindow.show();

    juego = new Juego();
    juego->init("CEvsZombies", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 897, 650, false);
    while (juego->isRunning()){

        juego->handleEventos();
        juego->actualizar();
        juego->render();

    }

    juego->clean();

    return app.exec();
}