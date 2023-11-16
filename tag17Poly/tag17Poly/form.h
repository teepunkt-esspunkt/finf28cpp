/*
 * form.h
 * Teil des Projekts "formPolymorph"
 * Autor: Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
 *
 */

#ifndef _FORMEN_H_
#define _FORMEN_H_

#include <iostream>
using namespace std;

class Form
{
private:

	double flaeche, umfang;

public:

	Form(double f, double u)		// Konstruktor
		: flaeche(f), umfang(u)
	{
	}

	virtual void display()	// unbedingt als virtual definieren!
							// sonst wird keine display-Methode
							// der abgeleiteten Klassen aufgerufen!
	{
		cout << "Flaeche: " << flaeche << endl;
		cout << "Umfang:  " << umfang << endl;
		return;
	}
};

#endif		// _FORMEN_H_
