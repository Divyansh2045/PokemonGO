#pragma once
#include <string>
#include "Pokemon.h"

using namespace std;

class Player
{
private:


public:
	string name;
	Pokemon chosenPokemon;
	//int health;

	 Player();

	 Player(string playerName, Pokemon pChosenPokemon);
     ~Player();

	 void choosePokemon(int choice);



};
