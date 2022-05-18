#include "Game.hpp"

Game::Game(int rows, int cols):
    g_Board(rows, cols),maxX(rows),maxY(cols),running(true)
{
    g_Apple.spawnNew({rows, cols});
}

Game::~Game(){}

void Game::fillBoard()
{
    g_Board.insertElement(g_Apple.getAppleCoord(), '*');
}
void Game::gameDisplay()
{
    g_Board.renderBoard();
}
void Game::readInput(){}

void Game::gameLogic()
{
    g_Board.removeElement(g_Apple.getAppleCoord());
    g_Apple.spawnNew({maxX, maxY});
}

void Game::gameLoop()
{
    int count = 0;
    while(running)
    {
        fillBoard();
        gameDisplay();
        readInput();
        gameLogic();
        ++count;
        if (count > 1)
            running = false;
    }
}
