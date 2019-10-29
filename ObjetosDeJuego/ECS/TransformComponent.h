#ifndef CE_VS_ZOMBIES_ESTUDIANTES_POSITIONCOMPONENT_H
#define CE_VS_ZOMBIES_ESTUDIANTES_POSITIONCOMPONENT_H

#pragma once
#include "Components.h"
#include "../../ProcesamientoDeJuego/Vector.h"

class TransformComponent : public Component{

public:

    Vector position;
    Vector velocity;

    int speed = 3;


    TransformComponent(){
        position.x = 0.0f;
        position.y = 0.0f;
    }
    TransformComponent(float x, float y){
        position.x = x;
        position.y = y;
    }

    void init() override {
        velocity.x = 0;
        velocity.y = 0;
    }
    void actualizar(){
        position.x += velocity.x * speed;
        position.y += velocity.y * speed;
    }
};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_POSITIONCOMPONENT_H