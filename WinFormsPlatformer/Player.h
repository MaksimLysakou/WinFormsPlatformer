#pragma once
class Player
{
private:
	bool isAlive;

	int xPosition;
	int yPosition;

	int xSpeedVector;
	int ySpeedVector;
	int step;

	char icon;
	
public:
	Player();

	void setPosition(int, int);
	int* getPosition();

	void setStepSize(int);
	int getStepSize();

	void render();

	~Player();
};

