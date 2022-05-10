#include "Board.hpp"
#include <iostream>

Board::Board(size_t row, size_t col):b_Matrix(row, col){}

void Board::RenderBoard() const
{
    for(int i = 0; i < b_Matrix.row_size(); i++)
    {
        for(int j = 0; j < b_Matrix.col_size(); j++)
        {
            std::cout << b_Matrix(i, j);
        }
        std::cout << "\n";
    }
}
