#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int T;
	int n;
	int add = 0;
	int multiply = 0;
	int array[6];

	fstream myfile;
	myfile.open("Prob03.in.txt");

	if (myfile.is_open()) {
		for (int i = 0; i <= 1; i++) {
			myfile >> T;
		}
	
		for (int j = 2; j <= 4; j++) {
			myfile >> n;
			 array[j] = n;
			 add = n + n;
			 multiply = n * n;
			 cout << add << " " << multiply << endl;
			 
		}

	
		myfile.close();
	}

	
	system("pause");
}