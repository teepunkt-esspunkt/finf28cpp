/*
 * ball.cpp
 * Erstes C++ Programm mit Makros und Header-Datei
 * Autor: Ralf Sasse
 * Datum: 01.11.2023 (FINF28 / Tag 6)
 *
 */

#include <iostream>
#include <Windows.h>
#include "ball.h"
using namespace std;

int main()
{
    int zeile = 3;      // senkrechte Position
    int spalte = 2;     // waagerechte Position
    int richtung = 1;   // 1 = rechts, -1: links
    int hoehe = 0;
    int pause = 50;     // Verzögerung in Millisekunden

    CLS;
    LOCATE(1, 25); cout << HEADER;
    LOCATE(25, 1); cout << BODEN;

    hidecursor();

    while (true)
    {
        LOCATE(zeile, spalte);
        cout << "o";                        // Ball anzeigen

        Sleep(pause);

        if (spalte == 1 || spalte == 79)    // An einer Wand?
        {
            richtung = -richtung;           // Richtung ändern
        }

        if (zeile == 24)                    // Am Boden?
        {
            hoehe = -hoehe;
            if (hoehe == 0)
            {
                hoehe = -7;                 // Neu anstoßen              
            }
        }

        hoehe += 1;                         // Beschleunigung = 1

        LOCATE(zeile, spalte);
        cout << " ";                        // Anzeige löschen

        zeile += hoehe;
        spalte += richtung;                 // Neue Position des Balls
    }

    return 0;
}
