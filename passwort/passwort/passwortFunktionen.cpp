/*
* passwortFunktionen.cpp
*
* Die Funktionen getPasswort() und zeitdiff()
* zum Einlesen und Überprüfen eines Passworts.
* Autor: Ralf Sasse
* Datum: 03.11.2023 (FINF28 / Tag 8)
*
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

static long zeitdiff();		// Prototyp - das "static" macht diese Funktion
// nur innerhalb dieses Moduls sichtbar (modulglobal)

string passwort = "Geheim";	// Passwort - nicht "static" und deshalb
// programmglobal. Kann also auch in den anderen
// CPP-Dateien dieses Projekts gesehen werden,
// WENN es dort als "extern" deklariert wird.

// Die beiden folgenden Variablen sind "static"
// und deshalb nur in diesem Modul sichtbar

static long maxanzahl = 3;	// Maximale Anzahl der Eingabe-Versuche
static long maxzeit = 30;	// Zeitlimit in Sekunden

bool getPasswort()
{
	bool ok_flag = false;
	string wort;
	int anzahl = 0, zeit = 0;

	zeitdiff();				// Die Stoppuhr starten

	// Die while-Schleife wird ausgeführt, solange das richtige Passwort
	// noch NICHT eingegeben und das Zeitlimit NICHT überschritten wurde.

	while (ok_flag != true && ++anzahl <= maxanzahl)
	{
		cout << "Geben Sie das Passwort ein : ";

		cin.sync();					// frühere Eingaben ignorieren

		cin >> setw(20) >> wort;	// maximal 20 Zeichen einlesen

		zeit += zeitdiff();			// Zeit seit der letzten Eingabe addieren

		if (zeit > maxzeit)			// Wenn Zeitlimit überschritten...
		{
			cout << "Zeitlimit ueberschritten!" << endl;

			break;					// ... Schleife verlassen
		}							// Programm wird danach in main() beendet

		if (wort != passwort)
		{
			cout << "Passwort ungueltig!" << endl;
		}
		else
		{
			ok_flag = true;			// Korrektes Passwort eingegeben
		}
	}
	return ok_flag;					// Ergebnis: true bei korrektem Passwort
}

static long zeitdiff()			// liefert die Anzahl Sekunden seit dem letzten Aufruf
{
	static time_t sek = 0;		// Zeit des letzten Aufrufs. Das "static" bewirkt hier,
	// dass die Variable nur beim ersten Funktionsaufruf
	// initialisiert wird. Ihr Inhalt wird nicht am Ende
	// der Funktion gelöscht, sondern bleibt bis zum
	// nächsten Funktionsaufruf erhalten.

	time_t altsek = sek;		// Alte Zeit merken. altsek ist nicht "static" und wird
	// deshalb am Ende jedes Funktionsdurchlaufs gelöscht.

	time(&sek);					// Neue Zeit lesen. Bleibt bis zum nächsten Funktions-
	// aufruf erhalten, weil sek als "static" definiert ist.

	return long(sek - altsek);	// Differenz zwischen alter und neuer Zeit zurückgeben.
}