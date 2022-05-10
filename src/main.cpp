#include <iostream>
#include "Board.hpp"

int main()
{
    std::cout << "Hello world" << std::endl;
    Board b{10, 15};
    b.RenderBoard();
}