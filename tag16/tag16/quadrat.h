/*
 * quadrat.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: xx
 *
 */
#pragma once
#ifndef _QUADRAT_H_
#define _QUADRAT_H_
#include <iostream>
#include "form.h"
using namespace std;

class Quadrat
{
private:
	double seitenlaenge;
public:
	Quadrat(double s)
	{
		seitenlaenge = s;
		flaeche = seitenlaenge * seitenlaenge;
		umfang = seitenlaenge * 4;

	}
};


#endif
