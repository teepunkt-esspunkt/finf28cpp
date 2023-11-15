/*
 * testklasse.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 10.11.2023
 *
 */

#include <iostream>
#include "testklasse.h"
using namespace std;

void funktion(); //Prototyp
// Klassenvariable, muss an dieser Stelle definiert werden
// und existiert nur einmal für die gesamte klasse
// (und nicht für jedes objekt einzeln)

int Testklasse::anzahl = 0;
int main()
{
    
    Testklasse objekt1(42);
    Testklasse objekt2;
    const Testklasse konstantesObjekt(12);

    //Testklasse kopiertesObjekt = objekt1 
    Testklasse kopiertesObjekt(objekt1);

    cout << "Inhalt der Variable von objekt1: " << objekt1.getVariable() << endl;
    cout << "Inhalt der Variable von objekt2: " << objekt2.getVariable() << endl;
    cout << "Inhalt der Variable von konstantesObjekt: " << konstantesObjekt.getVariable() << endl;
    cout << "Inhalt der Variable von kopiertesObjekt1: " << kopiertesObjekt.getVariable() << endl;

    cout << "Anzahl der Objekte: " << Testklasse::getAnzahl() << endl; // 4
    cout << "Anzahl der Objekte: " << objekt1.getAnzahl() << endl; // geht auch: 4
    cout << "Anzahl der Objekte: " << konstantesObjekt.getAnzahl() << endl;
    cout << "Anzahl der Objekte: " << kopiertesObjekt.getAnzahl() << endl;

    funktion();
    cout << "Anzahl der Objekte: " << Testklasse::getAnzahl() << endl; // 4 

    funktion();

    return 0;

}

void funktion()
{
    static Testklasse lokalesObjekt(99);
    cout << "Start der funktion()" << endl;
    cout << "Inhalt der Variable von lokalesObjekt: " << lokalesObjekt.getVariable() << endl;
    cout << "Anzahl der Objekte: " << Testklasse::getAnzahl() << endl;
    cout << "Ende der funktion()" << endl;

    lokalesObjekt.setVariable(64);

    return;
}