#pragma once
#include "Grass.h"


class Game
{
private:
	Grass forestGrass;

public:

	Game();
	~Game();

	void gameLoop(Player&player);


};
