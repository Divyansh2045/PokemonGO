#include "BattleManager.h"
#include <iostream>
using namespace std;


void BattleManager::startBattle(Player& player, Pokemon wildPokemon)
{
	std::cout << "A wild " << wildPokemon.name << " appeared!\n";
	battle(player.chosenPokemon, wildPokemon); // why does the second parameter dont throw error
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon wildPokemon)
{
	while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);
		if (!wildPokemon.isFainted())
		{
			wildPokemon.attack(playerPokemon);
		}

		Utility::waitForEnter();
	}

	handleBattleOutcome(player, playerPokemon.isFainted());

}

void BattleManager::handleBattleOutcome(Player &player, bool playerWon)
{
	if (playerWon)
	{
		cout << player.chosenPokemon.name << " is victorious!Keep an eye on your Pokémon's health." << endl;
	}
	else
	{
		cout << "Oh no!" << player.chosenPokemon.name << " fainted!You need to visit the PokeCenter." << endl;
		Utility::waitForEnter();
		std::cout << "Battle Over.\n";
	}
}
