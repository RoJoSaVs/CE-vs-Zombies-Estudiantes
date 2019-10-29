#ifndef CE_VS_ZOMBIES_ESTUDIANTES_POSITIONCOMPONENT_H
#define CE_VS_ZOMBIES_ESTUDIANTES_POSITIONCOMPONENT_H

#pragma once
#include "Components.h"
#include "../../ProcesamientoDeJuego/Vector.h"

class TransformComponent : public Component{

public:

    Vector position;

    TransformComponent(){
        position.x = 0.0f;
        position.y = 0.0f;
    }
    TransformComponent(float x, float y){
        position.x = x;
        position.y = y;
    }

    void actualizar(){

    }
};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_POSITIONCOMPONENT_H
