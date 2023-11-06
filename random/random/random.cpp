/*
 * random.cpp
 * Ueberladungen
 * Autor: Tarek Saleh
 * Datum: 6.1.2023
 *
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>      // fuer rand(), srand()
#include <ctime>        // fuer time()

using namespace std;

bool setrand = false;

void initRandom()
{
    if (!setrand)
    {
        srand(time(NULL));
        setrand = true;
    }
    
}

double random()         // liefert Zufallszahl zwischen 0 und 1
{
    initRandom();

    return (double)rand() / RAND_MAX;
}

int random(int anfang, int ende)
{
    initRandom();
    return anfang + rand() % (ende - anfang + 1);
//             1    +zufallszahl % (100 - 1 +1)                   // Beispiel anfang = 1, ende = 100
//             1    +zufallszahl %        100
}
int main()
{
    
    int i, anfang = 1, ende = 100;

    cout << "5 Zufallszahlen zwischen 0.0 und 1.0 :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << setw(10) << random();
    }
    cout << endl << endl;

    cout << "5 Zufallszahlen zwischen " << anfang << " und " << ende << endl;
    for (i = 0; i < 5; i++)
    {
        cout << setw(10) << random(anfang, ende);
    }
    cout << endl << endl;

    return 0;

}

