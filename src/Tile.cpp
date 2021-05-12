#include <vector>

#include "Tile.h"
#include "Node.h"
#include "Board.h"
#include "Types.h"
using namespace std;

Tile::Tile()
{
}

Tile::Tile(Colour colour, Shape shape)
{
    this->colour = colour;
    this->shape = shape;
}

Tile::Tile(Tile &other)
{
    this->colour = other.colour;
    this->shape = other.shape;
}

Tile::~Tile()
{
}

Colour Tile::getColour()
{
    return colour;
}

Shape Tile::getShape()
{
    return shape;
}
