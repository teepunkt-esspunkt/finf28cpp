/*
 * formen.h
 * Teil des Projekts "formen"
 * Autor: Ralf Sasse
 * Datum: 15.11.2023 (FINF28 / Tag 16)
 *
 */

#ifndef _FORMEN_H_
#define _FORMEN_H_

#include <iostream>
using namespace std;

const double PI = 3.14159;

class Form
{
private:
	double flaeche, umfang;
public:
	Form(double f, double u)
		: flaeche(f), umfang(u)
	{
	}

	void display()
	{
		cout << "Flaeche: " << flaeche << endl;
		cout << "Umfang:  " << umfang << endl;
		return;
	}
};

class Kreis : public Form
{
private:
	double radius;
public:
	Kreis(double r)
		: Form(r * 2 * PI, r * r * PI), radius(r)
	{
	}

	void display()
	{
		cout << "Kreis" << endl;
		Form::display();
		cout << "Radius:  " << radius << endl << endl;
		return;
	}
};

class Quadrat : public Form
{
private:
	double seitenlaenge;
public:
	Quadrat(double s)
		: Form(s * s, s * 4), seitenlaenge(s)
	{
	}

	void display()
	{
		cout << "Quadrat" << endl;
		Form::display();
		cout << "Seitenlaenge: " << seitenlaenge << endl << endl;
		return;
	}
};

#endif		// _FORMEN_H_
