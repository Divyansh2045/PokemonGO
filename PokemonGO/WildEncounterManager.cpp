#include <vector>
#include "WildEncounterManager.h"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

WildPokemon WildEncounterManager::getRandomPokemonfromGrass(const Grass& grass)
{
	int randomIndex;

	randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];

}
