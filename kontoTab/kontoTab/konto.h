/*
 * konto.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#pragma once


#ifndef _KONTO_H_
#define _KONTO_H_

#include <iostream>
#include <iomanip>

using namespace std;


class Konto
{
private:		// geschützte  elemente (gekapselt)
	unsigned long nummer;	// kontonummer
	string name;			// kontoinhaber
	double stand;			// kontostand

	static int anzahl;			// Objekt-Zaehler 

public:			// öffentliche schnittstelle

	Konto(unsigned long, const string & = "hah", double = 1);
	Konto();

	// Getter sind inline Methoden weil sie direkt in der Klasse definiert
	// in der Klasse definiert sind
	// die Angabe const bedeutet dass diese Methoden
	// auch auf konstante Objekte angewendet werden können
	unsigned long getNummer() const {	return nummer; }
	string getName() const { return name; }
	double getStand() const { return stand; }
	// Setter sind inline Methoden weil sie direkt in der Klasse definiert
	// in der Klasse definiert sind
	// hier fehlt die Angabe const weil diese Methoden Variablen
	// im Objekt verändern und deshalb nicht auf konstante Objekte
	// angewendet werden können
	void setStand(double iStand) { this->stand += iStand; }
	void setName(const string& iName) { this->name = iName; }
	void setNummer(unsigned long iNummer) { this->nummer = iNummer; } // durch this kann man selbe variablen benutzen



	inline void display();
	static int getAnzahl() { return Konto::anzahl; }
	~Konto(void);

};

// ausserhalb der Klassen Definition kann eine Methode
// durch das Schluesselwort "inline" als inline definiert werden

inline void Konto::display()
{
	cout << fixed << setprecision(2)
		<< "-------------------------------------------------------" << endl
		<< "Kontoinhaber:   " << name << endl
		<< "Kontonummer:    " << nummer << endl
		<< "Kontostand:     " << stand << endl
		<< "-------------------------------------------------------" << endl;

	return;
}
//




#endif		// von #ifndef _KONTO_H_