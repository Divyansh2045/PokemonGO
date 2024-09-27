#include <iostream>
using namespace std;

int main()
{
	string playerName;
	cout << "Enter your name champion" << endl;
	cin >> playerName;
	cout << "Great start " << playerName << endl;

	cout << "Hi, I am Professor Oak, and this is Pokemon Arena" << endl;
	cout << "I give you the choice of three pokemons from which you can select only 1 to begin your journey to CATCH'EM ALL" << endl;
	cout << "Your first option is 1.Bulbasaur" << endl;
	cout << "2. turtle " << endl;
	cout << "and lastly 3.charizard" << endl;

	cout << "Which Pokemon would you like to choose. Enter the number" << endl;



	int chosenPokemon;
	cin >> chosenPokemon;
	switch (chosenPokemon)
	{
	case 1:

		cout << "Well done on choosing Bulbasaur, must say an excellent choice" << endl;
		break;

	case 2:
		cout << "Well done on choosing Turtle, must say an excellent choice" << endl;
		break;

	case 3:
		cout << "Well done on choosing charizard, must say an excellent choice" << endl;
		break;
	default:
		cout << "You have chosen Pikachu, well done now on you go" << endl;
		break;

	}

	cout << "But beware, Trainer, this is only the beginning." << endl;
	cout << "Your journey is about to unfold.Now let us see if you have got what it takes to keep going!\nGood luck, and remember… Choose wisely!" << endl;

	return 0;

}