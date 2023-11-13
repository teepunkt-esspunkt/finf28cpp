// messw_t.cpp 
// Die Konstruktoren der Klasse Messwert testen.
// ---------------------------------------------------

#include "Messwert.h"
#include <iostream>
using namespace std;

int main()  // einige Messwerte für Lufttemperaturen
{
    DayTime  morgens(6, 30);
    Messwert t1,                // Default-Konstruktor
        t2(12.5, morgens),
        t3(18.2, 12, 0, 0),
        t4(17.7);          // mit aktueller Zeit.

    cout << "Default-Werte: ";   t1.print();

    cout << "\n Temperatur   Uhrzeit  \n"
        << "-------------------------" << endl;
    //   t1.print();
    t2.print();
    t3.print();
    t4.print();

    cout << endl;
    return 0;
}