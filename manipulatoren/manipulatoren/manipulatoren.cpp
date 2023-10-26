/*
 * manipulatoren.cpp
 * Einstellungen bei der Ausgabe mit cout
 * Autor: Tarek Saleh
 * Datum: 26.10.2023 (Tag 3)
 *
 */
#include <iostream>
#include <iomanip>		// Manipulatoren
#include <string>
using namespace std;

int main()
{
	int zahl = 0;
	string titel(" oktal \t hexadezimal \t dezimal ");
	//	string titel = " oktal \t hexadezimal \t dezimal ";		// gleichbedeutend; string ist eine Klasse,
																// titel ist ein Objekt dieser Klasse 
	cout << "Eine ganze Zahl eingeben: ";
	cin >> zahl;

	cout << titel << endl;
	cout << uppercase;			// Großbuchstaben (nur in Hexadezimal-Zahlen)
	cout << oct << zahl << "\t\t";
	cout << hex << zahl << "\t\t";
	cout << dec << zahl << endl;
	cout << nouppercase;		// Kleinbuchstaben (nur in Hexadezimal-Zahlen / Voreinstellung) 
	cout << oct << zahl << "\t\t";
	cout << hex << zahl << "\t\t";
	cout << dec << zahl << endl << endl;

	double x = 120.468;
	double y = -17.129;

	// cout.precision(2);
	cout << "Standard:   " << showpos << x << endl;		// bei positiven Zahlen wird ein Pluszeichen vorangestellt
	cout << "scientific: " << scientific << x << endl;	// wissenschaftliche Schreibweise (Exponential-Schreibweise)
	cout << "showpoint:  " << showpoint << y << endl;	// immer Dezimalpunkt und Nachkommastellen anzeigen
	// (also auch wenn die Nachkommastellen 0 sind)
	cout << "Standard:   " << setprecision(2)			// Anzahl der Nachkommastellen (wird kaufmännisch gerundet)
		// gleichbedeutend mit cout.precision(2)
		<< fixed										// auch Nullen nach dem Komma werden ausgegeben
		<< noshowpos << y << endl;						// showpos wieder abschalten

	cout << endl;

	char c;
	string prompt("Geben Sie ein Zeichen und <Return> ein: ");
	cout << prompt;
	cin >> c; // Zeichen einlesen
	zahl = c;

	cout << "Das Zeichen " << c << " hat den Zeichencode: " <<
		zahl << endl;

	cout << uppercase
		<< "   oktal | dezimal | hexadezimal" << endl
		<< oct << setw(8) << zahl << " |"
		<< dec << setw(8) << zahl << " |"
		<< hex << setw(8) << zahl << endl;	// setw() gilt nur für eine Ausgabe,
	// die anderen Manipulatoren gelten unbegrenzt
	// bzw. bis sie wieder abgeschaltet werden
	cout << endl;

	bool b = true;

	cout << boolalpha << "Der boolsche Wert ist: " << b << endl;	// statt 1 wird true ausgegeben

	cout << endl;

	string bezeichnung;
	double preis;

	cout << "Geben Sie die Artikelbezeichnung ein: ";

	// höchstens 16 Zeichen einlesen
	cin >> setw(16);  // oder: cin.width(16); - beides bewirkt, dass nur 16 Zeichen eingelesen werden
	cin >> bezeichnung;

	cin.ignore(cin.rdbuf()->in_avail());	// Tastaturpuffer leeren
	cin.clear();							// Fehlerflags löschen

	cout << "Geben Sie den Artikelpreis ein: ";
	cin >> preis;

	cout << fixed << setprecision(2)		// genau 2 Nachkommastellen, kaufmännisch gerundet
		<< "Artikel: " << bezeichnung << endl
		<< "Preis:   " << preis << endl;

	return 0;
}