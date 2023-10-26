/*
 * zufall.cpp
 * Ermittlung von Zufallszahlen
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int LOW = 1;
const int HIGH = 100;

int zufall(int, int); // Prototyp

int main()
{
    
    int zufallszahl1, zufallszahl2, zufallszahl3;
    srand(time(NULL));
    zufallszahl1 = zufall(LOW, HIGH);
    zufallszahl2 = zufall(LOW, HIGH);
    zufallszahl3 = zufall(LOW, HIGH);

    cout << zufallszahl1 << endl;
    cout << zufallszahl2 << endl;
    cout << zufallszahl3 << endl;
    return 0;

}

int zufall(int low, int high)
{
    return low + rand() % (high - low + 1); // wenn LOW = 2 und HIGH = 100:
                                            // 2 + rand() % (100 - 2 +1)
}