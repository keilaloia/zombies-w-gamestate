#include <iostream>
#include "zombies.h"
#include "time.h"
#include "GameState.h"
void main()
{
	srand(time(0));

	GameState gs;
	gs.init();

	
	gs.drawRound();

	while (!gs.isGameOver())
	{
		gs.update();
		printf("next round \n");
		gs.drawStatus();
	}
	getchar();


	//an array of zombies
	//need a way to setup athe zombie's initial data
	//loop through and randomly attack eachother
	//print the results of each combat round
	//print the outcome/winner
}