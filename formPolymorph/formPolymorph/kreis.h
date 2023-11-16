/*
 * kreis.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: xx
 *
 */
#pragma once
#ifndef _KREIS_H_
#define _KREIS_H_
#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI (3.141592653589793238462643383279502884L)
#endif
#include "form.h"
using namespace std;

class Kreis : public Form
{
private:
	double radius;
public:
	Kreis(double r)
		: Form(M_PI * (r * r), M_PI * 2 * r)
	{
		radius = r;


	}
	void display() const
	{
		Form::display();
		cout << "Radius: " << radius << endl << endl;
	}
};


#endif
