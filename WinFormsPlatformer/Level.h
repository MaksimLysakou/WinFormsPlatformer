#include <string>
#include "Block.h"

using namespace std;

#pragma once
class Level
{
private:
	string levelName;

	Block* blocks;

public:
	Level();
	~Level();
};

