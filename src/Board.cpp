#include "Board.hpp"
#include <iostream>

Board::Board(std::size_t row, std::size_t col):b_Matrix(row,col),dimX(row),dimY(col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if (i == 0 || i == row-1)
            {
                if (j == 0 || j == col-1)
                {
                    b_Matrix(i,j) = '+';
                    continue;
                }
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

Board::~Board(){}

bool Board::removeElement(coordinates coord)
{
    if (coord.x < 1 || coord.x >= dimX - 1)
        return false;
    if (coord.y < 1 || coord.y >= dimY - 1)
        return false;
    b_Matrix(coord.x, coord.y) = ' ';
    return true;
}

bool Board::insertElement(coordinates coord, char elem)
{
    if (coord.x < 1 || coord.x >= dimX - 1)
        return false;
    if (coord.y < 1 || coord.y >= dimY - 1)
        return false;
    b_Matrix(coord.x, coord.y) = elem;
    return true;
}

void Board::renderBoard() const
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
