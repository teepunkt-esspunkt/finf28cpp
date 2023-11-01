// ball.cpp 
// 
//

#include <iostream>
#include <Windows.h>
#include "ball2.h"
using namespace std;

int main()
{
    int zeile = 3;          // senkrechte Position
    int spalte = 2;         // waagerechte Position
    int richtung = 1;       // 1 = rechts , 2 = links
    int hoehe = 0;
    int pause = 50;        // Verzögerung in Millisekunden

    CLS;
    LOCATE(1, 25); cout << HEADER;
    LOCATE(25, 1); cout << BODEN;

    while (true) {

        LOCATE(zeile, spalte);
        cout << "o" << endl;        // Ball anzeigen

        Sleep(pause);

        if (spalte == 1 || spalte == 79) {    // an einer "Wand" angekommen?

            richtung = -richtung;               // Richtung ändern

        }
        if (zeile == 24) {                      // Am Boden angekommen?

            hoehe = -hoehe;
            if (hoehe == 0) {

                hoehe = -7;                     // Den Ball neu anstoßen

            }

        }

        hoehe += 1;                             // Beschleunigung = 1

        LOCATE(zeile, spalte);
        cout << " ";

        zeile += hoehe;
        spalte += richtung;
    }

    return 0;
}

