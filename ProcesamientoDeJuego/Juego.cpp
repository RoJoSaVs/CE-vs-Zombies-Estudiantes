#include "Juego.h"
#include <cstdlib>
#include <iostream>


using namespace std;

void Juego::Iniciar() {
    Juego::Oleada();
}


void Juego::Oleada() {
    oleada = new ListObjetosJuego();
    for (int i = 1; i <= 10; i++) {
        oleada->set_new(0,0,Juego::RandomEnemy());
    }
    oleada->showList();
    cout<<Ogro<<" "<<Elfo<<" "<<Harpia<<" "<<Mercenario<<endl;
}


void Juego::Reproduccion(){
    ListObjetosJuego* the_best = Juego::Seleccion();
    ListObjetosJuego* population = Juego::Seleccion_secundaria();
    delete(oleada);
    Enemigo* best = the_best->get_head();
    Enemigo* slave = population->get_head();
    while(best != nullptr){
        while(slave != nullptr){
            int velx = best->getVelX() + ((slave->getVelX())/20);
            int Salud = best->getSalud() + ((slave->getSalud()/10));
            oleada->set_new(velx, velx, Juego::RandomEnemy());
        }
    }
    Juego::Mutacion();
    delete(the_best);
    delete(population);
}


ListObjetosJuego* Juego::Seleccion() {
    ListObjetosJuego* the_best = new ListObjetosJuego();
    Enemigo* first = Juego::get_bestEnemy();
    the_best->set_bestEnemy(first);
    oleada->deleteEnemy(first);
    Enemigo* second = Juego::get_bestEnemy();
    the_best->set_bestEnemy(second);
    oleada->deleteEnemy(second);
    return the_best;

}


ListObjetosJuego* Juego::Seleccion_secundaria() {
        ListObjetosJuego* secondary = new ListObjetosJuego();
        Enemigo* first;
        for(int i =1; i<=5; i++){
            first = Juego::get_bestEnemy();
            secondary->set_bestEnemy(first);
            oleada->deleteEnemy(first);
        }
        return secondary;
}
void Juego::Mutacion() {
    int probabilidad = 0;
    Enemigo* current = oleada->get_head();
    while(current != nullptr){
        probabilidad = rand() % 100;
        if (probabilidad < 5){
            current->setSalud(current->getSalud()*1.2);
            current->setVelX(current->getVelX()*1.3);
        }
    }
}

Enemigo* Juego::get_bestEnemy(){
    Enemigo* first;
    Enemigo* current = oleada->get_head();
    int values = 0;
    int bestCondition = 0;
    while(current->get_next() != nullptr){
        values = current->getVelX() + current->getSalud();
        if (bestCondition < values){
            first = current;
            bestCondition = values;
        }
        else{
            current = current->get_next();
        }
    }
    return first;
}


    ID Juego::RandomEnemy() {
        int random = rand() % 4;
         switch(random) {
             case(0): return Mercenario;
             case(1): return Elfo;
             case(2): return Harpia;
             case(3): return Ogro;
         }
    }

