#ifndef CE_VS_ZOMBIES_ESTUDIANTES_JUEGO_H
#define CE_VS_ZOMBIES_ESTUDIANTES_JUEGO_H

#include "SDL2/SDL.h"
#include <stdio.h>
#include <QtWidgets/QPushButton>


class Juego {

public:
    Juego();
    ~Juego();

    void init(const char* title, int x, int y, int width, int height, bool fullscreen);

    void handleEventos();
    void actualizar();
    void render();
    void clean();

    bool isRunning(){return running;};

    static SDL_Renderer *renderer;
    static SDL_Event event;

private:
    int count = 0;
    bool running;
    SDL_Window *window;

};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_JUEGO_H
