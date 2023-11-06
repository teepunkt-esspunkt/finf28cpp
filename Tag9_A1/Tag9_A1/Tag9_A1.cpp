/*
 * Tag9_A1.cpp
 * Aufgabe 1
Erstellen Sie eine Funktion summe() mit vier Parametern, die die
Summe der Argumente berechnet und zurückgibt.
Parameter: Vier Variablen vom Typ int
Return-Wert: Die Summe vom Typ long int
Deklarieren Sie die beiden letzten Parameter der Funktion summe()
mit dem Default-Argument 0. Testen Sie die Funktion dann mit allen
drei Aufrufmöglichkeiten.
Überladen Sie die Funktion summe() mit einer zweiten Version, die
als Parameter vier Variablen vom Typ double bekommt und deren
Return-Wert vom Typ long double ist.
 * Autor: Tarek Saleh
 * Datum: 6.11.2023
 *
 */

#include <iostream>
using namespace std;

long int summe(int a, int b, int c = 0, int d = 0); 
long double summe(double a, double b, double c = 0, double d = 0);


int main()
{
    cout << "Erste Summe mit allen 4 Werten(2, 2, 3, 3): " << summe(2, 2, 3, 3) << endl << endl;

    cout << "Zweite Summe mit 3 Werten(2, 2, 3): " << summe(2, 2, 3) << endl << endl;

    cout << "Dritte Summe mit 2 Werten(2, 2): " << summe(2, 2) << endl << endl;

    cout << "Erste doubleSumme mit allen 4 Werten(2.5, 2.5, 3.5, 3.5): " << summe(2.5, 2.5, 3.5, 3.5) << endl << endl;

    cout << "Zweite doubleSumme mit 3 Werten(2.5, 2.5, 3.5): " << summe(2.5, 2.5, 3.5) << endl << endl;

    cout << "Dritte doubleSumme mit 2 Werten(2.5, 2.5): " << summe(2.5, 2.5) << endl << endl;

    return 0;

}

long int summe(int a, int b, int c, int d)
{
    long int ergebnis = a + b + c + d;
    return ergebnis;
}

long double summe(double a, double b, double c, double d)
{
    long double ergebnis = a + b + c + d;
    return ergebnis;
}