#include <iostream>
#include "../HeaderFiles/Main/Game.h"
#include<string>
#include "../HeaderFiles/Character/Player.h"
#include "../HeaderFiles/Pokemon/PokemonChoice.h"
#include "../HeaderFiles/Pokemon/PokemonType.h"
#include "../HeaderFiles/Utility/Utility.h"
#include <limits>
#include "../HeaderFiles/Character/Professor.h"


using namespace std;


int main()
{
	ProfessorOak professor("Professor Oak");
	Player player;

	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);

	//gameloop
	Game game;
	game.gameLoop(player);
	
	return 0;

}