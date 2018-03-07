#include <iostream>
using namespace std;

int knockBack(int D, int w, int p, double s, int b, double r);

class SmashBros {
private:
	SmashBros();
	void InitSmash(int D, int k, int l, int p, int w, double s, double r, string name);
	void Damage(int knockback, int damagepercent, string name);
public:
	int percent;
	int knockback;
	int lives;
	int percentbefore;
	int weight;
	double scaling;
	double ratio;
	string name;
};

int main() {

	do {
		cout << "knockback is " << knockBack(10, 75, 25, .5, 20, 1.2) << endl;
		system("PAUSE");
	} while (1);

}

SmashBros::SmashBros() {
	lives = 0;
	percent = 0;
	name = "none";
	knockback = 0;
	weight = 0;
	scaling = 0;
	ratio = 0;
}
void SmashBros::InitSmash(int D, int k, int l, int p, int w, double s, double r, string name) {
	lives = l;
	percent = D;
	knockback = k;
	percentbefore = p;
	weight = w;
	scaling = s;
	ratio = r;
};
void SmashBros::Damage(int knockback, int damagepercent, string name) {

};

int knockBack(int D, int w, int p, double s, int k, double r) {
	int num;
	num = ((((7 * (D + 2)*(D + p) / (w + 100)) + 9) * 2 * s) + k)*r;
	cout << "knockback is calculated to be " << num << endl;
	return num;
};