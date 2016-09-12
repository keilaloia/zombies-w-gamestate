#include "GameState.h"
//#include <random>
#include <cstdlib>
#include <cstdio>
void GameState::init()
{
	zombies[0].init("charlie", "Choco late");
	zombies[1].init("Micheal J", "Thriller");
	zombies[2].init("Jaquan", "rapper");
	zombies[3].init("Harambe", "Gorilla");
}

void GameState::drawStatus()const
{
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(false);
}
void GameState::drawRound()const
{
	printf("let the rounds begin!\n");
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(true);
}

void GameState::update()
{
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());
}
bool GameState::isGameOver()const
{
	int livingZombies = 0;
	for (int i = 0; i < Z_COUNT; ++i)
		if (zombies[i].isAlive())
			livingZombies++;

	return livingZombies == 1;
}
