/*
 * ball.cpp
 * Erstes C++ Programm mit Makros und Header-Datei
 * Autor: Ralf Sasse
 * Datum: 01.11.2023 (FINF28 / Tag 6)
 *
 */

#include "ball.h"

int main()
{
    int zeile = 3;      // senkrechte Position
    int spalte = 2;     // waagerechte Position
    int richtung = 1;   // 1 = rechts, -1: links
    int hoehe = 0;
    int taste;
    int pause = 50;     // VerzÃ¶gerung in Millisekunden

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
            richtung = -richtung;           // Richtung Ã¤ndern
        }

        if (zeile == 24)                    // Am Boden?
        {
            hoehe = -hoehe;
            if (hoehe == 0)
            {
                hoehe = -7;                 // Neu anstoÃŸen              
            }
        }

        hoehe += 1;                         // Beschleunigung = 1

        LOCATE(zeile, spalte);
        cout << " ";                        // Anzeige lÃ¶schen

        zeile += hoehe;
        spalte += richtung;                 // Neue Position des Balls

        if (_kbhit())
        {
            taste = _getch();

            if (taste == '+')               // Geschwindigkeit erhÃ¶hen
            {
                pause = MAX(pause - 50, 20);
            }

            if (taste == '-')               // Geschwindigkeit vermindern
            {
                pause = MIN(pause + 50, 100);
            }
        }
    }

    return 0;
}