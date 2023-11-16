/*
 * quadrat.h
 * Teil des Projekts "formPolymorph"
 * Autor: Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
 *
 */

#ifndef _RECHTECK_H_
#define _RECHTECK_H_

#include <iostream>
using namespace std;

class Rechteck : public Form
{
private:

	double seitenlaengea;
	double seitenlaengeb;

public:

	Rechteck(double a, double b)			// Konstruktor

		: Form(a * b, a * 2 + b * 2), seitenlaengea(a), seitenlaengeb(b)
	{
	}

	void display()		// wird in abgeleiteten Klassen
		// NICHT als virtual definiert!
	{
		cout << "Rechteck" << endl;
		Form::display();
		cout << "Seitenlaenge-A: " << seitenlaengea << ", Seitenlaenge-B: " << seitenlaengeb << endl << endl;
		return;
	}
};

#endif		
