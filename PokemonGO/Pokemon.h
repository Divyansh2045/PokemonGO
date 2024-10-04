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

	Pokemon();

	~Pokemon();

	Pokemon(const Pokemon& other);

	Pokemon(int pHealth, string pName, PokemonType pType);

	void attack();
};