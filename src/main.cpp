#include <iostream>
#include "Game.hpp"
// #include "Board.hpp"

int main()
{
    std::cout << "Hello world" << std::endl;
    Game g{20,40};
    g.gameLoop();
}
