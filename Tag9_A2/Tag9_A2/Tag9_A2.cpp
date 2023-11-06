/*
 * Tag9_A2.cpp
 * Erstellen Sie eine Funktion fakultaet(), die die Fakultät einer Zahl
berechnet. Die Fakultät ist das Produkt aller Ganzzahlen von 1 bis n.
Sonderfall: Die Fakultät von 0 ist 1.
Parameter: Eine Variable vom Typ unsigned int
Return-Wert: Die Fakultät vom Typ long double
Auch von dieser Funktion sollen zwei Versionen erstellt werden.
In der ersten Version soll die Fakultät iterativ (also mit einer Schleife)
berechnet werden. In der zweiten Version soll dies rekursiv (also
durch Selbstaufruf der Funktion) erfolgen
 * Autor: Tarek Saleh
 * Datum: 6.11.2023
 *
 */

#include <iostream>
using namespace std;

long double fakuIter(unsigned int a);
long double fakuReku(unsigned int a);

int main()
{
    cout << "Fakultaeten!" << endl << endl;
    cout << "Fakultaet iterativ: " << fakuIter(5) << endl;

    cout << "Fakultaet rekursiv: " << fakuReku(5);

    return 0;

}

long double fakuIter(unsigned int a)
{
    
    long double ergebnis = a;

    if(a > 1)
    {
        for (int i = a; i > 1 ; i--)
        {
            ergebnis *= (i - 1);
        }
    }
    else {
        ergebnis = 1;
    }
    return ergebnis;
}

long double fakuReku(unsigned int a)
{
    if (a <= 1)
    {
        return 1;
    }

    return a * fakuReku(a - 1);
}
