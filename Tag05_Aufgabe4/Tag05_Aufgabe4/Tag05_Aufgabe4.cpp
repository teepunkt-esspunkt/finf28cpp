/*
 * Nachmittagsaufgabe 4 vom 30.10.2023
 *
 * Was gibt dieses Programm auf dem Bildschirm aus?
 *
 */

#include <iostream>
using namespace std;

int main()
{
	double x = (0.1 + 0.7) * 10;

	cout << boolalpha
		<< "Wert von x:  " << x << endl
		<< "(8 == 8.0) = " << (8 == 8.0) << endl
		<< "(x == 8.0) = " << (x == 8.0) << endl;

	return 0;
}

/*
Wert von x: 80
(/ == 8.0) = true
(x == 8.0) = true

/* Ausgabe

Wert von x : 8
(8 == 8.0) = true
(x == 8.0) = false

*/