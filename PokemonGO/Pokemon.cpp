#include "Pokemon.h"
#include <iostream>
#include "PokemonType.h"


using namespace std;


Pokemon::Pokemon()
{
	name = "Unknown";
	type = PokemonType::Normal;
	health = 40;
}

Pokemon::Pokemon(int pHealth, string pName, PokemonType pType)
{
	name = pName;
	type = pType;
	health = pHealth;
}

Pokemon::Pokemon(const Pokemon& other)
{
	name = other.name;
	type = other.type;
	health = other.health;
}

Pokemon::~Pokemon()
{

}

void Pokemon::attack(Pokemon &target)
{
	int damage = attackPower;

	cout << name << " attacks " << target.name << " for " << damage << " damage" << endl;
	target.takeDamage(damage);
}

void Pokemon::takeDamage(int damage)
{
	health = health - damage;
	if ( health < 0)
	{
		health = 0;
	}
}
bool Pokemon::isFainted() const
{
	return health <= 0;

}

void Pokemon::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
	while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
	{
		playerPokemon.attack(wildPokemon);
		if (!wildPokemon.isFainted())
		{
			wildPokemon.attack(playerPokemon);
		}
		else
		{
			
		}

		if (playerPokemon.isFainted())
		{
			cout <<playerPokemon.name <<" has fainted! You lose the battle."<<endl;
		}
		else
		{
			cout << "You defeated the wild " << wildPokemon.name << ". You have won the battle" << endl;
		}

	}
}

void Pokemon::heal()
{
	health = maxHealth;
}