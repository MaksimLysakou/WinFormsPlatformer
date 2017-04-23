#include "Player.h"


Player::Player()
{
}

// TODO: add seticon

void Player::setPosition(int x, int y)
{
	this->xPosition = x;
	this->yPosition = y;
}

int * Player::getPosition()
{
	int* result = new int[2];

	result[0] = this->xPosition;
	result[1] = this->yPosition;

	return result;
}

void Player::setStepSize(int step)
{
	this->step = step;
}

int Player::getStepSize()
{
	return this->step;
}

void Player::render()
{
	// TODO: add impl
}

Player::~Player()
{
}
