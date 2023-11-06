/*
 * swap.cpp
 * Rekursive Text-Umkehrung
 * Autor: Ralf Sasse
 * Datum: 06.11.2023 (FINF28 / Tag 9)
 *
 */

#include <iostream>
using namespace std;

string swap(string);        // Prototyp

int main()
{
    string eingabe = "PROFIL";

    string ausgabe = swap(eingabe);

    cout << ausgabe << endl;

    return 0;
}

string swap(string text)
{
    if (text.length() == 0)     // Abbruch-Kriterium / Rekursions-Ende
    {
        return text;
    }
    else                        // Rekursions-Schritt
    {
        char erstesZeichen = text[0];               // erste Zeichen "merken"
        string restlicheZeichen = text.substr(1);   // restliche Zeichen "abschneiden"
        string ergebnis = swap(restlicheZeichen);
        return ergebnis + erstesZeichen;
    }
}