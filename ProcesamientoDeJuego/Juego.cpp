#include <iostream>
#include "Juego.h"
#include "SDL_image.h"
#include "TextureManager.h"
#include "../ObjetosDeJuego/ID.h"
#include "Board.h"
#include "../ObjetosDeJuego/ECS/Components.h"
#include "../ObjetosDeJuego/ObjetoDeJuego.h"
#include "../ObjetosDeJuego/ECS/SpriteComponent.h"
#include "Collision.h"

SDL_Renderer* Juego::renderer = nullptr;
SDL_Event Juego::event;

Board *Juego::getMap()  {
    return map;
}

Manager manager;
auto& jugador(manager.addEntity());
auto& wall(manager.addEntity());
auto& lanzallamas(manager.addEntity());


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

    int scale = 2;
    jugador.addComponent<TransformComponent>(scale);
    jugador.addComponent<SpriteComponent>("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/geneticElfo.png");
    jugador.addComponent<KeyBoardController>();
    jugador.addComponent<ColliderComponent>("player");

    float xEpos = 650.0f, yEpos = 375.0f;
    int wE = 60, hE = 60;
    int scaleE2 = 1;
    lanzallamas.addComponent<TransformComponent>(xEpos, yEpos, wE, hE, scaleE2);
    lanzallamas.addComponent<SpriteComponent>("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/lanzallamas.png");
    lanzallamas.addComponent<KeyBoardController>();
    lanzallamas.addComponent<ColliderComponent>("enemy");

    float xpos = 300.0f, ypos = 300.0f;
    int w = 300, h = 20;
    int scale2 = 1;
    wall.addComponent<TransformComponent>(xpos, ypos, w, h, scale2);
    wall.addComponent<SpriteComponent>();
    wall.addComponent<ColliderComponent>("wall");

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
    manager.actualizar(map);


    if(Collision::AABB(jugador.getComponent<ColliderComponent>().collider,
            wall.getComponent<ColliderComponent>().collider)){
        jugador.getComponent<TransformComponent>().scale = 1;
        std::cout<<"wall hit"<<std::endl;
    }
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


