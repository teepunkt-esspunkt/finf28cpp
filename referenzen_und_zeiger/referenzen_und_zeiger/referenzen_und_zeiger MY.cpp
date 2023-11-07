/*
 * referenzen_und_zeiger.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 7.11.2023
 *
 */

#include <iostream>
using namespace std;

int funktion1(string& argument);        // Funktionsaufruf mit Referenz
int funktion2(const string& argument);  // Funktionsaufruf mit Referenz, nur Lesezugriff
int funktion3(string* argument);    // Funktionsaufruf mit Zeiger (call-by-reference)
int funktion4(string argument);     // Funktionsaufruf mit Wert (call-by-value)

int main()
{
    string food = "Pizza";
    cout << "food = " << food << endl;
    cout << "&food = " << &food << endl;
    string& futter = food;   // "linkt" die beiden namen mit derselben variablen zusammen // einmal gelinkt, nicht veränderbar
    cout << "futter = " << futter << endl;
    food = "Hamburger";
    cout << "futter = " << futter << endl;
    cout << "&futter = " << &futter << endl;
    futter = "Hot Dot";
    cout << "futter = " << futter << endl;
    cout << "food = " << food << endl;

    int a = 1;
    int& b = a;
    a = 2;
    cout << "a+b = " << a + b << endl;
    cout << "Adresse von a: " << &a << endl;
    cout << "Adresse von b: " << &b << endl;

    string* zeiger = &food;  // Jede Zeigervariable ist immer 64 bit groß auf einem 64 bit system
                                // Zeiger ist eine neue Variable, der Inhalt ist eine Speicheradresse die auf etwas andere zeigt
    cout << "zeiger = " << zeiger << endl;
    cout << "Adresse von zeiger: " << &zeiger << endl;

    zeiger = &food;
    *zeiger = "Currywurst";
    cout << "food = " << food << endl;
    cout << "futter = " << futter << endl;
    cout << "zeiger zeigt auf " << *zeiger << endl;
    food = "haha";
    cout << "zeiger zeigt auf " << *zeiger << endl;
    
    string drink = "Kaffee";
    cout << "drink = " << drink << endl;
    cout << "zeiger zeigt auf " << *zeiger << endl;   
    cout << "zeiger zeigt auf " << zeiger << endl;

    zeiger = &drink;
    cout << "zeiger zeigt auf *zeiger: " << *zeiger << endl;
    cout << "zeiger zeigt auf zeiger: " << zeiger << endl;
    futter = drink;
    cout << "food = " << food << endl;

    string& nuesse = futter;
    cout << "nuesse: " << nuesse << endl;

    funktion1(futter);
    cout << "nuesse = " << nuesse << endl;

    funktion2(futter);
    funktion3(&futter);
    cout << "nuesse = " << nuesse << endl;
    funktion4(futter);
    cout << "nuesse = " << nuesse << endl;


    return 0;

}

int funktion1(string& parameter)
{
    parameter = "Benny";

    return 0;
}
int funktion2(const string& parameter) // NUr Lesezugriff wegen des const
{
    // parameter = "Shahhhhhhhhhhan"; // klappt nicht, denn parameter ist als konstante definiert
    cout << "innerhalb von funktion2 - parameter = " << parameter << endl;

    return 0;
}
int funktion3(string* parameter)
{
    *parameter = "Hamed";

    return 0;
}
int funktion4(string parameter) // Funktionsaufruf mit Wert (call by Value), michelangelo ist lokal und ändert nicht an der globalen variablen
{
    parameter = "Michelangelo";
    return 0;
}
