#pragma once
#include <cstdlib>
#include "coordinates.hpp"

class Apple
{
private:
    coordinates appleCoords;
public:
    Apple();
    Apple(coordinates coord);
    ~Apple();
    coordinates getAppleCoord();
    void spawnNew(coordinates boardDimentions);
};
