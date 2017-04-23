#include "Game.h"

Game::Game()
{
	
}

vector<Level> Game::getLevels()
{
	return this->levels;
}

void Game::setCurrentLevel(Level level)
{
	this->currentLevel = level;
}

void Game::showMenu()
{
	// TODO: add impl
}

void Game::render()
{
	// this->currentLevel.render();
	this->player.render();
}

Game::~Game()
{
}


void Game::setPlayer(Player player) {
	this->player = player;
}

Player Game::getPlayer() {
	return this->player;
}

void Game::addLevel(Level level)
{
	this->levels.push_back(level);
}
