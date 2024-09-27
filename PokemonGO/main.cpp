#include <iostream>
#include<string>
using namespace std;

enum pokemonChoice
{
	Bulbasaur,
	Charmander,
	Squirtle,
	InvalidChoice

};

int main()
{
	string playerName;
	pokemonChoice chosenPokemon;
	chosenPokemon = InvalidChoice;

	//cout << "choice is " << chosenPokemon << endl;
	
	cout << "Enter your name champion" << endl;
	cin >> playerName;
	cout << "Welcome to the area, " << playerName << endl;

	cout << "Hi, I am Professor Oak, and this is Pokemon Arena" << endl;
	cout << "I give you the choice of three pokemons from which you can select only 1 to begin your journey to CATCH'EM ALL" << endl;
	cout << "Your first option is 1. Bulbasaur " << endl;
	cout << "2. Squirtle " << endl;
	cout << "and lastly 3. Charmander" << endl;

	cout << "Which Pokemon would you like to choose. Enter the number" << endl;



	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		chosenPokemon = Bulbasaur;
		break;

	case 2:
		chosenPokemon = Charmander;
		break;

	case 3:
		chosenPokemon = Squirtle;
		break;
	default:
		chosenPokemon = InvalidChoice;
		break;

	}

	switch (chosenPokemon)
	{
	case Bulbasaur:
		cout << "Well done on choosing Bulbasaur, must say an excellent choice" << endl;
		break;

	case Squirtle:
		cout << "Well done on choosing Squirtle, must say an excellent choice" << endl;
		break;

	case Charmander:
		cout << "Well done on choosing Charmander, must say an excellent choice" << endl;
		break;
	default:
		cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
		chosenPokemon = Charmander; // Default to Charmander if invalid choice
		cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
		break;
		

	}

	cout << "But beware, Trainer, this is only the beginning." << endl;
	cout << "Your journey is about to unfold. Now let us see if you have got what it takes to keep going!\nGood luck, and remember… Choose wisely!" << endl;

	cout << "Professor Oak: You and " << (chosenPokemon == Charmander ? "Charmander" : chosenPokemon == Bulbasaur ? "Bulabasaur" : "Squirtle") << "will be the best of friends" << endl;
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
	
	return 0;

}