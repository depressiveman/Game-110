#include <iostream>
#include <time.h>
using namespace std;

//function declaration
char foodDrop(char place);

class Pokemon {
public :
	Pokemon();
	void eat(char food);
	void initPokemon(int health);
	void evolve();
	void print();

private:
	int hp;
	char area;
	string name;
};
int main() {
	//instiantiate objects
	Pokemon Charmander;
	Pokemon Squirtle;
	Pokemon Bulbasaur;

	Charmander.initPokemon(0);
	Squirtle.initPokemon(0);
	Bulbasaur.initPokemon(0);

	while (1) {
		//feed Charmander
		Charmander.eat(foodDrop('d'));
		//feed Squirtle
		Squirtle.eat(foodDrop('f'));
		//feed Bulbasaur
		Bulbasaur.eat(foodDrop('d'));

		Charmander.evolve();
		Squirtle.evolve();
		Bulbasaur.evolve();

		//print new HPs
		Charmander.print();
		Squirtle.print();
		Bulbasaur.print();
		system("pause");
	}
	
	
}
 Pokemon::Pokemon() {
	 hp = 0;
	 area = 'a';

}
 void Pokemon::initPokemon(int health) {
	 hp = health;
 }
void Pokemon::eat(char food) {
	if (food == 'm')
		hp += 3;
	if (food == 'b')
		hp += 5;
	if (food == 'f')
		hp += 8;
	if (food == 'c')
		hp += 50000;
}
void Pokemon::evolve() {
	if (hp >= 100)
		cout << "your pokemon has evolved." << endl;
	if (hp >= 1000)
		cout << "Your pokemon has become its final form. Yet" << endl;
	if (hp >= 100000)
		cout << "Your pokemon has become a mega evolved pokemon" << endl;
}
void Pokemon::print() {
	cout << hp << endl;
}

char  foodDrop(char place) {



	//forest food drop chance
	if (place == 'f') {
		int map = rand() % 2 + 1;
		if (map == 1)
			return 'm';
		else
			return 'b';
	}

	//desert food drop chance
	if (place == 'd') {
		int map = rand() % 100 + 1;
		if (map < 20)
			return 'b';
		if (map < 60)
			return 'f';
		else
			return 'c';
	}
}