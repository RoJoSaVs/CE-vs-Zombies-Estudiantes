#include <iostream>
#include "Juego.h"
#include "SDL_image.h"
#include "TextureManager.h"
#include "../ObjetosDeJuego/ID.h"
#include "Board.h"
#include "../ObjetosDeJuego/ECS/Components.h"
#include "../ObjetosDeJuego/ObjetoDeJuego.h"
#include "../ObjetosDeJuego/ECS/SpriteComponent.h"

SDL_Renderer* Juego::renderer = nullptr;
SDL_Event Juego::event;

Board* map;
Manager manager;
auto& jugador(manager.addEntity());


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
    map = new Board();

    //Entity Component System implementation

    jugador.addComponent<TransformComponent>();
    jugador.addComponent<SpriteComponent>("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/mainWindowButton.png");
    jugador.addComponent<KeyBoardController>();

}

void Juego::handleEventos() {

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
    manager.refresh();
    manager.actualizar();
}

void Juego::render() {
    SDL_RenderClear(renderer);
    //Aqui agregamos cosas para renderizar
    map->DrawBoard();
    manager.draw();
    SDL_RenderPresent(renderer);
}

void Juego::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Juego borrado" << std::endl;
}


