
#include "Player.h"
#include "PokemonChoice.h"
#include"PokemonType.h"
#include"Utility.h"
#include <iostream>

using namespace std;

Player::Player()
{
	name = "Trainer";
	chosenPokemon = Pokemon();
}

Player::Player(string playerName, Pokemon pChosenPokemon)
{
	name = playerName;
	chosenPokemon = pChosenPokemon;
}

Player::~Player()
{

}

void Player::choosePokemon(int choice)
{
	switch ((PokemonChoice)choice)
	{
	case PokemonChoice::Bulbasaur:
		chosenPokemon = Pokemon(100, "Bulbasaur", PokemonType::Grass);
		break;

	case PokemonChoice::Charmander:
		chosenPokemon = Pokemon(100, "Charmander", PokemonType::Fire);
		break;

	case PokemonChoice::Squirtle:
		chosenPokemon = Pokemon(100, "Squirtle", PokemonType::Water);
		break;
	default:
		chosenPokemon = Pokemon(100, "Pikachu", PokemonType::Electric);
		break;
	}
	cout << "Player:" << name << " chose " << chosenPokemon.name << "!" << endl;
}
