/*
 * kreis.cpp
 * Erstes C++ Programm mit Makros und Header-Datei
 * Teil des Projekts "makros"
 * Autor: Ralf Sasse
 * Datum: 01.11.2023 (FINF28 / Tag 6)
 *
 */

#include <iostream>
#include "myMakros.h"
using namespace std;

void kreis()
{
	double flaeche, umfang, radius = 1.5;

	flaeche = PI * radius * radius;
	umfang = 2 * PI * radius;

	cout << "Kreisberechnung" << endl;

	cout << "Radius:  " << radius << endl
		<< "Umfang:  " << umfang << endl
		<< "Flaeche: " << flaeche << endl;

	return;
}

void hallo()
{
	cout << "Hallo Welt" << endl;
	return;
}