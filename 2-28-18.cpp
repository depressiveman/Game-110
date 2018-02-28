#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int temp;
	int n;
	int barray[5];
	int barray2[5];
	int score;
	cout << "what is your score" << endl;
	cin >> score;
	ifstream read("Score.txt");
	if (read.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			read >> n;
			barray[i] = n;
		}


		read.close();
		for (int i = 0; i < 5; i++)
			if (barray[i] < score) {
				temp = barray[i];
				barray2[i] = score;
				score = temp;
			}
			else
				barray2[i] = barray[i];

		cout << "scores are now" << endl;
		for (int i = 0; i < 5; i++)
			cout << barray2[i] << endl;
	}
  else
	  cout << "unable to open file";
  system("pause");

}