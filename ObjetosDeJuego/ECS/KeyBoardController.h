#ifndef CE_VS_ZOMBIES_ESTUDIANTES_KEYBOARDCONTROLLER_H
#define CE_VS_ZOMBIES_ESTUDIANTES_KEYBOARDCONTROLLER_H

#pragma once

#include "EntityComponentSystem.h"
#include "Components.h"

class KeyBoardController : public Component{
private:
    int clicked = 0;
public:
    TransformComponent *transform;

    void init() override {
        transform = &entity->getComponent<TransformComponent>();
    }

    void actualizar() override {
        if(clicked == 1 && Juego::event.type == SDL_MOUSEBUTTONDOWN){
            this->clicked = 0;

            int mouseXPosOnBoard = Juego::event.button.x - 13;
            int mouseYPosOnBoard = Juego::event.button.y - 22;
            int boardSideLong = 610;
            int cellLong = 610/10;

            int mouseCellXPos = (mouseXPosOnBoard / cellLong);
            int mouseCellYPos = (mouseYPosOnBoard / cellLong);

            transform->position.x = (mouseCellXPos * cellLong);
            transform->position.y = (mouseCellYPos * cellLong);
        }
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

        if((Juego::event.type == SDL_MOUSEBUTTONDOWN) &&
        (Juego::event.button.x > this->transform->position.x) &&
        (Juego::event.button.x < this->transform->position.x + 61) &&
        (Juego::event.button.y > this->transform->position.y) &&
        (Juego::event.button.y < this->transform->position.y + 61)) {
            clicked = 1;

        }
    }
};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_KEYBOARDCONTROLLER_H
