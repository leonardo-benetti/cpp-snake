#pragma once
#include "Board.hpp"

class Game
{
private:
    Board g_Board;
    // Snake g_Snake;
    // Apple g_Apple;
public:
    Game(int rows, int cols);
    ~Game();
    void FillBoard();
    void GameDisplay();
    void ReadInput();
    void GameLoop();
    void GameLogic();
};
