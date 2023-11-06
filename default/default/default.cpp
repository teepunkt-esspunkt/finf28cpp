/*
 * inline.cpp
 * Definition von inline-Funktionen
 * Autor: Ralf Sasse
 * Datum: 06.11.2023 (FINF28 / Tag 9)
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

inline int flaeche(int laenge, int breite);        // Prototyp

int main()
{
    int x = 3, y = 8, ergebnis;

    ergebnis = flaeche(x, y);

    cout << "Die Flaeche des Rechtecks"
        << " mit der Breite " << setw(4) << x
        << " und der Laenge " << setw(4) << y
        << " betraegt " << setw(4) << ergebnis << endl;

    return 0;
}

inline int flaeche(int laenge, int breite)
{
    return (laenge * breite);
}