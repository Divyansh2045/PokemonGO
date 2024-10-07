#include <iostream>
#include "Game.h"
#include<string>
#include "Player.h"
#include "PokemonType.h"
#include "PokemonChoice.h"
#include "Utility.h"
#include <limits>
#include "Professor.h"


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