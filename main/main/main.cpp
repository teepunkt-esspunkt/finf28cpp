/*
 * main.cpp
 * Erstes C++ Programm mit Makros und Header-Datei
 * Teil des Projekts "makros"
 * Autor: Ralf Sasse
 * Datum: 01.11.2023 (FINF28 / Tag 6)
 *
 */

#include <iostream>
#include <iomanip> 
#include "myMakros.h"
using namespace std;

int main()
{
    hallo();
    kreis();

    HEADER;

    // Tabellenkopf:
    cout << setw(16) << "x" << setw(20) << "sin(x)\n"
        << " -----------------------------------------"
        << fixed << endl;
    double x;
    for (x = START; x < ENDE + SCHRITT / 2; x += SCHRITT)
    {
        cout << setw(20) << x << setw(16) << sin(x)
            << endl;
    }
    return 0;
}
