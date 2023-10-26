/*
 * Tag3_Aufgabe1.cpp
 * Programm zum entfernen aller Kommentare
 * Autor: Tarek Saleh
 * Datum: 26.10.2023
 *
 */

#include <iostream>
#include <string>


using namespace std;


void check(string);


string ausgabe;
string zeile;

bool skip = false;


int main()
{
	// Zeilen einlesen
	while (getline(cin, zeile))
	{
		// Pruefen ob Zeile, mit /*  oder */ beginnt oder mit */ endet
		check(zeile);
		
		if (skip == false)
		{
			// zum entfernen der fuehrenden whitespaces
			size_t startPos = zeile.find_first_not_of(" \t");
			if (startPos != string::npos)
			{
				zeile = zeile.substr(startPos);
			}

			// nichts machen, wenn Zeile mit // oder /*  beginnt oder */ endet sonst speichern
			if (zeile.length() >= 2 && (zeile.substr(0, 2) == "//" || zeile.substr(0, 2) == "/*" || zeile.substr(zeile.length() - 2) == "*/"))
			{
			}
			else
			{
				ausgabe += zeile + '\n';
			}
			if (cin.eof())
			{
				break;
			}
		}
	}
	cout << ausgabe;
}

void check(string zeile2)
{
	// Speichern abschalten zwischen mehrzeiligen kommentaren, letzte zeile muss aber extra entfernt werden
	if (zeile2.length() >= 2 && zeile2.substr(0, 2) == "/*")
	{
		skip = true;
	}
	if (zeile2.length() >= 2 && zeile2.substr(zeile2.length() - 2) == "*/")
	{
		skip = false;
	}
}