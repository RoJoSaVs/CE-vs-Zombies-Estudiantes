
#include "ID.h"
#include "ObjetoDeJuego.h"


ObjetoDeJuego::ObjetoDeJuego(int x, int y, ID id){
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

int ObjetoDeJuego::getX() const {
    return x;
}

void ObjetoDeJuego::setX(int x) {
    ObjetoDeJuego::x = x;
}

int ObjetoDeJuego::getY() const {
    return y;
}

void ObjetoDeJuego::setY(int y) {
    ObjetoDeJuego::y = y;
}

const ID &ObjetoDeJuego::getId() const {
    return id;
}

void ObjetoDeJuego::setId(const ID &id) {
    ObjetoDeJuego::id = id;
}

int ObjetoDeJuego::getVelX() const {
    return velX;
}

void ObjetoDeJuego::setVelX(int velX) {
    ObjetoDeJuego::velX = velX;
}

int ObjetoDeJuego::getVelY() const {
    return velY;
}

void ObjetoDeJuego::setVelY(int velY) {
    ObjetoDeJuego::velY = velY;
}

int ObjetoDeJuego::getSalud() const {
    return salud;
}

void ObjetoDeJuego::setSalud(int salud) {
    ObjetoDeJuego::salud = salud;
}



