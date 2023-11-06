/*
 * auto.cpp
 * Erstes C++ Programm
 * aus dem Buch "C++ lernen und professionell anwenden (S. 170)
 * Datum: 06.11.2023 (FINF28 / Tag 9)
 *
 */

#include <iostream>
using namespace std;

auto add(float, float) -> double;        // Prototyp
// oder auch:
// double add(float, float);

// Definition der Funktion sub()
auto sub(float x, float y)  // -> double
{
    return x - y;         // Return-Typ ist double, da der
}                        // Ausdruck x-y den Typ double hat.

// Definition der rekursiven Funktion powerOf2()
auto powerOf2(unsigned n)  // -> long long
{
    if (n == 0)
        return 1LL;       // Return-Typ ist long long
    else
        return 2 * powerOf2(n - 1);
}

int main()
{
    float  a = 1.2F, b = 3.4F;

    double sum = add(a, b);
    cout << "Die Summe von " << a << " und " << b << " ist "
        << sum << endl;                                         // 4.6

    cout << "Die Differenz von " << a << " und " << b << " ist "
        << sub(a, b) << endl;                                   // -2.2

    cout << "2 hoch 5 ergibt " << powerOf2(5) << endl;           // 32
    return 0;
}

// Definition der Funktion add()
auto add(float x, float y) -> double
{
    return x + y;
}
