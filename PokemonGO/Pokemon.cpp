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

void Pokemon::attack()
{
	cout << "The pokemon performs an attack!!" << endl;
}