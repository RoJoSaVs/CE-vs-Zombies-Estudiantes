#ifndef CE_VS_ZOMBIES_ESTUDIANTES_TEXTUREMANAGER_H
#define CE_VS_ZOMBIES_ESTUDIANTES_TEXTUREMANAGER_H
#include <SDL_system.h>

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* renderer);

};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_TEXTUREMANAGER_H
