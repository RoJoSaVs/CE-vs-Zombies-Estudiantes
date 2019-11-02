#include "ListObjetosJuego.h"



Enemigo* ListObjetosJuego::get_head() {
    return this->head;
}



void ListObjetosJuego::set_head(Enemigo* head) {
    this->head = head;
}



void ListObjetosJuego::set_new(int x, int y, ID id) {
    Enemigo* new_Enemy = new Enemigo(x, y, id);
    if (this->head == nullptr){
        this->set_head(new_Enemy);
    }
    else{
        new_Enemy->set_next(this->get_head());
        this->set_head(new_Enemy);
    }
}

void ListObjetosJuego::deleteEnemy(Enemigo *enemigo) {
    Enemigo* current = this->get_head();
    while(current->get_next() != nullptr){
        if (current->get_next() == enemigo){
            current->set_next(enemigo->get_next());
            delete(enemigo);
        }
        else{
            current = current->get_next();
        }
    }
}

//Enemigo* ListObjetosJuego::get_Enemy(Enemigo* buscado) {
//    Enemigo* current = this->get_head();
//    while(current != buscado){
//        if (current->get_next() == nullptr){
//            return nullptr;
//        }
//        current = current->get_next();
//    }
//    return current;
//}


void ListObjetosJuego::showList() {
    Enemigo *current = this->get_head();
    while (current->get_next() != nullptr) {
        cout<<current->getId()<<" "<<current->getX()<<" "<<current->getY()<<" "<<current->getSalud()<<" "<<current->getVelX()<<endl;
        current = current->get_next();
    }
}

void ListObjetosJuego::set_bestEnemy(Enemigo *enemigo) {
    if (this->head == nullptr){
        this->set_head(enemigo);
    }
    else{
        enemigo->set_next(this->get_head());
        this->set_head(enemigo);
    }
}