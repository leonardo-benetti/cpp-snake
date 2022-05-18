#include "Apple.hpp"

Apple::Apple():appleCoords({0,0})
{

}

Apple::Apple(coordinates coord):appleCoords(coord)
{

}

Apple::~Apple(){}

coordinates Apple::getAppleCoord()
{
    return appleCoords;
}

void Apple::spawnNew(coordinates boardDimentions)
{
    // generates coord between 1 and (maxX-1)
    appleCoords.x = rand() % (boardDimentions.x-1) + 1;
    // generates coord between 1 and (maxY-1)
    appleCoords.y = rand() % (boardDimentions.x-1) + 1;
}
