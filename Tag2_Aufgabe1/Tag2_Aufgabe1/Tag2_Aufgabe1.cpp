/*
 * Tag2_Aufgabe1.cpp
 * Lotto Schein
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
using namespace std;

int main()
{
	string zeile = "----+";
	int spaltenAnzahl = 8;
	int zeilenAnzahl = 10;

	// Ausgabe des oberen Randes
	cout << "+";
	for (int i = 1; i <= spaltenAnzahl; i++)
	{
		cout << zeile;
	}
	cout << endl;

	for (int i = 1; i <= zeilenAnzahl; i++)
	{
		for (int ii = 1; ii <= spaltenAnzahl; ii++)
		{
			if (ii + 7 * (i-1) < 10) 
			{
				cout << "| " << "  " << ii + 7 * (i - 1);
				if (ii % spaltenAnzahl == 0) {
					cout << "|";
				}
			}
			else
			{
				cout << "| " << " " << ii + 7 * (i - 1);
				if (ii % spaltenAnzahl == 0) {
					cout << "|";
				}
			}
			
		}
		cout << endl;
	}
	cout << "+";
	for (int i = 1; i <= spaltenAnzahl; i++)
	{
		cout << zeile;
	}
}
