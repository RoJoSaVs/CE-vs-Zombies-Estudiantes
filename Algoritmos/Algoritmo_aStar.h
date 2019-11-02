#ifndef CE_VS_ZOMBIES_ESTUDIANTES_ALGORITMO_ASTAR_H
#define CE_VS_ZOMBIES_ESTUDIANTES_ALGORITMO_ASTAR_H

#include<bits/stdc++.h>
#define ROW 10
#define COL 10

using namespace std;

// A structure to hold the neccesary parameters
struct cell
{
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};
// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;

// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, pair<int, int>> pPair;


class Algoritmo_aStar {

public:
    std::vector<int> XList;
    std::vector<int> YList;

    /* Description of the Grid-
     1--> The cell is not blocked
     0--> The cell is blocked    */
    int grid[ROW][COL] =
            {   { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                { 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                { 1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
                { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            };

    bool isValid(int row, int col);
    bool isUnBlocked(int grid[][COL], int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    void tracePath(cell cellDetails[][COL], Pair dest);
    void aStarSearch(int grid[][COL], Pair src, Pair dest);

};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_ALGORITMO_ASTAR_H
