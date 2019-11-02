#include "Enemigo.h"

Enemigo::Enemigo(int x, int y, ID id){
    this->x = x;
    this->y = y;
    this->id = id;
    switch(id){
        case(Ogro):{
            this->setSalud(40);
            this->setVelX(10);
            this->setVelY(10);
            break;}
        case(Harpia):{
            this->setSalud(60);
            this->setVelX(20);
            this->setVelY(20);
            break;}
        case(Mercenario): {
            this->setSalud(110);
            this->setVelX(30);
            this->setVelY(30);
            break;}
        case(Elfo):{
            this->setSalud(80);
            this->setVelX(20);
            this->setVelY(20);
            break;
        }
    }
}

int Enemigo::getX() const {
    return x;
}

void Enemigo::setX(int x) {
    Enemigo::x = x;
}

int Enemigo::getY() const {
    return y;
}

void Enemigo::setY(int y) {
    Enemigo::y = y;
}

const ID &Enemigo::getId() const {
    return id;
}

void Enemigo::setId(const ID &id) {
    Enemigo::id = id;
}

int Enemigo::getVelX() const {
    return velX;
}

void Enemigo::setVelX(int velX) {
    Enemigo::velX = velX;
}

int Enemigo::getVelY() const {
    return velY;
}

void Enemigo::setVelY(int velY) {
    Enemigo::velY = velY;
}

int Enemigo::getSalud() const {
    return salud;
}

void Enemigo::setSalud(int salud) {
    Enemigo::salud = salud;
}

void Enemigo::set_next(Enemigo* current) {
    this->next = current;
}

Enemigo* Enemigo::get_next(){
    return this->next;
}
