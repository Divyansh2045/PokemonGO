#pragma once
#include <iostream>
using namespace std;
#include "Pokemon.h"
#include "Player.h"
#include "Utility.h"


class BattleManager 
{
private:

public:

	void startBattle(Player& player, Pokemon wildPokemon);

	void battle(Pokemon& playerPokemon, Pokemon wildPokemon);

	void handleBattleOutcome(Player & player, bool playerWon);

};
