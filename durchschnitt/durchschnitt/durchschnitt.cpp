/*
 * durchschnitt.cpp
 * Berechnung des Durchschnittswerts aus Benutzer-Eingaben
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 * 
 */

#include <iostream>
using namespace std;

void pufferLeeren(); // Prototyp

int main()
{
    int eingabe;
    int anzahl = 0;
    double summe = 0;
    double durchschnitt;

    cout << "Bitte geben Sie ganze Zahlen ein: " << endl;
    cout << "(Abbruch mit beliebigem Buchstaben)" << endl;

    while (cin >> eingabe) // true, wenn eine Zahl eingegeben wird
    {
        anzahl++;
        summe += eingabe;

        pufferLeeren();
    }
    durchschnitt = summe / anzahl;

    cout << "Anzahl der eingegebenen Zahlen: " << anzahl << endl
        << "Durchschnitt der eingegebenen Zahlen: " << durchschnitt << endl;

    return 0;

}

void pufferLeeren() 
{
    cin.ignore(cin.rdbuf()->in_avail()); // Puffer leeren
    cin.clear();                            // Fehlerflags löschen(?)

    return;
}
