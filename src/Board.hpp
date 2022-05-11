#pragma once
#include "Matrix2D.hpp"

class Board
{
private:
    Matrix2D<char> b_Matrix;

public:
    Board(std::size_t row, std::size_t col);

    void InsertElement(std::size_t row_coord, std::size_t col_coord, char elem);
    
    void RenderBoard() const;

};
