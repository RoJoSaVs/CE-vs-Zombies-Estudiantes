#ifndef CE_VS_ZOMBIES_ESTUDIANTES_COLLISION_H
#define CE_VS_ZOMBIES_ESTUDIANTES_COLLISION_H

#pragma once

#include <SDL_rect.h>

class Collision{
public:
    static bool AABB(const SDL_Rect& rectA, const SDL_Rect rectB );
};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_COLLISION_H
