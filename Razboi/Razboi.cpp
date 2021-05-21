#include <iostream>
#include <string>
#include<ctime>
#include <windows.h>
using namespace std;

int ra, y;
string r;



void amesteca() {
	ra = rand() % 4 + 1;

	switch (ra) {
	case 1: r = "hearts"; break;
	case 2: r = "spades"; break;
	case 3: r = "diamonds"; break;
	case 4: r = "clubs"; break;
	}

	y = rand() % 14 + 1;
}

int main() {
	srand(time(0));
	int z, x, scor1 = 0, scor2 = 0;
	bool ok = 1;


	cout << endl << "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Welcome to WAR! The first to reach 5 points wins!" << endl;


	while (ok) {
		cout << "The dealer shuffles the cards" << endl;
		amesteca();
		Sleep(2000);
		cout << "You got " << y << " of " << r << endl << endl; z = y;

		cout << "The dealer shuffles the cards" << endl;
		Sleep(2000);
		amesteca();
		cout << "I got " << y << " of " << r << endl << endl; x = y;

		Sleep(2000);

		if (z > x) { cout << "You won a point " << endl; scor1++; cout << "Score: Player " << scor1 << ", PC " << scor2 << endl << endl; }
		else if (x > z) {
			cout << "I won a point " << endl; scor2++; cout << "Score: Player " << scor1 << ", PC " << scor2 << endl << endl;
		}
		else
		{
			for (int j = 1; j <= x; j++)
			{
				amesteca();
			}
		}

		if (scor1 == 5) { cout << "You won... I lost :(" << endl; ok = 0; }
		else if (scor2 == 5) { cout << "I won!! You lost :P" << endl; ok = 0; }

	}


}