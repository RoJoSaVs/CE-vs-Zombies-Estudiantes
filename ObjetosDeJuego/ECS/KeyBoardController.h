#ifndef CE_VS_ZOMBIES_ESTUDIANTES_KEYBOARDCONTROLLER_H
#define CE_VS_ZOMBIES_ESTUDIANTES_KEYBOARDCONTROLLER_H

#pragma once

#include "EntityComponentSystem.h"
#include "Components.h"

class KeyBoardController : public Component{
public:
    TransformComponent *transform;

    void init() override {
        transform = &entity->getComponent<TransformComponent>();
    }

    void actualizar() override {
        if(Juego::event.type == SDL_KEYDOWN){
            switch (Juego::event.key.keysym.sym){
                case SDLK_w:
                    transform->velocity.y = -1;
                    break;
                case SDLK_a:
                    transform->velocity.x = -1;
                    break;
                case SDLK_d:
                    transform->velocity.x = 1;
                    break;
                case SDLK_s:
                    transform->velocity.y = 1;
                    break;

                default:
                    break;
            }
        }

        if(Juego::event.type == SDL_KEYUP){
            switch (Juego::event.key.keysym.sym){
                case SDLK_w:
                    transform->velocity.y = 0;
                    break;
                case SDLK_a:
                    transform->velocity.x = 0;
                    break;
                case SDLK_d:
                    transform->velocity.x = 0;
                    break;
                case SDLK_s:
                    transform->velocity.y = 0;
                    break;

                default:
                    break;
            }
        }

//        if((Juego::event.type == SDL_MOUSEBUTTONUP) &&
//        (Juego::event.button.x > this->transform->position.x) &&
//        (Juego::event.button.x < this->transform->position.x + 64)){
//            switch (Juego::event.button.button){
//                case SDL_BUTTON_LEFT:
//                    transform->position.x = Juego::event.button.x;
//                    transform->position.y = Juego::event.button.y;
//                    break;
//                case SDL_BUTTON_RIGHT:
//                    transform->velocity.x = -3;
//                    break;
//
//                default:
//                    break;
//            }

        if(Juego::event.type == SDL_MOUSEMOTION){
            if ((Juego::event.button.x > this->transform->position.x) &&
            (Juego::event.button.x < this->transform->position.x + 64)){
                transform->position.x = Juego::event.button.x;
                transform->position.y = Juego::event.button.y;
            }
        }
    }
};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_KEYBOARDCONTROLLER_H
