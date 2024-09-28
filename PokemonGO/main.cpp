#include <iostream>
#include<string>
using namespace std;

enum class pokemonChoice
{
	Bulbasaur = 1,
	Charmander,
	Squirtle,
	Pikachu

};
enum class PokemonType
{
	Fire,
	Water,
	Air,
	Earth,
	Electric,
	Grass
};

class Pokemon
{
private:

public:
	string name;
	PokemonType type;
	int health;

	Pokemon()
	{

	}

	Pokemon(int pHealth, string pName, PokemonType pType)
	{
		name = pName;
		type = pType;
		health = pHealth;
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
	string playerName;
	Pokemon chosenPokemon;
	int health;
	Player()
	{

	}

	//~Player();

	Player(int choice)
	{

	}

	void choosePokemon(int choice)
	{
		switch ((pokemonChoice)choice)
		{
		case pokemonChoice::Bulbasaur:
			chosenPokemon = Pokemon(100, "Bulbasaur", PokemonType::Grass);
			break;

		case pokemonChoice::Charmander:
			chosenPokemon = Pokemon(100, "Charmander", PokemonType::Fire);
			break;

		case pokemonChoice::Squirtle:
			chosenPokemon = Pokemon(100, "Squirtle", PokemonType::Water);
			break;
		default:
			chosenPokemon = Pokemon(100, "Pikachu", PokemonType::Electric);
			break;
		}
		cout << "Player:" << playerName << " chose " << chosenPokemon.name <<"!"<< endl;
	}
	

};

class ProfessorOak
{
private:

public:
	string professorName;

	void greetPlayer(Player &player)
	{
		cout << professorName << ": Hello there! Welcome to the world of Pokemon!\n";
		cout << professorName << ": My name is Oak. People call me the Pokemon Professor!\n";
		cout << professorName << ": But enough about me. Let's talk about you!\n";
		cout <<professorName<< ": What is your name champion?" << endl;
		getline(cin, player.playerName);
		cout << "Welcome to the arena, " << player.playerName << endl;
	}

	void offerPokemonChoices(Player &player)
	{
		cout << "I give you the choice of three pokemons from which you can select only 1 to begin your journey to CATCH'EM ALL" << endl;
		cout << "Your first option is 1. Bulbasaur " << endl;
		cout << "2. Squirtle " << endl;
		cout << "and lastly 3. Charmander" << endl;
		cout << "Which Pokemon would you like to choose. Enter the number" << endl;

		int choice;
		cin >> choice;
		player.choosePokemon(choice);

	}
};

int main()
{
	Player player;
	Pokemon placeholderpokemon;
	ProfessorOak professor;

	placeholderpokemon.name = "Pikachu";
	placeholderpokemon.type = PokemonType::Electric;
	placeholderpokemon.health = 100;

	player.playerName = "Divyansh Nagar";
	player.health = 250;

	professor.professorName = "Professor Oak";
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);


	cout << "But beware, Trainer, this is only the beginning." << endl;
	cout << "Your journey is about to unfold. Now let us see if you have got what it takes to keep going!\nGood luck, and remember!! Choose wisely!" << endl;

	cout << "Professor Oak: You and " << (player.chosenPokemon.name) << " will be the best of friends" << endl;

	placeholderpokemon.attack();
	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
	
	return 0;

}