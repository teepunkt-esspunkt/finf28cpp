/*
 * formen2.h
 * Teil des Projekts "formOverloaDING"
 * Autor: Bearbeitet von Tarek Saleh, Vorlage von Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
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
	string name;
public:
	Form(double f, double u)
		: flaeche(f), umfang(u)
	{
	}
	void setFlaeche(double f)
	{
		flaeche = f;
	}
	void setUmfang(double u)
	{
		umfang = u;
	}
	void setName(string x)
	{
		this->name = x;
	}

	void display()
	{
		cout << "Form: " << name << endl;
		cout << "Flaeche: " << flaeche << endl;
		cout << "Umfang:  " << umfang << endl;
		return;
	}
	// warum nicht über setter..?
	Form& operator+(Form& f)
	{
		this->name; //


		this->flaeche += f.flaeche;
		this->umfang += f.umfang;

		return *this;	// Rückgabe, wenn der Operator deni ch grade überlade das Objekt verändert


	}
};



class Kreis : public Form
{
private:
	double radius;
	
public:
	Kreis(double r)
		: Form(r * 2 * PI, r* r* PI), radius(r)
	{
		Form:: setName("Kreis");
	}

	void display()
	{
		/*cout << "Kreis" << endl;*/
		Form::display();
		cout << "Radius:  " << radius << endl << endl;
		return;
	}

	bool operator<(const Kreis& k) const
	{
		return (radius < k.radius);
	}

	Kreis& operator++()
	{
		radius++;
		this->setFlaeche(radius * 2 * PI);
		this->setUmfang(radius * radius * PI);

		return *this;	// Rückgabe, wenn der Operator deni ch grade überlade das Objekt verändert


	}
	Kreis& operator++(int)
	{
		radius++;
		this->setFlaeche(radius * 2 * PI);
		this->setUmfang(radius * radius * PI);

		return *this;	// Rückgabe, wenn der Operator deni ch grade überlade das Objekt verändert


	}
};

class Rechteck : public Form
{
private:
	double seitenlaenge1, seitenlaenge2;
public:
	Rechteck(double s1, double s2)
		: Form(s1* s2, s1 * 2 + s2 * 2), seitenlaenge1(s1), seitenlaenge2(s2)
	{
		if (seitenlaenge1 == seitenlaenge2)
		Form::setName("Quadrat in einem Rechteck-Objekt");
		else Form::setName("Rechteck");
	}

	double getSeitenlaenge1() const { return seitenlaenge1; }

	void display()
	{
		//if (seitenlaenge1 == seitenlaenge2)
		//	cout << "Quadrat in einem Rechteck-Objekt" << endl;
		///*else cout << "Recht" << endl;*/
		//else cout << "Rechteck" << endl;
		Form::display();
		cout << "Seitenlaenge 1: " << seitenlaenge1 << endl;
		cout << "Seitenlaenge 2: " << seitenlaenge2 << endl << endl;
		return;
	}
};

class Quadrat : public Rechteck
{
public:
	Quadrat(double s)
		: Rechteck(s, s)
	{
		Form::setName("Quadrat");
	}

	void display()
	{
		/*cout << "Quadrat" << endl;*/
		Form::display();
		cout << "Seitenlaenge: " << Rechteck::getSeitenlaenge1() << endl << endl;
		return;
	}
};

#endif		// _FORMEN_H_
