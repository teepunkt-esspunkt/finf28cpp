/*
* swap2.cpp
*
* Rekursive Funktion zum Umdrehen eines Strings (Variante 2)
*
*/

#include <iostream>
using namespace std;

void getput();

int main()
{
    cout << "Bitte geben Sie einen Text ein: ";

    getput();       // Erster Aufruf der rekursiven Funktion

    cout << endl << "Bye Bye!" << endl;

    return 0;
}

void getput()
{
    char c;

    // Ein Zeichen vom Tastaturpuffer einlesen. Falls es kein <RETURN>-Zeichen ist,
    // ist die Bedingung erfüllt und die nächste Instanz von getput() wird aufgerufen.
    // Die letzte Instanz findet das <RETURN>-Zeichen, wodurch die Bedingung NICHT
    // mehr erfüllt und damit das Abbruch-Kriterium erreicht ist.

    if (cin.get(c) && c != '\n')
    {
        getput();
    }

    cout.put(c);    // Am Ende jeder Rekursion wird das Zeichen, dass sich getput()
    // gemerkt hat, wieder ausgegeben. Da die letzte Rekursion diese
    // Anweisung zuerst ausführt, erscheint der String in
    // umgekehrter Reihenfolge.
}