#include <iostream>
#include "Juego.h"

Juego::Juego() {

}

Juego::~Juego() {

}

void Juego::init(const char *title, int x, int y, int width, int height, bool fullscreen) {
    int flags = 0;
    if (fullscreen){
        flags = SDL_WINDOW_FULLSCREEN;
    } if (SDL_Init(SDL_INIT_EVERYTHING) == 0){
        std::cout << "Subsistema inicializados..." << std::endl;

        window = SDL_CreateWindow(title, x, y, width, height, flags);
        if(window){
            std::cout << "Ventana creada." << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer){
            SDL_SetRenderDrawColor(renderer, 255,255,255,255);
            std::cout << "Renderer creado." << std::endl;
        }
        running = true;
    } else {
        running = false;
    }
}

void Juego::handleEventos() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type){
        case SDL_QUIT:
            running = false;
            break;
        default:
            break;
    }
}

void Juego::render() {
    SDL_RenderClear(renderer);
    //Aqui agregamos cosas para renderizar
    SDL_RenderPresent(renderer);
}

void Juego::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Juego borrado" << std::endl;
}

void Juego::actualizar() {
    count++;
    std::cout << count << std::endl;
}
