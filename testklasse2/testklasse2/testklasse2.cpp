/*
 * testklasse.cpp
 * Programm zum Testen von Klassen und Methoden
 * Autor: Ralf Sasse
 * Datum: 10.11.2023 (FINF28 / Tag 13)
 *
 */

#include <iostream>
#include "testklasse.h"
using namespace std;

void funktion();            // Prototyp

// Klassen-Variable, MUSS an dieser Stelle definiert werden
// und existiert NUR EINMAL fÃ¼r die gesamte Klasse
// (und NICHT fÃ¼r jedes Objekt einzeln!)

int Testklasse::anzahl = 0;

int main()
{
    Testklasse objekt1(42);
    Testklasse objekt2;
    const Testklasse konstantesObjekt(12);

    Testklasse kopiertesObjekt(objekt1);

    cout << "Inhalt der Variable von objekt1: " << objekt1.getVariable() << endl;
    cout << "Inhalt der Variable von objekt2: " << objekt2.getVariable() << endl;
    cout << "Inhalt der Variable von konstantesObjekt: " << konstantesObjekt.getVariable() << endl;
    cout << "Inhalt der Variable von kopiertesObjekt: " << kopiertesObjekt.getVariable() << endl;

    cout << "Anzahl der Objekte: " << Testklasse::getAnzahl() << endl;

    cout << "Anzahl der Objekte: " << objekt1.getAnzahl() << endl;  // geht auch: 4

    funktion();

    cout << "Anzahl der Objekte: " << Testklasse::getAnzahl() << endl;

    return 0;
}

void funktion()
{
    Testklasse lokalesObjekt(42);

    cout << "Start der funktion()" << endl;
    cout << "Inhalt der Variable von lokalesObjekt: " << lokalesObjekt.getVariable() << endl;
    cout << "Anzahl der Objekte: " << Testklasse::getAnzahl() << endl;
    cout << "Ende der funktion()" << endl;

    return;
}

/*

Ausgabe:
--------

Inhalt der Variable von objekt1: 42
Inhalt der Variable von objekt2: 1
Inhalt der Variable von konstantesObjekt: 12
Inhalt der Variable von kopiertesObjekt: 42
Anzahl der Objekte: 4
Anzahl der Objekte: 4
Start der funktion()
Inhalt der Variable von lokalesObjekt: 42
Anzahl der Objekte: 5
Ende der funktion()
Anzahl der Objekte: 4

*/