#include "../HeaderFiles/Battle/WildEncounterManager.h"
#include "../HeaderFiles/Pokemon/Grass.h"
#include "../HeaderFiles/Pokemon/Pokemon.h"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonfromGrass(const Grass& grass)
{
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];

}
