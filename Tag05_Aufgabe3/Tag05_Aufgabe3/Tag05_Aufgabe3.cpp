/*
 * Nachmittagsaufgabe 3 vom 30.10.2023
 *
 * Was gibt dieses Programm auf dem Bildschirm aus?
 *
 */

#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;

	bool ergebnis = false;

	int a = 1, b = 2, c = 3;

	ergebnis = ++a || ++b && ++c;

	cout << "ergebnis = " << ergebnis
		<< ", a = " << a
		<< ", b = " << b
		<< ", c = " << c << endl;

	ergebnis = ++a && ++b || ++c;

	cout << "ergebnis = " << ergebnis
		<< ", a = " << a
		<< ", b = " << b
		<< ", c = " << c << endl;

	return 0;
}

/*
ergebnis = true, a = 2, b = 2, c = 3
ergebnis = true, a = 3, b = 3, c = 33

*/
