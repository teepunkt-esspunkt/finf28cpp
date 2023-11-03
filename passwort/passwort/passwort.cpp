/*
 * passwort.cpp
 * Demonstration von Speicherklassen
 * Autor: Tarek Saleh
 * Datum: xx
 *
 */

#include <iostream>
using namespace std;

bool getPasswort();   // Prototyp

extern string passwort; // funktioniert denn passwort ist in passwortFunktionen.cpp
						// nicht static und deshalb programmglobal
						// aber muss als extern deklariert werden

int main()
{
	cout << "Kleiner Tipp: Das Passwort lautet: " << passwort << endl << endl;
	if (getPasswort()) {
		cout << "Passwort korrekt!" << endl;
	}
	else {
		cout << "Das war wohl nichts..." << endl;
	}

	return 0;

}

