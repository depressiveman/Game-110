#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

string name();
string colorsthing();

class car {
public:
	car();
	void carInit(int fuel, string name, string colors, int wheels);
	void printInfo();
private:
	int fuelAmount;
	string brand;
	string color;
	int wheel;

};

int main() {
	srand(time(NULL));
	cout << "flag" << endl;
	car car1;
	car car2;
	car car3;
	car car4;
	car car5;

	vector<car>myCar;
	vector<car>::iterator iter;

	int random = rand() % 100 + 1;
	int wheelsa = rand() % 4 + 1;

	cout << "flag2" << endl;

	myCar.push_back(car1);
	myCar.push_back(car2);
	myCar.push_back(car3);
	myCar.push_back(car4);
	myCar.push_back(car5);

	for (iter = myCar.begin(); iter != myCar.end(); iter++) {

		iter->carInit(random,name(),colorsthing(),wheelsa);
	}
cout << "flag3";
	for (iter = myCar.begin(); iter != myCar.end(); iter++) {
		iter->printInfo();//member selection
	}
	system("pause");
	
}

car::car() {
	fuelAmount = 0;
	brand = "NONE";
	color = 'NONE';
	wheel = 0;
}

void car::carInit(int fuel, string name, string colors, int wheels) {
	cout << "init function" << endl;
	fuelAmount = fuel;
	brand = name;
	color = colors;
	wheel = wheels;
}

void car::printInfo() {
	cout << "the fuel amount is " << fuelAmount << endl;
	cout << " brand is " << brand << endl;
	cout << " color is " << color << endl;
	cout<<" numer of wheels are " << wheel << endl;
}

string name() {
	cout << "name function" << endl;
	string input;
	string BrandName[10] = { "Chevy","Toyota", "Jeep" , "Nissan", "Honda", "Jaguar", "Dodge", "BMW", "Ferrari", "Tesla" };
	int num1 = rand() % 10;
	return BrandName[num1];
}

string colorsthing() {
	cout << "color function" << endl;
	string input;
	string COLORName[10] = { "RED","BLUE", "GRAY" , "YELLOW", "ORANGE", "BLACK", "BROWN", "WHITE", "PINK", "GREEN" };
	int num1 = rand() % 10;
	return COLORName[num1];
}