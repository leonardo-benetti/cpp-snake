#include "Game.hpp"

Game::Game(int rows, int cols):g_Board(rows, cols){}
Game::~Game(){}

void Game::FillBoard()
{
    g_Board.InsertElement(2, 3, '*');
}
void Game::GameDisplay()
{
    g_Board.RenderBoard();
}
void Game::ReadInput(){}
void Game::GameLoop(){}
void Game::GameLogic(){}
