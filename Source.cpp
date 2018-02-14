#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	string rap1[20] = {"chuncky","mammoth","spotty","little","big","worthless","extra-large","clammy","sneaky","smelly","ugliest","chemical","flat","Jaded","tranquil","superb","sulky","dark","dangerous","majestic"};
	string rap2[20] = {"wasp","Almighty loaf","random","Haunt","Blackfish","shake","utensil","dog","earth","taste","suck","costume","ball","hat","animal","stumbling","delight","football","slipper","sweats"};
	char input;

	do {
		cout << "press 'y' for a random rap name" << endl;
		cin >> input;
		
	
			int rand_rap1 = rand() % 20 + 1;
			

			int rand_rap2 = rand() % 20 + 1;

		
		
			if (input == 'y') {
				cout << "your thing is" <<" " << rap1[rand_rap1] << " " << rap2[rand_rap2] << endl;
			}
			else
				cout << "stupid" << endl;

	} while (input != 'q');


}