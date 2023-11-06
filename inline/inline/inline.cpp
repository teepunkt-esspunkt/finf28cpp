/*
 * inline.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 6.11.2023
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

inline int flaeche(int laenge, int breite); // Prototyp


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

int flaeche(int laenge, int breite)
{
    return(laenge * breite);
}
