#ifndef CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H

#include "ID.h"
class ObjetoDeJuego {

protected:
    int x, y;
    ID id;
    int velX, velY;
    int salud;

public:
    ObjetoDeJuego(int x, int y, ID id);

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

class Tower: public ObjetoDeJuego{

};
#endif //CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H
