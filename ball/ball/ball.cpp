#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "ball.h"
using namespace std;

int main()
{
    int zeile_o = 3, spalte_o = 2, richtung_o = 1, hoehe_o = 0;  // Variablen fÃ¼r Ball "o"
    int zeile_x = 3, spalte_x = 2, richtung_x = 1, hoehe_x = 0;  // Player 2
    int pause_o = 50;  // VerzÃ¶gerung in Millisekunden fÃ¼r Ball "o"
    int pause_x = 60;  // VerzÃ¶gerung in Millisekunden fÃ¼r Ball "x"
    int startverzoegerung_x = 500; // StartverzÃ¶gerung fÃ¼r Ball "x" in Millisekunden

    CLS;
    LOCATE(1, 25); cout << HEADER;
    LOCATE(25, 1); cout << BODEN;

    hidecursor();

    while (true) {
        // Ball "o" bewegen
        LOCATE(zeile_o, spalte_o);
        cout << "o" << endl;        // Ball anzeigen

        Sleep(pause_o);

        // Ball "o" an den WÃ¤nden abprallen lassen
        if (spalte_o == 1 || spalte_o == 79)
        {
            richtung_o = -richtung_o;               // Richtung Ã¤ndern
        }
        if (zeile_o == 24) {                      // Am Boden angekommen?
            hoehe_o = -hoehe_o;
            if (hoehe_o == 0) {
                hoehe_o = -7;                     // Den Ball neu anstoÃŸen
            }
        }
        hoehe_o += 1;                             // Beschleunigung = 1

        LOCATE(zeile_o, spalte_o);
        cout << " ";

        zeile_o += hoehe_o;
        spalte_o += richtung_o;

        // StartverzÃ¶gerung fÃ¼r "x"
        if (startverzoegerung_x > 0) {
            startverzoegerung_x -= pause_o;
        }
        else {
            // "x" bewegen
            LOCATE2(zeile_x, spalte_x);
            cout << "x";
            Sleep(pause_x);

            // ball "x" an den wÃ¤nden abprallen lassen
            if (spalte_x <= 1 || spalte_x >= 79) {
                richtung_x = -richtung_x;
            }
            if (zeile_x == 24) {
                hoehe_x = -hoehe_x;
                if (hoehe_x == 0) {
                    hoehe_x = -7;
                }
            }
            hoehe_x += 1;
            LOCATE2(zeile_x, spalte_x);
            cout << " ";
            zeile_x += hoehe_x;
            spalte_x += richtung_x * 2;
        }

        // schneller und langsamer
        if (_kbhit()) {
            char ch = _getch();
            if (ch == '-') {
                pause_o += 10;
                pause_x += 10;  // Pause fÃ¼r "x" erhÃ¶hen
            }
            else if (ch == '+' && pause_o > 10) {
                pause_o -= 10;
                pause_x -= 10;  // Pause fÃ¼r "x" verringern
            }
        }

        // aktuelle Geschwindigkeit
        LOCATE(1, 26);
        cout << "Aktueller Wert der Intervalle: " << pause_o << " ms (o), " << pause_x << " ms (x)" << endl;
    }

    return 0;
}