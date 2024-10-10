#pragma once

#include <string>
#include <iostream>
using namespace std;
enum class PokemonType;


class Pokemon
{
private:

public:

	string name;
	PokemonType type;
	int health;
	int maxHealth;
	int attackPower;

	void takeDamage(int damage);
	bool isFainted() const ;

	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);

	Pokemon();

	~Pokemon();

	Pokemon(const Pokemon& other);

	Pokemon(int pHealth, string pName, PokemonType pType);

	void attack(Pokemon & target);



	void heal();
};