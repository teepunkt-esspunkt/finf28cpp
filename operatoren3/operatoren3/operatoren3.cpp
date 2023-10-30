/*
 * operatoren3.cpp
 * Demonstration von Operatoren
 * Autor: Ralf Sasse
 * Datum: 30.10.2023 (FINF28 / Tag 5)
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 42;
    int c = 137;

    if (b < c && ++a)
        cout << "Bedingung erfuellt" << endl;           // Bedingung erfuellt
    else
        cout << "Bedingung nicht erfuellt" << endl;

    return 0;
}

// true || false = true
// true && false = false
// !true = false
// !false = true
