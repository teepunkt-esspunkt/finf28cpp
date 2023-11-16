/*
 * quadrat.h
 * Teil des Projekts "formPolymorph"
 * Autor: Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
 *
 */

#ifndef _QUADRAT_H_
#define _QUADRAT_H_

#include <iostream>
using namespace std;

class Quadrat : public Rechteck
{
private:

	double seitenlaenge;

public:

	Quadrat(double s)			// Konstruktor

		: Rechteck(s, s), seitenlaenge(s)
	{
	}

	void display()		// wird in abgeleiteten Klassen
						// NICHT als virtual definiert!
	{
		cout << "Quadrat" << endl;
		Form::display();
		cout << "Seitenlaenge: " << seitenlaenge << endl << endl;
		return;
	}
};

#endif		// _QUADRAT_H_
