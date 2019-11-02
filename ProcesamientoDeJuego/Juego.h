#ifndef CE_VS_ZOMBIES_ESTUDIANTES_JUEGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_JUEGO_H

#include "/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/ObjetosDeJuego/ObjetoDeJuego.h"
#include "/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/ObjetosDeJuego/ID.h"
#include "/home/ronny/CLionProjects/CE-vs-Zombies-Estudiantes/ObjetosDeJuego/ListObjetosJuego.h"


class Juego {
public:
    void Iniciar();

private:

    ListObjetosJuego* oleada;
    void Oleada();
    void Mutacion();
    void Reproduccion();
    ID RandomEnemy();
    ListObjetosJuego* Seleccion();
    ListObjetosJuego* Seleccion_secundaria();
    Enemigo* get_bestEnemy();
};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_JUEGO_H
