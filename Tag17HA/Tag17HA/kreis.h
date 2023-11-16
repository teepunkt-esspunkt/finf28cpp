/*
 * kreis.h
 * Teil des Projekts "formPolymorph"
 * Autor: Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
 *
 */

#ifndef _KREIS_H_
#define _KREIS_H_

#include <iostream>
using namespace std;

const double PI = 3.14159;

class Kreis : public Form
{
private:

	double radius;

public:

	Kreis(double r)				// Konstruktor

		: Form(r * 2 * PI, r* r* PI), radius(r)
	{
	}

	void display()		// wird in abgeleiteten Klassen
						// NICHT als virtual definiert!
	{
		cout << "Kreis" << endl;
		Form::display();
		cout << "Radius:  " << radius << endl << endl;
		return;
	}
};

#endif		// _KREIS_H_
