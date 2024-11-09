#pragma once
#include "../HeaderFiles/Pokemon/Pokemon.h



class BattleState 
{
private:

public:

	struct battleState
	{
	Pokemon wildPokemon;
	Pokemon playerPokemon;

	bool playerTurn; //true if its players turn
	bool battleOngoing; //true if battle is ongoing
	};
};
