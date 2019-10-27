#ifndef CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H


#include <SDL_system.h>
#include "../ObjetosDeJuego/ID.h"

class ObjetoDeJuego {

protected:
    int x, y;
    ID id;
    int velX, velY;
    int salud;

    SDL_Texture* texture;
    SDL_Rect srcRect, destRect;


public:
    ObjetoDeJuego(const char* texturesheet, int x, int y, ID id);
    ~ObjetoDeJuego();

//    virtual void thick() = 0;
//    //virtual void render(Graphics graphics) = 0;

    void actualizar();
    void Render();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    const ID &getId() const;

    void setId(const ID &id);

    int getVelX() const;

    void setVelX(int velX);

    int getVelY() const;

    void setVelY(int velY);

    int getSalud() const;

    void setSalud(int salud);
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H
