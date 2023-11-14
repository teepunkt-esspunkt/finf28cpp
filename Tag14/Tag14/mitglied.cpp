/*
 * mitglied.cpp
 * Methoden (ausser den simplen?) der mitglieder Klasse
 * Autor: Tarek Saleh
 * Datum: 13.11.2023
 *
 */

#pragma warning(disable : 4996)	// Fehlermeldung bei
// localtime() unterdücken

#include <iostream>
#include "datum.h"
#include "mitglied.h"
using namespace std;

Mitglied::Mitglied(int mitgliedsnummer, string name, const Datum& geburtstag)
	: mitgliedsnummer(mitgliedsnummer), name(name), geburtstag(geburtstag)
{
	//this->mitgliedsnummer = mitgliedsnummer;
	//this->name = name;
	//this->geburtstag = geburtstag;

}

Mitglied::Mitglied(int mitgliedsnummer, string name, int tag, int monat, int jahr)
	: mitgliedsnummer(mitgliedsnummer), name(name), geburtstag(tag, monat, jahr)
{

	//Datum geburtstag = Datum(tag, monat, jahr);
	//Mitglied::Mitglied(mitgliedsnummer, name, geburtstag);
	//this->mitgliedsnummer = mitgliedsnummer;
	//this->name = name;
	//this->geburtstag = Datum(tag, monat, jahr);

}

Mitglied* Mitglied::ptrVorstand = nullptr;
Mitglied* Mitglied::getVorstand()
{
	return ptrVorstand;
}
void Mitglied::setVorstand(Mitglied* vorstand)
{
	ptrVorstand = vorstand;
}
void Mitglied::ausgabe() const
{
	cout << "-------------------------------------------------------" << endl
		<< "Mitgliedsnummer: " << this->mitgliedsnummer << endl
		<< "Mitglied: " << this->name << endl
		<< "Geburtstag: " << this->geburtstag.asString() << endl
		<< "-------------------------------------------------------" << endl;

}
