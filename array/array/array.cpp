/*
 * array.cpp
 * Zahlen in einen Vektor einlesen und wieder ausgeben
 * Autor: Tarek Saleh
 * Datum: 14.11.2023
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXANZ = 10;
    int array[MAXANZ];
    int x, i, anzahl;

    cout << "Bis zu 10 Zahlen eingeben" << endl
        << "(Abbruch mit einem Buchstaben): " << endl;

    for (i = 0; i < MAXANZ && cin >> x; ++i)
    {
        array[i] = x;

    }
    anzahl = i;

    cout << "Die eingegebenen Zahlen sind: " << endl;
    
    for (i = 0; i < MAXANZ; ++i)
    {
        cout << setw(8) << array[i];

    }
    cout << endl;
    return 0;

}

