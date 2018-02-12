#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	string input2;

	do {
		cout << "Player 1 choose rock paper or scissors." << endl;
		getline(cin,input);
		cout << " Player 2 choose rock paper or scissors. " << endl;
		getline(cin, input2);
		if (!input.compare("rock") && !input2.compare("scissors")) {
			cout << "player1 wins!" << endl;
		}
		if (!input.compare("rock") && !input2.compare("rock")) {
			cout << "Nobody wins!!!" << endl;
		}
		if (!input.compare("rock") && !input2.compare("paper")) {
			cout << "player 2 wins!!" << endl;
		}
		if (!input.compare("paper") && !input.compare("rock")) {
			cout << "player1 wins!" << endl;
		}
		if (!input.compare("paper") && !input.compare("scissors")){
			cout << "player 2 wins!!!" << endl;
		}
		if (!input.compare("paper") && !input.compare("paper")) {
			cout << "Nobody wins" << endl;
		}
		if (!input.compare("scissors") && !input.compare("rock")) {
			cout << "player 2 wins!" << endl;
		}
		if (!input.compare("scissors") && !input.compare("paper")) {
			cout << "player 1 wins" << endl;
		}
		if (!input.compare("scissors") && !input.compare("scissors")) {
			cout << "nobody wins" << endl;
		}

	} while (input != "quit");
	

}