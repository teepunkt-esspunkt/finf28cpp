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

class Quadrat : public Form
{
private:
	double seitenlaenge;
public:
	Quadrat(double s)
		: Form(s*s, s*4)
	{
		seitenlaenge = s;
		

	}
	void display() const
	{
		Form::display();
		cout << "Seitenlaenge: " << seitenlaenge << endl << endl;
	}
};


#endif
