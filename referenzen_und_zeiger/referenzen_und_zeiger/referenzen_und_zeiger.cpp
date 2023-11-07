/*
 * referenzen_und_zeiger.cpp
 * Demonstration von Referenzen und Zeigern
 * Autor: Ralf Sasse
 * Datum: 07.11.2023 (FINF28 / Tag 10)
 *
 */

#include <iostream>
using namespace std;

// Prototypen

int funktion1(string& argument);         // Funktionsaufruf mit Referenz
int funktion2(const string& argument);   // Funktionsaufruf mit Referenz, nur Lese-Zugriff
int funktion3(string* argument);         // Funktionsaufruf mit Zeiger
int funktion4(string argument);          // Funktionsaufruf mit Wert (call-by-value)

int main()
{
    string food = "Pizza";
    cout << "food = " << food << endl;          // Pizza
    cout << "&food = " << &food << endl;        // 0000009F33F4F658 (Speicher-Adresse des Strings food)
    string& futter = food;
    cout << "futter = " << futter << endl;      // Pizza
    food = "Hamburger";
    cout << "food = " << food << endl;          // Hamburger
    cout << "futter = " << futter << endl;      // Hamburger
    cout << "&futter = " << &futter << endl;    // 0000009F33F4F658 (Speicher-Adresse des Strings food,
    // auf den futter eine Referenz ist)
    futter = "Hot Dog";
    cout << "futter = " << futter << endl;      // Hot Dog
    cout << "food = " << food << endl;          // Hot Dog

    int a = 1;
    int& b = a;
    a = 2;
    cout << "a+b = " << a + b << endl;          // 4 (a und b sind die gleiche Variable, die den Wert 2 hat)
    cout << "Adresse von a: " << &a << endl;    // 0000009F33F4F6B4 (Speicher-Adresse des Integers a)
    cout << "Adresse von b: " << &b << endl;    // 0000009F33F4F6B4 (Speicher-Adresse des Integers a,
    // auf den b eine Referenz ist)
    string* zeiger = &food;
    cout << "zeiger = " << zeiger << endl;              // 0000009F33F4F658 (Inhalt von zeiger, also die
    // Speicher-Adresse des Strings food)
    cout << "Adresse von zeiger: " << &zeiger << endl;  // 0000009F33F4F6F8 (Adresse von zeiger)

    zeiger = &futter;
    *zeiger = "Currywurst";
    cout << "food = " << food << endl;                  // Currywurst
    cout << "futter = " << futter << endl;              // Currywurst
    cout << "zeiger zeigt auf " << *zeiger << endl;     // Currywurst

    string drink = "Kaffee";
    cout << "drink = " << drink << endl;                // Kaffee
    cout << "zeiger = " << zeiger << endl;              // 0000009F33F4F658 (immer noch die Adresse von food)
    cout << "zeiger zeigt auf " << *zeiger << endl;     // Currywurst
    zeiger = &drink;
    cout << "zeiger = " << zeiger << endl;              // 0000009F33F4F718 (jetzt die Adresse von drink)
    cout << "zeiger zeigt auf " << *zeiger << endl;     // Kaffee
    futter = drink;
    cout << "food = " << food << endl;                  // Kaffee

    string& nuesse = futter;
    cout << "nuesse (Vorschlag von Benny): " << nuesse << endl;     // Kaffee (food, futter und nuesse
    // sind dieselbe Variable)
// Funktions-Aufrufe

    funktion1(futter);                          // der Parameter ist eine Referenz auf food
    cout << "nuesse = " << nuesse << endl;      // Benny
    cout << "drink = " << drink << endl;        // Kaffee
    cout << "futter = " << futter << endl;      // Benny

    funktion2(futter);                          // Parameter ist eine Referenz auf food
    // (und in funktion2() als Konstante definiert)

    funktion3(&futter);                         // Parameter ist die Adresse von food
    // (und in funktion3() ein Zeiger)
    cout << "nuesse = " << nuesse << endl;      // Hamed

    funktion4(futter);                          // Parameter ist eine Kopie von food (call-by-value)
    cout << "nuesse = " << nuesse << endl;      // Hamed


    return 0;
}

int funktion1(string& parameter)            // Funktionsaufruf mit Referenz
{
    parameter = "Benny";                    // im Hauptprogramm werden food, futter und nuesse geändert

    return 0;
}

int funktion2(const string& parameter)      // Funktionsaufruf mit Referenz, nur Lese-Zugriff
{
    //    parameter = "Shayan";                 // klappt nicht, denn parameter ist als Konstante definiert

    cout << "innerhalb von funktion2 - parameter = " << parameter << endl;      // Benny

    return 0;
}

int funktion3(string* parameter)            // Funktionsaufruf mit Zeiger
{
    *parameter = "Hamed";                   // im Hauptprogramm werden food, futter und nuesse geändert

    return 0;
}

int funktion4(string parameter)             // Funktionsaufruf mit Wert (call-by-value)
{
    parameter = "Michelangelo";             // parameter ist nur eine lokale Variable, im Hauptprogramm
    // wird nichts geändert
    return 0;
}