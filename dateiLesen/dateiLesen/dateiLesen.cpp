/*
 * dateiLesen.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 20.11.2023
 *
 */

#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    ifstream datei("eingabe.txt"); //input file stream
    if (!datei)
    {
        cout << "Fehler beim Oeffnen der Datei" << endl;
        return 1;
    }

    char zeile[80];
    int anzahl = 0;

    while (datei.getline(zeile, 80))
    {
        cout << zeile << endl;

        if (++anzahl == 20)
        {
            anzahl = 0;
            cout << "--- Weiter mit <RETURN> --- " << endl;
            cin.get();
        }
    }
    return 0;

}

