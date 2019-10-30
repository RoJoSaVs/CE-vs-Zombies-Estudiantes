#include "Board.h"
#include "TextureManager.h"



Board::Board() {
    mainBackground = TextureManager::LoadTexture("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/gameWindowBackground.png");
    boardBackground = TextureManager::LoadTexture("/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/board.png");

    srcRec.x = destRect.x = 13;
    srcRec.y = destRect.y = 22;
    srcRec.w = destRect.w = 610;
    srcRec.h = destRect.h = 610;

    srcBGRec.x = destBGRect.x = 0;
    srcBGRec.y = destBGRect.y = 0;
    srcBGRec.w = destBGRect.w = 897;
    srcBGRec.h = destBGRect.h = 650;
}

Board::~Board() {
    SDL_DestroyTexture(mainBackground);
    SDL_DestroyTexture(boardBackground);
}

void Board::LoadBoard(int arr[10][10]) {
    for (int row = 0; row<10; row++){
        for (int column = 0; column < 10; column++){
            board[row][column] = arr[row][column];
        }
    }
}

void Board::DrawBoard() {
    int type = 0;

//    for (int row = 0; row<10; row++){
//        for (int column = 0; column < 10; column++){
//            type = board[row][column];
//        }
//    }

    TextureManager::Draw(mainBackground, srcBGRec, destBGRect);
    TextureManager::Draw(boardBackground, srcRec, destRect);

}

void Board::chooseCell(int arr[10][10]) {

}
