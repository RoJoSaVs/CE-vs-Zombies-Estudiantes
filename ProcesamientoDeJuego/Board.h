#ifndef CE_VS_ZOMBIES_ESTUDIANTES_BOARD_H
#define CE_VS_ZOMBIES_ESTUDIANTES_BOARD_H


#include <SDL_rect.h>
#include <SDL_system.h>
#include "../ObjetosDeJuego/ECS/EntityComponentSystem.h"

class Board {
private:
    SDL_Rect srcRec, destRect;
    SDL_Rect srcBGRec, destBGRect;

    SDL_Texture* boardBackground;
    SDL_Texture* mainBackground;

//    int board[10][10] = {
//            {110,210,310,410,510,610,710,810,910,1010},
//            {120,220,320,420,520,620,720,820,920,1020},
//            {130,230,331,430,530,630,730,830,930,1030},
//            {140,240,340,440,540,640,740,841,940,1040},
//            {150,250,350,450,550,650,750,850,950,1050},
//            {160,260,360,460,561,660,760,860,960,1060},
//            {170,270,370,470,570,670,770,870,970,1070},
//            {180,280,380,480,580,680,780,880,980,1080},
//            {190,290,390,491,590,690,790,890,990,1090},
//            {1100,2100,3100,4100,5100,6100,7100,8100,9100,10100},
//    };

public:

    int board[10][10] = {
            {1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1},
            {1,1,0,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,0,1,1},
            {1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,0,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1},
            {1,1,1,0,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1}
    };

public:
    Board();
    ~Board();

    void LoadBoard(int arr[10][10]);
    void DrawBoard();
    void chooseCell(int arr[10][10]);
    void setFullCell(int row, int column);
    void setEmptyCell(int row, int column);
    int  getValue(int row, int column) {
      return board[row][column];
    };
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_BOARD_H
