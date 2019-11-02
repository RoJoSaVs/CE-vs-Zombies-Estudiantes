#ifndef CE_VS_ZOMBIES_ESTUDIANTES_LISTOBJETOSJUEGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_LISTOBJETOSJUEGO_H

#include "Enemigo.h"
#include <iostream>

using namespace std;

class ListObjetosJuego {
private:
    Enemigo* head;

public:
    Enemigo* get_head();

    void set_head(Enemigo* head);

    void set_bestEnemy(Enemigo* enemigo);

    void set_new(int x, int y, ID id);

    Enemigo* get_Enemy(Enemigo* buscado);

    void showList();

    void deleteEnemy(Enemigo* enemigo);
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_LISTOBJETOSJUEGO_H
