#pragma once
#include <string>
#include <vector>
#include "PokemonType.h"
using namespace std;

struct Grass
{
	string environmentType;
	vector <PokemonType> wildPokemonList;
	int encounterRate;
};

	Grass forestGrass = {
		"Forest",
		{{"Pidgey",PokemonType::Normal, 40}, {"Caterpie", PokemonType::Grass, 35}},
		75
	};

	Grass caveGrass{
		"Cave",
		{{"Zubat", PokemonType::Earth, 50}, {"Geodude", PokemonType::Earth, 30}},
		80
	};

	Grass playgroundGrass{
		"Playground",
		{{"PinkPanther", PokemonType::Grass, 100}},
		35
	};

