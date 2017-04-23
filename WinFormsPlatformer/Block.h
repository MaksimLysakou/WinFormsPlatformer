#include <string>

using namespace std;

#pragma once
class Block
{
public:
	int coordinatesX;
	int coordinatesY;

	bool passable;

	string imagePath;


public:
	Block();
	~Block();
};

