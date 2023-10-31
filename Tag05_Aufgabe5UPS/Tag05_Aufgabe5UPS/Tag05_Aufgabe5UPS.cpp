/*
 * Tag05_Aufgabe5UPS.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: xx
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;
void linie(int);

int main()
{
    // hilfsvariable fuer ecken
    char h;
    // ausgabe oberer Rand
// ecke oben links
    h = 218;
    cout << h;
    // oberster rand linie mit "T"
    linie(194);
    // ecke oben rechts
    h = 191;
    cout << h;
    cout << endl;
    //cout << "\n";

    // linker rand
    h = 179;
    cout << h;


    // ausgabe ueberschriften (muss ich immer extra setw'n??)
    for (int i = 0; i < 7; i++) {
        cout << setw(4) << "dez"
            << setw(4) << "okt"
            << setw(4) << "hex"
            << setw(3) << " "
            << setw(2) << h;
    }
    cout << endl;
    /* cout << "\n";*/

     // linke seite uberschriften unterstrich
    h = 195;
    cout << h;
    // linie mit "+"
    linie(197);
    // rechte seite uberschriften unterstrich
    h = 180;
    cout << h;
    cout << endl;
    /*cout << "\n";*/

    // linker rand fuer die ansi zeichen schleife
    h = 179;

    // ausgabe aller druckbaren ansi zeichen
    for (int i = 32; i <= 255; i++)
    {
        if ((i - 32) % 7 == 0) {
            cout << h;
        }
        char c = i;


        cout
            << setw(4) << dec << i
            << setw(4) << oct << i
            << setw(4) << hex << i
            << setw(3) << c
            << setw(2) << h
            ;

        if ((i - 31) % 7 == 0) {
            cout << endl;
            /* cout << "\n";*/
        }

    }

    // ecke unten links
    h = 192;
    cout << h;
    // untere linie mit "umgedrehtem  T" Verbinder
    linie(193);
    // ecke unten rechts
    h = 217;
    cout << h;
    cout << endl;
    /* cout << "\n";*/
    return 0;

}

void linie(int k) {
    char c = 196;
    for (int i = 1; i < 7 * ((3 * 4) + 3 + 2); i++) {

        if (i % ((3 * 4) + 3 + 2) == 0) {
            c = k;
        }
        else {
            c = 196;
        }

        cout << c;
    }
}


