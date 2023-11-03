/*
 * passwortFunktionen.cpp
 * Die Funktionen getPasswort() und zeitdiff()
 * zum Einlesen und Überprüfen eines Passworts
 * Autor: Tarek Saleh
 * Datum: 03.11.23
 *
 */

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;



static long zeitdiff();		// Prototyp - stattic macht diese Funktion
							// nur innerhalb dieses Moduls sichtbar (modulglobal)
							

string passwort = "Geheim";	// Passwort nicht static und deshalb programmglobal
							// kann also auch in anderen cpp dateien dieses projekts gesehen werden
							// WENN es dorch als extern deklariert wurde
long maxanzahl = 3, maxzeit = 30; // Limits

bool getPasswort()
{
	bool ok_flag = false;
	string wort;
	int anzahl = 0, zeit = 0;

	zeitdiff();

	while (ok_flag != true && ++anzahl <= maxanzahl)
	{
	
		cout << "Geben Sie das Passwort ein: ";
		cin.sync();
		cin >> setw(20) >> wort;

		if (zeit > maxzeit) {
			cout << "Zeitlimit ueberschritten!" << endl;
			break;
		}

		if (wort != passwort)
		{
			cout << "Passwort ungueltig!" << endl;

		}
		else {
			ok_flag = true;
		}
	}
	return ok_flag;

}

static long zeitdiff()		// liefert die Anzahl Sekunden seit dem letzten Aufruf
{
	static time_t sek = 0;

	time_t altsek = sek;

	time(&sek);
	return long(sek - altsek);

}