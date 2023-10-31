/*
 * Nachmittagsaufgabe 2 vom 30.10.2023
 *
 * Was gibt dieses Programm auf dem Bildschirm aus?
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int zahl = 13;

    cout << boolalpha
        << (zahl >= -12 && zahl < 26) << endl
        << (zahl >= 11 && !zahl) << endl
        << (--zahl == 12 || zahl++ == 13) << endl
        << zahl << endl;

    return 0;
}

/*
true
false
false
13

*/