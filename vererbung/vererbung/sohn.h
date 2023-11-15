/*
 * sohn.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 15.11.2023
 *
 */

#pragma once

#ifndef _SOHN_H_
#define _SOHN_H_
#include <iostream>
#include <iomanip>
#include "vater.h"
using namespace std;

class Sohn : public Vater
{
private:
	int taschengeld;

public:
	Sohn(string n, int a, int k, int t)
		: Vater(n, a, k), taschengeld(t)
	{

	}
	void setTaschengeld(int t) { taschengeld = t; return; }
	int getTaschengeld() const { return taschengeld; }
	void display() const
	{
		cout << "Name: " << Vater::getName() 
			<< ", Alter: " << Vater::getAlter()
			<< ", Kontostand: " << Vater::getKontostand()
			<< ", Taschengeld: " << taschengeld << endl;

	}
};

#endif