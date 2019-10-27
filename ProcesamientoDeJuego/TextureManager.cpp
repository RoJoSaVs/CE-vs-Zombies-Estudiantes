#include <SDL_image.h>
#include "TextureManager.h"
#include "Juego.h"

SDL_Texture* TextureManager::LoadTexture(const char *texture) {
    SDL_Surface* tmpSurface = IMG_Load(texture);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(Juego::renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface);

    return tex;
}

void TextureManager::Draw(SDL_Texture *texture, SDL_Rect srcRect, SDL_Rect destRect) {
    SDL_RenderCopy(Juego::renderer, texture, &srcRect, &destRect);

}
