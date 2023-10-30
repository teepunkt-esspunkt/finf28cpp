/*
 * operatoren.cpp
 * Demonstration von Operatoren
 * Autor: Ralf Sasse
 * Datum: 30.10.2023 (FINF28 / Tag 5)
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int d(0);       // gleichbedeutend mit d = 0;

    a = 0;          // Ausdruck - der Typ ist int, der Wert ist 0
    b = c = 1;

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    a = b + c;      // diese Zeile enthält vier Ausdrücke
                    // das + ist ein binärer Operator, denn er hat ZWEI Operanden (b und c)

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    c = 3;

    d = a ? b : c;  // ternärer Operator, weil DREI Operanden (a, b und c)
                    // ? und : zählen als EIN Operator
/*
                    // alternative Schreibweise:
    if (a)          // Bedingung ist erfüllt (true), wenn a ungleich 0 ist
        d = b;
    else
        d = c;
*/

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;

    a = 'a';        // gültiger Ausdruck, der char-Wert wird automatisch nach int umgewandelt

    char ch = 'A' + 32;

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", ch = " << ch << endl;

    if ('a' < 'A')
        cout << "a ist kleiner als A" << endl;
    else
        cout << "a ist nicht kleiner als A" << endl;    // Großbuchstaben sind kleiner als Kleinbuchstaben!
                                                        // (zumindest arithmetisch)

    a %= 10;        // KEINE implizite Typumwandlung bei Division oder Modulo bei Ganzzahlen

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", ch = " << ch << endl;

    d = a + b * c;  // ACHTUNG: a + b ist an dieser Stelle KEIN Ausdruck! (wegen Punkt-vor-Strich-Rechnung)

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", ch = " << ch << endl;

    d = (a + b) * c;    // JETZT ist a + b ein Ausdruck! (und b * c ist KEIN Ausdruck mehr)

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", ch = " << ch << endl;

    d = (a == 0);       // Logische Verknüpfung, daher bool "false", konvertiert nach int ergibt 0

    d = (0 == a);       // Tipp von André, ergibt Compilerfehler, falls man nur ein = eingibt

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", ch = " << ch << endl;

    return 0;
}
