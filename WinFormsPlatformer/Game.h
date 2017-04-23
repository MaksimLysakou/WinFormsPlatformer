#pragma once
#include "Player.h"
#include "Level.h"
#include <vector>

using namespace std;

class Game
{
private:
	Player player;
	vector<Level> levels;
	Level currentLevel;
public:
	Game();
	void setPlayer(Player);
	Player getPlayer();
	void addLevel(Level);
	vector<Level> getLevels();
	void setCurrentLevel(Level);
	void showMenu();

	void render();

	~Game();
};

