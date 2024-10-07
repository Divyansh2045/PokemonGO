#pragma once
#include <string>
#include <vector>

struct Grass;
class Pokemon;

class WildEncounterManager
{
public:

	WildEncounterManager();

	Pokemon getRandomPokemonfromGrass(const Grass& grass);
};