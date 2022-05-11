#include "Board.hpp"
#include <iostream>

Board::Board(std::size_t row, std::size_t col):b_Matrix(row,col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if (i == 0 || i == row-1)
            {
                b_Matrix(i,j) = '=';
                continue;
            }
            if (j == 0 || j == col-1)
            {
                b_Matrix(i,j) = '|';
                continue;
            }
            b_Matrix(i,j) = ' ';
        }
    }
}

void Board::InsertElement(std::size_t row_coord, std::size_t col_coord, char elem)
{
    b_Matrix(row_coord, col_coord) = elem;
}

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
