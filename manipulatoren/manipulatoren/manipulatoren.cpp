/*
 * manipulatoren.cpp
 * Einstellungen bei der Ausgabe mit cout
 * Autor: Tarek Saleh
 * Datum: 26.10.2023 (Tag 3)
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setw(10) << setfill('.') << "12345" << setw(10) << setfill('x') << "67890" << endl;
}

