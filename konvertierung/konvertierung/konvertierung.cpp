/*
 * konvertierung.cpp
 * Umwandlung arithmetischer Datentypen
 * Autor: Ralf Sasse
 * Datum: 30.10.2023 (FINF28 / Tag 5)
 *
 */

#include <iostream>
using namespace std;

int main()
{
    unsigned long ul = 65540;
    signed short ss = ul;

    cout << ss << endl;         // 4

    return 0;
}

/*

65540   0000 0000 0000 0001 0000 0000 0000 0100
4                           0000 0000 0000 0100     - der Rest wird abgeschnitten!

*/
