#ifndef CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H


class ObjetoDeJuego {

protected:
    int x, y;
    ID id;
    int velX, velY;
    int salud;

public:
    ObjetoDeJuego(int x, int y, ID id);

    virtual void thick() = 0;
    virtual void render(Graphics graphics) = 0;
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_OBJETODEJUEGO_H
