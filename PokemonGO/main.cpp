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
	cout << "Your first option is 1.Pikachu" << endl;
	cout << "2. turtle " << endl;
	cout << "and lastly 3.charizard" << endl;

	cout << "Which Pokemon would you like to choose. Enter the number" << endl;

	int choice;
	cin >> choice;
	if (choice ==  1)
	{
		cout << "You have chosen Pikachu.. Well done!!" << endl;
	}
	else if (choice == 2)
	{
		cout << "You have chosen Bulbasaur... Well done!!" << endl;
	}
	else if (choice == 3)
	{
		cout << "Charizard... hmmm... an excellent choice.. well done" << endl;
	}
	else
	{
		cout << "Invalid Input! Try again" << endl;
	}

	return 0;
}