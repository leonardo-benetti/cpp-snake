#pragma once
#include "Board.hpp"
#include "Apple.hpp"

class Game
{
private:
    bool running;
    int maxX, maxY;
    Board g_Board;
    // Snake g_Snake;
    Apple g_Apple;
public:
    Game(int rows, int cols);
    ~Game();
    void fillBoard();
    void gameDisplay();
    void readInput();
    void gameLogic();
    void gameLoop();
};
