
#include "ID.h"
#include "ObjetoDeJuego.h"

ObjetoDeJuego::ObjetoDeJuego(int x, int y, ID id){
    this->x = x;
    this->y = y;
    this->id = id;
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

