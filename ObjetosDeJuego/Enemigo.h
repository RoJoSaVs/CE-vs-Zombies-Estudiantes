#ifndef CE_VS_ZOMBIES_ESTUDIANTES_ENEMIGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_ENEMIGO_H

#include "ID.h"

class Enemigo {
private:
    int x, y;
    ID id;
    int velX, velY;
    int salud;
    Enemigo* next = nullptr;
public:


    Enemigo(int x, int y, ID id);

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

    Enemigo* get_next();

    void set_next(Enemigo* current);
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_ENEMIGO_H
