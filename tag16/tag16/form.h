/*
 * form.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 15.11.2023
 *
 */
#pragma once
#ifndef _FORM_H_
#define _FORM_H_
#include <iostream>
using namespace std;

class Form
{
private:
	double flaeche;
	double umfang;
public:
	Form(double f, double u)
		:flaeche(f), umfang(u)
	{

	}

	void display() const
	{
		cout << "Flaeche :" << flaeche << ", Umfang: " << umfang << endl;
	}

};


#endif
