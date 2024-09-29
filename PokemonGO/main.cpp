#include <iostream>
#include<string>
using namespace std;


enum class PokemonChoice
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
	Grass,
	Normal
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
		Pokemon::name = "Unknown";
		Pokemon::type = PokemonType::Normal;
		Pokemon::health = 40;
		cout << "A new pokemon has been created using the default constructor" << endl;
	}

	Pokemon(int pHealth, string pName, PokemonType pType)
	{
		name = pName;
		type = pType;
		health = pHealth;
		cout << "A new pokemon : "<<name<< "has been created using the parameterized constructor" << endl;
	}

	Pokemon(const Pokemon& other)
	{
		name = other.name;
		type = other.type;
		health = other.health;
		cout << "A new pokemon : "<<other.name<<"has been created using the copy constructor" << endl;
	}

	~Pokemon()
	{
		cout <<"Pokemon: "<< name << " has been released" << endl;
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
		cout << "A new player named " << name << " has been created" << endl;
	}

	//~Player();

	Player(string playerName, Pokemon pChosenPokemon)
	{
		name = playerName;
		chosenPokemon = pChosenPokemon;
		cout << " Player " << playerName << "  has been created" << endl;
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
		cout <<"Look!!"<< professorName << "just spawned" << endl;
	}

	void greetPlayer(Player &player)
	{
		cout << professorName << ": Hello there! Welcome to the world of Pokemon!\n";
		cout << professorName << ": My name is Oak. People call me the Pokemon Professor!\n";
		cout << professorName << ": But enough about me. Let's talk about you!\n";
		cout <<professorName<< ": What is your name champion?" << endl;
		getline(cin, player.name);
		cout << "Welcome to the arena, " << player.name << endl;
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
	Player player("Ash", Pokemon(100,"Pikachu",PokemonType::Electric));
	Pokemon defaultPokemon;

	Pokemon Charmander(100, "Charmander ", PokemonType::Fire);

	Pokemon Bulbasaur(100, "Bulbasaur ", PokemonType::Grass);
	Pokemon CopyBulbasaur = Bulbasaur;
	CopyBulbasaur.health = 80;

	cout << "CopyBulbasaur : " << CopyBulbasaur.health << endl;

	{
		Pokemon pokemon;
	}


	ProfessorOak professor("Professor Oak");
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);


	cout << "But beware, Trainer, this is only the beginning." << endl;
	cout << "Your journey is about to unfold. Now let us see if you have got what it takes to keep going!\nGood luck, and remember!! Choose wisely!" << endl;

	cout << "Professor Oak: You and " << (player.chosenPokemon.name) << " will be the best of friends" << endl;

	cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
	
	return 0;

}