/*
 * passwort.cpp
 * Demonstration von Speicherklassen
 * Autor: Ralf Sasse
 * Datum: 03.11.2023 (FINF28 / Tag 8)
 *
 */

#include <iostream>
using namespace std;

bool getPasswort();		    // Prototyp - nicht als "static" definiert und
// deshalb programmglobal.

extern string passwort;		// funktioniert, denn passwort ist in
                            // "passwortFunktionen.cpp" NICHT "static" und
                            // deshalb programmglobal. Muss aber trotzdem
                            // in den anderen CPP-Dateien dieses Projekts
                            // als "extern" deklariert werden.

int main()
{
    cout << "Kleiner Tipp: Das Passwort lautet: " << passwort << endl << endl;

    if (getPasswort())
    {
        cout << "Passwort korrekt!" << endl;
    }
    else
    {
        cout << "Das war wohl nichts..." << endl;
    }

    return 0;
}