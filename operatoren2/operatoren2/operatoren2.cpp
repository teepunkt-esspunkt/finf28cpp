/*
 * operatoren2.cpp
 * Demonstration von Operatoren
 * Autor: Ralf Sasse
 * Datum: 30.10.2023 (FINF28 / Tag 5)
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 8;

    cout << a   << endl;    // 2
    cout << b   << endl;    // 8
    cout << a++ << endl;    // 2
    cout << a   << endl;    // 3
    cout << b-- << endl;    // 8
    cout << --b << endl;    // 6

    int c = (a++ + --b - --a);

/*
            ((a++) + (--b) - (--a))
            (( 3 ) + ( 5 ) - ( 3 ))
               3   +   5   -   3        // 5
*/

    cout << c << endl;      // 5

    return 0;
}
