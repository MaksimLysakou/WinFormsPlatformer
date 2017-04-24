#include "Block.h"



Block::Block()
{
}


Block::~Block()
{
}

bool Block::isNearFrom(Block block) {

}

int Block::getXPosition() {
    return this->xPosition;
}

int Block::getYposition() {
    return this->yPosition;
}

int Block::getHeight() {
    return this->height;
}

int Block::getWidth() {
    return this->width;
}


int coordinatesX;
int coordinatesY;

bool passable = false;

string imagePath;
