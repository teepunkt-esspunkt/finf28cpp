/*
 * vater.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 15.11.2023
 *
 */

#pragma once

#ifndef _VERERBUNG_H_
#define _VERERBUNG_H_

#include <iostream>
#include <iomanip>

using namespace std;

class Vater
{
private:		// geschütztes Eelement
	string name;
	int alter;
	int kontostand;
	
public:

	Vater(string n, int a, int k)
		:name(n), alter(a), kontostand(k)
	{
		/*name = "Sven";
		alter = 69;
		kontostand = 5000;*/
	}

	void setName(string s) { name = s; return; }
	void setAlter(int a) {alter = a; return; }
	void setKontostand(int k) { kontostand = k; return;}

	string getName() const { return name; }
	int getAlter() const { return alter; }
	int getKontostand() const { return kontostand;  }


	void display() const
	{
		cout << "Name: " << name << ", Alter: " << alter << ", Kontostand: " << kontostand << endl;
		return;
	}

};


#endif 