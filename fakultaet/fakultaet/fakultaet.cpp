/*
 * fakultaet.cpp
 * Berechnen der Fakultaet einer eingegebenen Zahl
 * (also dsa Produkt aller Zahlen bis einschließlich der eingegebenen Zahl,
 * also Fakultät von 4 = 1 * 2 * 3 * 4 = 24)
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
using namespace std;

int main()
{
     long double zahl, fakultaet = 1;


    cout << "Berehnung der Fakultaet" << endl;
    cout << "Bitte geben Sie eine Zahl ein: ";

    cin >> zahl;

    if (zahl >= 171)
    {
        zahl = 170;
        cout << "Die Zahl ist zu gross!" << endl;
    }

    for (int i = 1; i <= zahl; i++)
    {
        
        fakultaet = fakultaet * i;
    }

    cout << "Die Fakultaet von " << zahl << " ist " << fakultaet << endl;

    return 0;

}
// Wertebereich von Fließkomma-Datentypen: 
// float            -> +- 3.4 * 10 hoch 38 (38 nullen)
// double           -> +- 1.7 * 10 hoch 308 (308 nullen)
// long double      -> 1.1 * 10 hoch 4932
