/*
 * meldung.cpp
 * Funktionsaufrufe
 * 
 */

#include <iostream>
using namespace std;

// Prototypen
void linie();
void meldung();

int main()      // Hauptprogramm
{
    cout << "Hallo! Das Programm startet in main()" << endl;

    linie();
    meldung();
    linie();

    cout << "Ciao! Das Programm endet in main()" << endl;

    return 0;
}

void linie()
{
    cout << "------------------------------" << endl;
    
    return;
}
void meldung()
{
    cout << "In der Funktion meldung()" << endl;

    return;
}