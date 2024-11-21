#pragma once

#include "../../HeaderFiles/Character/Player.h"
#include "../../HeaderFiles/Pokemon/Pokemon.h



class BattleManager 
{
private:
	void battle(Pokemon& playerPokemon, Pokemon wildPokemon);

	void handleBattleOutcome(Player& player, bool playerWon);

	void updateBattleState(); // Method to update the battle state after each turn

	BattleState battleState;

public:


	void startBattle(Player& player, Pokemon wildPokemon);

	

};
