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

using namespace std;


class Konto
{
private:		// geschützte  elemente (gekapselt)
	unsigned long nummer;	// kontonummer
	string name;			// kontoinhaber
	double stand;			// kontostand

public:			// öffentliche schnittstelle
	bool init(unsigned long, const string&, double); // Prototyp, strings lieber referenzieren als kopieren aus performance gründen
	void setStand(double);
	void setName(const string&);
	void display();

};







#endif		// von #ifndef _KONTO_H_