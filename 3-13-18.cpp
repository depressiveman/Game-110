#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>


using namespace std;

int main() {
	vector<int>victor;
	vector<int>::iterator iter;
	int input;
	cout << "put numbers" << endl;
	do {
	
	cin >> input;

	victor.push_back(input);

	sort(victor.begin(), victor.end());

	for (iter = victor.begin(); iter != victor.end(); ++iter) {
		cout << *iter << endl;
	}
	
	} while (input != 0);
	

	
}