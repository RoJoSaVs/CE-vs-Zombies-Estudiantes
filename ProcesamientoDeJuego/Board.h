#ifndef CE_VS_ZOMBIES_ESTUDIANTES_BOARD_H
#define CE_VS_ZOMBIES_ESTUDIANTES_BOARD_H


#include <SDL_rect.h>
#include <SDL_system.h>

class Board {
private:
    SDL_Rect srcRec, destRect;
    SDL_Texture* boardBackground;
    SDL_Texture* mainBackground;

    int board[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,1,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,1,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,1,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
    };
public:
    Board();
    ~Board();

    void LoadBoard(int arr[10][10]);
    void DrawBoard();
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_BOARD_H
