#include <string>

using namespace std;

#pragma once
class Block
{
private:
	int xPosition;
	int yPosition;
	int height;
	int width;
	bool passable;
	string imagePath;
public:
	Block();
	bool isNearFrom(Block);
	int getXPosition();
	int getYposition();
	int getHeight();
	int getWidth();
	~Block();
};

