/*
 * dateiSchreiben.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 20.11.2023
 *
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string eingabe;
    ofstream ausgabe;

    ausgabe.open("text.txt", ios::app); // ios::app -> Neue Zeile an Datei anhaengen
                                        //(sonst wuerde eine vorhandene Datei geloescht werden)

    cout << "Bitte TExt eingeben (beenden mit STRG + Z)" << endl;

    while (getline(cin, eingabe)) // liest immer nur EIN wort!
    {
        ausgabe << eingabe << endl;
    }

    ausgabe.close();



    return 0;

}

