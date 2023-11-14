/*
 * kontoTab.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 14.11.2023
 *
 */

#include <iostream>
#include "konto.h"

int main()
{
	Konto kontoArray[] =
	{
		Konto(1, "Otto Waalkes", 100000.0),
		Konto(2, "Udo Lindenberg", 500000.0),
		Konto(3, "Klaus Kinski", 750000.0),
		Konto(4, "Stefan Raab", 1000000.0),
		Konto(5, "Ralf Sasse", 6.95)

	};

	int anzahl = Konto::getAnzahl();
	cout << "Anzahl der Konten: " << anzahl << endl;

	kontoArray[3].setStand(100000);
	kontoArray[3].display();

	Konto* ptrKonto = &kontoArray[3];

	ptrKonto->setStand(200000);
	(*ptrKonto).setStand(50);

	kontoArray[3].display();

	return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
