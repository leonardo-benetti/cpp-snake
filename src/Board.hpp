#pragma once
#include "Matrix2D.hpp"
#include "coordinates.hpp"

class Board
{
private:
    Matrix2D<char> b_Matrix;
    const int dimX, dimY;

public:
    Board(std::size_t row, std::size_t col);
    ~Board();

    bool removeElement(coordinates coord);
    bool insertElement(coordinates coord, char elem);
    
    void renderBoard() const;

};
