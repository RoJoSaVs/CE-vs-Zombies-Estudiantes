#include <iostream>
#include "Juego.h"
#include "SDL_image.h"
#include "TextureManager.h"

SDL_Texture* playerTex;
SDL_Rect srcRec;
SDL_Rect destRect;


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
        renderer = SDL_CreateRenderer(window, -1, 0);
//        if(window){
//            std::cout << "Ventana creada." << std::endl;
//        }
        if (renderer){
            SDL_SetRenderDrawColor(renderer, 255,255,255,255);
            std::cout << "Renderer creado." << std::endl;
        }
        running = true;
    } else {
        running = false;
    }
    playerTex = TextureManager::LoadTexture("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/gameWindowWavesButton.png", renderer);

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

void Juego::actualizar() {
    destRect.h = 80;
    destRect.w = 80;
    destRect.x++;
}

void Juego::render() {
    SDL_RenderClear(renderer);
    //Aqui agregamos cosas para renderizar
    SDL_RenderCopy(renderer, playerTex, NULL, &destRect);

    SDL_RenderPresent(renderer);
}

void Juego::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Juego borrado" << std::endl;
}


