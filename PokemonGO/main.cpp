#include <iostream>
#include<string>
#include "Player.h"
#include "PokemonType.h"
#include "PokemonChoice.h"
#include "Utility.h"
#include <limits>

using namespace std;



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


	

int main()
{
	Pokemon Charmander(100, "Charmander ", PokemonType::Fire);

	ProfessorOak professor("Professor Oak");
	Player player("Ash", Charmander);

	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);


	/*cout << "But beware, Trainer, this is only the beginning." << endl;
	cout << "Your journey is about to unfold. Now let us see if you have got what it takes to keep going!\nGood luck, and remember!! Choose wisely!" << endl;

	cout << "Professor Oak: You and " << (player.chosenPokemon.name) << " will be the best of friends" << endl;

	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n"; */

	gameLoop(player);
	
	return 0;

}