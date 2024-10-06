#pragma once
#include "Grass.h"
#include <string>
#include <vector>

class WildEncounterManager
{
public:

	WildEncounterManager();
	~WildEncounterManager();

	WildPokemon getRandomPokemonfromGrass(const Grass& grass);
};