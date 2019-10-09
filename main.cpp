#include "main.h"
#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "GUI/Window.h"


int main(int argc, char *argv[]){

    Window *mainWindow = new Window(argc, argv, 1100, 800, "TEC vs ZOMBIES", "/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowBackground.png");
}