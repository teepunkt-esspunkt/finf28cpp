/*
 * kofi.cpp
 * Kommentare aus C++ Quelltexten entfernen
 * Autor: Ralf Sasse
 * Datum: 27.10.2023 (FINF28 / Tag 4)
 *
 */

#include <iostream>
using namespace std;

int main()
{
    enum Zustand
    {
        NORMAL,
        STRING,
        EINZEILIGER_KOMMENTAR,
        MEHRZEILIGER_KOMMENTAR,                 
        KOMMENTAR_ANFANG_PRUEFEN,               // vorheriges Zeichen war '/'
        MEHRZEILIGER_KOMMENTAR_ENDE_PRUEFEN,    // vorheriges Zeichen war '*'
        MEHRZEILIGER_KOMMENTAR_ENDE_ERREICHT,	// Vorherige Zeichen waren '*/'
                                                // (notwenig, um Ausgabe des / zu unterdrücken)
        MASKIERUNG_PRUEFEN                      // vorheriges Zeichen war '\'
    };

    Zustand zustand = NORMAL;

    char zeichen = ' ';

    while (cin.get(zeichen))
    {
        switch (zustand)
        {
        case NORMAL:

            if (zeichen == '"')
            {
                zustand = STRING;
                break;
            }

            if (zeichen == '/')
            {
                zustand = KOMMENTAR_ANFANG_PRUEFEN;
                break;
            }

            break;

        case STRING:

            if (zeichen == '"')
            {
                zustand = NORMAL;
                break;
            }

            if (zeichen == '\\')        // nur ein Zeichen; Backslash muss maskiert werden
            {
                zustand = MASKIERUNG_PRUEFEN;
                break;
            }

            break;

        case MASKIERUNG_PRUEFEN:

            zustand = NORMAL;
            break;

        case KOMMENTAR_ANFANG_PRUEFEN:

            if (zeichen == '/')
            {
                zustand = EINZEILIGER_KOMMENTAR;
                break;
            }

            if (zeichen == '*')
            {
                zustand = MEHRZEILIGER_KOMMENTAR;
                break;
            }

            if ((zeichen != '/') && (zeichen != '*'))
            {
                cout << '/';
                zustand = NORMAL;
                break;
            }

            break;

        case EINZEILIGER_KOMMENTAR:

            if (zeichen == '\n')
            {
                zustand = NORMAL;
                break;
            }

            break;

        case MEHRZEILIGER_KOMMENTAR:

            if (zeichen == '*')
            {
                zustand = MEHRZEILIGER_KOMMENTAR_ENDE_PRUEFEN;
                break;
            }

            break;

        case MEHRZEILIGER_KOMMENTAR_ENDE_PRUEFEN:

            if (zeichen == '/')
            {
                zustand = MEHRZEILIGER_KOMMENTAR_ENDE_ERREICHT;
                break;
            }

            if (zeichen != '*')
            {
                zustand = MEHRZEILIGER_KOMMENTAR;
                break;
            }

            break;
        }

        if (zeichen != EOF)
        {
            if (zustand == MEHRZEILIGER_KOMMENTAR_ENDE_ERREICHT)
            {
                zustand = NORMAL;
                continue;
            }

            if ((zustand == NORMAL) || (zustand == STRING) || (zustand == MASKIERUNG_PRUEFEN))
            {
                cout << zeichen;
            }
        }
    }

    return 0;
}
