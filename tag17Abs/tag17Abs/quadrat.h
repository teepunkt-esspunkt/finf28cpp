/*
 * quadrat.h
 * Teil des Projekts "formAbstrakt"
 * Autor: Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
 *
 */

#ifndef _QUADRAT_H_
#define _QUADRAT_H_

#include <iostream>
using namespace std;

class Quadrat : public Form
{
private:

	double seitenlaenge;

public:

	Quadrat(double s)			// Konstruktor

		: Form(s* s, s * 4), seitenlaenge(s)
	{
	}

	void display()		// wird in abgeleiteten Klassen
						// NICHT als virtual definiert!
	{
		cout << "Quadrat" << endl;
		Form::display();
		cout << "Seitenlaenge: " << seitenlaenge << endl;
		return;
	}

	// die rein virtuelle Methode der Basisklasse wird überschrieben
	// (hier das Schlüsselwort "virtual" weglassen!)

	void virtualDisplay()
	{
		cout << "Ich bin ein Quadrat!" << endl << endl;
	}
};

#endif		// _QUADRAT_H_
