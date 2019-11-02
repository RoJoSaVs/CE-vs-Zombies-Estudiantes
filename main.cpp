#include <QtGui>
#include <QtWidgets/QApplication>
#include "GUI/Window.h"
#include "/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/ProcesamientoDeJuego/Juego.h"
#include "Algoritmos/Algoritmo_aStar.h"
//#include "/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/Algoritmos/Backtracking.cpp"
//#include "/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/Algoritmos/Algoritmos.h"


#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    Algoritmo_aStar* path = new Algoritmo_aStar();
//    path->aStarSearch()
//    Juego *game = new Juego();
//    game->Iniciar();
    //test();
    int Tablero[10][10]=
            {    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
                 { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
                 { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
             };
    // Source is the left-most bottom-most corner
    Pair src = make_pair(9, 0);

    // Destination is the left-most top-most corner
    Pair dest = make_pair(0, 9);
    path->aStarSearch(Tablero, src, dest);


    // Destination is the left-most top-most corner
//    Pair dest = make_pair(0, 9);

//    aStarSearch(Tablero, src, dest);

    QApplication app(argc, argv);
    Window mainWindow;
    mainWindow.setFixedSize(897, 650);
    mainWindow.setStyleSheet("background-image: url(/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowBackground.png)");
    mainWindow.show();
    return app.exec();
}