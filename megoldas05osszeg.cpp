// megoldas05osszeg.cpp
// Írjon függvényt, amely két számot vár paraméterül és eredményül 
// visszaadja a két szám összegét. Írjon programot, amely két számot 
// olvas be mindaddig, míg azok összege nem osztható 7 - tel.
// Felhasznált forrás: PE-MIK C Programozás I feladatgyűjtemény

#include <iostream>
#include <cmath>
using namespace std;


int osszeg(int egyik, int masik){
	return egyik + masik;
}

void main() {
	int a, b;
	cout << "A program szamokat olvas be es ad ossze. ";
	cout <<	"Ha 7-el oszthato az osszeg a program kilep\n\n";
	do
	{
		cout << "Kerem az 1. szamot: ";
		cin >> a;
		cout << "Kerem az 2. szamot: ";
		cin >> b;
		cout << "Osszeguk: " << osszeg(a, b) << "\n\n";
	} while (osszeg(a, b) % 7 != 0);
	cout << "Kilepes...";
}
