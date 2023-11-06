/*
 * random.cpp
 * Beispiel für überladene Funktionen
 * Autor: Ralf Sasse
 * Datum: 06.11.2023 (FINF28 / Tag 9)
 *
 */

#include <iostream>
#include <iomanip> 
#include <cstdlib>     // für rand(), srand()
#include <ctime>       // für time()
using namespace std;

bool setrand = false;

void initRandom()                   // Zufallsgenerator mit aktueller Uhrzeit initialisieren
{                                   // (aber nur einmal)
    if (!setrand)
    {
        srand(time(NULL));
        setrand = true;
    }
    return;
}

double random()                     // liefert Zufallszahl zwischen 0 und 1
{
    initRandom();

    return (double)rand() / RAND_MAX;
}

int random(int anfang, int ende)    // liefert Zufallszahl zwischen anfang und ende
{
    initRandom();

    return anfang + rand() % (ende - anfang + 1);
}

int main()
{
    int i, anfang = 1, ende = 100;

    cout << "5 Zufallszahlen zwischen 0.0 und 1.0 :" << endl;
    for (i = 0; i < 5; ++i)
    {
        cout << setw(10) << random();               // Aufruf ohne Parameter
    }
    cout << endl << endl;

    cout << "5 Zufallszahlen zwischen " << anfang << " und " << ende << " :" << endl;
    for (i = 0; i < 5; ++i)
    {
        cout << setw(10) << random(anfang, ende);   // Aufruf mit Parametern
    }
    cout << endl;

    return 0;
}