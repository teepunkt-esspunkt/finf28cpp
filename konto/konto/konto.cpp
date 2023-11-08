/*
 * konto.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#include <iostream>
#include <iomanip>
#include "konto.h"
using namespace std;

bool Konto::init(unsigned long iNummer, const string& iName, double iStand)
{
    name = iName;
    nummer = iNummer;
    stand = iStand;

    return 0;

}

void Konto::setStand(double iStand)
{
    stand += iStand;

    return;
}

void Konto::setName(const string& iname)
{
    name = iname;
    return;
}

void Konto::display()
{
    cout << fixed << setprecision(2)
        << "-------------------------------------------------------" << endl
        << "Kontoinhaber:   " << name << endl
        << "Kontonummer:    " << nummer << endl
        << "Kontostand:     " << stand << endl
        << "-------------------------------------------------------" << endl;

    return;
}