/*
 * main.cpp
 * formOverload
 * Autor: Bearbeitet von Tarek Saleh, Vorlage von Ralf Sasse
 * Datum: 17.11.2023 (FINF28 / Tag 17)
 *
 */

#include <iostream>
#include "formen2.h"

using namespace std;

int main()
{
	Kreis kreis(5);
	Quadrat quadrat(5);
	Rechteck rechteck(5, 4);
	Rechteck rechteck2(5, 5);

	kreis.display();
	quadrat.display();
	rechteck.display();
	rechteck2.display();

	Kreis neuerKreis(4);
	neuerKreis.display();

	if (neuerKreis < kreis)
		cout << "neuerKreis ist kleiner als Kreis" << endl;
	else cout << "neuerKreis ist nicht kleiner als Kreis" << endl;

	++neuerKreis;
	neuerKreis.display();
	neuerKreis++;
	neuerKreis.display();


	return 0;
}
