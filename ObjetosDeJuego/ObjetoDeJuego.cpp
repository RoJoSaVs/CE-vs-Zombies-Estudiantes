
#include "ID.h"
#include "ObjetoDeJuego.h"
#include "../ProcesamientoDeJuego/TextureManager.h"
#include "../ProcesamientoDeJuego/Juego.h"

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

ObjetoDeJuego::ObjetoDeJuego(const char *texturesheet, int x, int y, ID id) {
    this->texture = TextureManager::LoadTexture(texturesheet);
    this->x = x;
    this->y = y;
    this->id = id;
}

void ObjetoDeJuego::actualizar() {
    srcRect.y = 0;
    srcRect.x = 0;
    srcRect.h = 60;
    srcRect.w = 120;

    x++;+y++;

    destRect.w = 120;
    destRect.h = 60;
    destRect.x= x;
    destRect.y = y;

}

void ObjetoDeJuego::Render() {
    SDL_RenderCopy(Juego::renderer, texture, &srcRect, &destRect);

}

