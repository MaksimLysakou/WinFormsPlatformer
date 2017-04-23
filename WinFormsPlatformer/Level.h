#include <string>

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

