#ifndef CE_VS_ZOMBIES_ESTUDIANTES_SPRITECOMPONENT_H
#define CE_VS_ZOMBIES_ESTUDIANTES_SPRITECOMPONENT_H

#pragma once
#include "Components.h"
#include "SDL.h"
#include "../../ProcesamientoDeJuego/TextureManager.h"
#include "TransformComponent.h"

class SpriteComponent : public Component{

private:
    TransformComponent *transform;
    SDL_Texture *texture;
    SDL_Rect srcRect, destRect;

public:
    SpriteComponent() = default;
    SpriteComponent(const char* path){
        setTexture(path);
    }

    ~SpriteComponent(){
        SDL_DestroyTexture(texture);
    }

    void setTexture(const char* path){
        texture = TextureManager::LoadTexture(path);
    }

    void init() override {
        transform = &entity->getComponent<TransformComponent>();

        srcRect.x = srcRect.y = 0;
        srcRect.w = transform->width;
        srcRect.h = transform->height;
    }

    void actualizar() override {
        destRect.x = (int)transform->position.x;
        destRect.y = (int)transform->position.y;
        destRect.w = transform->width * transform->scale;
        destRect.h = transform->height * transform->scale;
    }

    void draw() override {
        TextureManager::Draw(texture, srcRect, destRect);

    }
};
#endif //CE_VS_ZOMBIES_ESTUDIANTES_SPRITECOMPONENT_H
