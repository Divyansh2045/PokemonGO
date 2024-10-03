#include <iostream>
#include<string>
#include "PokemonType.h"
#include "PokemonChoice.h"
#include "Utility.h"
#include <limits>
using namespace std;



class Pokemon
{
private:

public:
	string name;
	PokemonType type;
	int health;

	Pokemon()
	{
		Pokemon::name = "Unknown";
		Pokemon::type = PokemonType::Normal;
		Pokemon::health = 40;
	
	}

	Pokemon(int pHealth, string pName, PokemonType pType)
	{
		name = pName;
		type = pType;
		health = pHealth;
	}

	Pokemon(const Pokemon& other)
	{
		name = other.name;
		type = other.type;
		health = other.health;
		
	}

	~Pokemon()
	{
	}

	void attack()
	{
		cout << "The pokemon performs an attack!!" << endl;
	}
};

class Player
{
private:
	
public:
	string name;
	Pokemon chosenPokemon;
	//int health;
	Player()
	{
		name = "Trainer";
		chosenPokemon = Pokemon();
		
	}

	//~Player();

	Player(string playerName, Pokemon pChosenPokemon)
	{
		name = playerName;
		chosenPokemon = pChosenPokemon;
	}

	void choosePokemon(int choice)
	{
		switch ((PokemonChoice)choice)
		{
		case PokemonChoice::Bulbasaur:
			chosenPokemon = Pokemon(100, "Bulbasaur", PokemonType::Grass);
			break;

		case PokemonChoice::Charmander:
			chosenPokemon = Pokemon(100, "Charmander", PokemonType::Fire);
			break;

		case PokemonChoice::Squirtle:
			chosenPokemon = Pokemon(100, "Squirtle", PokemonType::Water);
			break;
		default:
			chosenPokemon = Pokemon(100, "Pikachu", PokemonType::Electric);
			break;
		}
		cout << "Player:" << name << " chose " << chosenPokemon.name <<"!"<< endl;
	}
	

};

class ProfessorOak
{
private:

public:
	string professorName;

	ProfessorOak(string name)
	{
		professorName = name;
	}

	void greetPlayer(Player &player)
	{
		cout << professorName << ": Hello there! Welcome to the world of Pokemon!\n";
		Utility::waitForEnter();
		cout << professorName << ": My name is Oak. People call me the Pokemon Professor!\n";
		cout << professorName << ": But enough about me. Let's talk about you!\n";
		cout <<professorName<< ": What is your name champion?" << endl;
		getline(cin, player.name);
		cout << "Welcome to the arena, " << player.name << endl;
		Utility::waitForEnter();
		Utility::clearConsole();
	}

	void offerPokemonChoices(Player &player)
	{
		cout << "I give you the choice of three pokemons from which you can select only 1 to begin your journey to CATCH'EM ALL" << endl;
		Utility::waitForEnter();
		cout << "Your first option is" << endl;
		cout <<"1. Bulbasaur " << endl;
		cout << "2. Squirtle " << endl;
		cout << "and lastly" << endl;
		cout <<"3. Charmander" << endl;
		cout << "Which Pokemon would you like to choose. Enter the number" << endl;

		int choice;
		cin >> choice;
		player.choosePokemon(choice);
		Utility::clearConsole();

	}

	void explainMainQuest(Player &player)
	{
		cout << "Professor Oak: Oak-ay " << player.name << ", I am about to explain you about your upcoming grand adventure." << endl;
		Utility::waitForEnter();

		cout << " Professor Oak:   You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
		Utility::waitForEnter();

		cout << "Professor Oak : Your mission, should you choose to accept it(and trust me, you really don’t have a choice) is to collect all the Pokémon Badges";
		cout << "and conquer the Pokémon League." << endl;
		Utility::waitForEnter();

		cout << player.name << ": Wait... that sounds a lot like every other Pokémon game out there." << endl;
		Utility::waitForEnter();
		Utility::clearConsole();

		cout << "Professor Oak : Shhh!Don't break the fourth wall" <<player.name <<"!This is serious business." << endl;

		cout << "Professor Oak : To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter"<<endl;
		Utility::waitForEnter();
		Utility::clearConsole();

		cout << "Professor Oak : Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you";
		cout << "can carry, so choose wisely!"<<endl;
		Utility::waitForEnter();

		cout << player.name << ": Sounds like a walk in the park... right ?" << endl;
		Utility::waitForEnter();
		Utility::clearConsole();

		cout << "Professor Oak : Hah!That’s what they all say!But beware, young Trainer, the path to victory is fraught with challenges.And if you lose a battle...";
		cout << " well, let’s just say you'll be starting from square one." << endl;
		Utility::waitForEnter();
		Utility::clearConsole();

		cout << "Professor Oak : So, what do you say ? Are you ready to become the next Pokémon Champion ?" << endl;
		Utility::waitForEnter();

		cout << player.name << " : Ready as I’ll ever be, Professor!" << endl;
		Utility::waitForEnter();
		Utility::clearConsole();

		cout << "Professor Oak : That’s the spirit!Now, your journey begins." << endl;

		cout << "Professor Oak : But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;

	}


};

void gameLoop(Player& Player)

{
	bool keepPlaying = true;
	int choice;
	cin >> choice;

	while (keepPlaying)
	{
		Utility::clearConsole();

		cout << "The world is yours to explore, " << Player.name << "What will you do next ? " << endl;
		cout << "1. Battle Wild Pokémon" << endl;
		cout << "2. Visit PokeCenter" << endl;
		cout << "3. Challenge Gyms" << endl;
		cout << "4. Enter Pokémon League" << endl;
		cout << "5. Quit" << endl;
		cout << "Enter your choice" << endl;


		// Clear the newline character left in the buffer after cin >> choice
		Utility::clearInputBuffer();

		// Process the player's choice and display the corresponding message
		switch (choice) {
		case 1:
			cout << "You look around... but all the wild Pokémon are on "
				"vacation. Maybe try again later?\n";
			break;
		case 2:
			cout<< "You head to the PokeCenter, but Nurse Joy is out on a coffee "
				"break. Guess your Pokémon will have to tough it out for now!\n";
			break;
		case 3:
			cout << "You march up to the Gym, but it's closed for renovations. "
				"Seems like even Gym Leaders need a break!\n";
			break;
		case 4:
			cout << "You boldly step towards the Pokémon League... but the "
				"gatekeeper laughs and says, 'Maybe next time, champ!'\n";
			break;
		case 5:
			cout << "You try to quit, but Professor Oak's voice echoes: "
				"'There's no quitting in Pokémon training!'\n";
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

	cout << "Goodbye, " << Player.name << "! Thanks for playing!\n";
}
	

int main()
{
	Pokemon Charmander(100, "Charmander ", PokemonType::Fire);

	ProfessorOak professor("Professor Oak");
	Player player("Ash", Charmander);

	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);

	cout << "\n[Placeholder for the Game Loop]\n";

	/*cout << "But beware, Trainer, this is only the beginning." << endl;
	cout << "Your journey is about to unfold. Now let us see if you have got what it takes to keep going!\nGood luck, and remember!! Choose wisely!" << endl;

	cout << "Professor Oak: You and " << (player.chosenPokemon.name) << " will be the best of friends" << endl;

	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n"; */

	gameLoop(player);
	
	return 0;

}