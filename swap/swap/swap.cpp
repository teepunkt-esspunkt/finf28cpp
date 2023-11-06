/*
 * swap.cpp
 * Rekursive Text Umkehrung (RekTUm)
 * Autor: Tarek Saleh
 * Datum: 6.6.2023
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
    if (text.length() == 0)   // Abbruch Kriterium / Rekursions-Ende
    {
        return text;
    }
    else        // Rekursions-Schritt
    {
        char erstesZeichen = text[0];           // erste Zeichen "merken"
        string restlicheZeichen = text.substr(1); // restliche Zeichen abschneiden
        string ergebnis = swap(restlicheZeichen);
        return ergebnis + erstesZeichen;


    }

}