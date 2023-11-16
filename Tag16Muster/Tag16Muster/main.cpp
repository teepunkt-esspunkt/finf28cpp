/*
 * main.cpp
 * Teil des Projekts "formen"
 * Autor: Ralf Sasse
 * Datum: 15.11.2023 (FINF28 / Tag 16)
 *
 */

#include <iostream>
#include "formen.h"

using namespace std;

int main()
{
	Kreis kreis(5);
	Quadrat quadrat(5);

	kreis.display();
	quadrat.display();

	return 0;
}
