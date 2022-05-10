#pragma once
#include "Matrix2D.hpp"

class Board
{
private:
    Matrix2D<int> b_Matrix;

public:
    Board(std::size_t row, std::size_t col);
    
    void RenderBoard() const;

};