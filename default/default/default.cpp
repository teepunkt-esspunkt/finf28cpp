/*
 * default.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 6.11.2023
 *
 */

#include <iostream>
using namespace std;

void ausgabe(int a = 1, int b = 2, int c = 3, int d = 4);   // Prototyp

int main()
{
    ausgabe();
    ausgabe(42);
    ausgabe(42, 137);
    ausgabe(42, 137, 2023);
    ausgabe(42, 137, 2023, 4711);

    return 0;

}


void ausgabe(int a, int b, int c, int d)        // Funktions Definition OHNE Default Werte
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl << endl;
}