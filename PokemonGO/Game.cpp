#include "Game.h"
#include "Player.h"
#include "Utility.h"
#include "PokemonType.h"
#include "WildEncounterManager.h"
#include <iostream>
using namespace std;


Game::Game()
{
	 forestGrass = { "Forest",
		{ Pokemon(40,"Pidgey",PokemonType::Normal),
		  Pokemon(35,"Caterpie", PokemonType::Grass),
		  Pokemon(70,"Zubat", PokemonType::Air)},
		70
	};
}

	Game::~Game()
	{

	}

	void Game::gameLoop(Player & player)

	{
		bool keepPlaying = true;
		int choice;

		while (keepPlaying)
		{
			Utility::clearConsole();

			cout << "The world is yours to explore, " << player.name << "What will you do next ? " << endl;
			cout << "1. Battle Wild Pok�mon" << endl;
			cout << "2. Visit PokeCenter" << endl;
			cout << "3. Challenge Gyms" << endl;
			cout << "4. Enter Pok�mon League" << endl;
			cout << "5. Quit" << endl;
			cout << "Enter your choice" << endl;
			cin >> choice;

			// Clear the newline character left in the buffer after cin >> choice
			Utility::clearInputBuffer();

			// Process the player's choice and display the corresponding message
			switch (choice) {
			case 1:
			{
				WildEncounterManager encounterManager;
				Pokemon encounteredPokemon =
					encounterManager.getRandomPokemonfromGrass(forestGrass);
				cout << "A wild " << encounteredPokemon.name << " appeared!\n";
				break;
			}
			case 2:
				cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee "
					"break. Guess your Pok�mon will have to tough it out for now!\n";
				break;
			case 3:
				cout << "You march up to the Gym, but it's closed for renovations. "
					"Seems like even Gym Leaders need a break!\n";
				break;
			case 4:
				cout << "You boldly step towards the Pok�mon League... but the "
					"gatekeeper laughs and says, 'Maybe next time, champ!'\n";
				break;
			case 5:
				cout << "You try to quit, but Professor Oak's voice echoes: "
					"'There's no quitting in Pok�mon training!'\n";
				cout << "Are you sure you want to quit? (y/n): ";
				char quitChoice;
				cin >> quitChoice;
				if (quitChoice == 'y' || quitChoice == 'Y') {
					keepPlaying = false;
				}
				break;
			default:
				cout << "That's not a valid choice. Try again!\n";
				break;
			}

			// Wait for Enter key before the screen is cleared and the menu is shown
			Utility::waitForEnter();
		}

		cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
	}
	