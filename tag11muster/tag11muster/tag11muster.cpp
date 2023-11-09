/*
* main.cpp
*
* Mit Objekten der Klasse Datum arbeiten
*
*/

#include <iostream>
#include "datum.h" 
using namespace std;

int main()
{
    Datum heute, geburtstag, nochEinDatum;

    heute.init();
    geburtstag.init(14, 6, 1966);

    cout << "Das heutige Datum : ";
    heute.display();
    cout << endl;

    cout << "Der Geburtstag von Ralf: ";
    geburtstag.display();
    cout << endl;

    cout << "------------------------------------" << endl
        << "Noch einige Testausgaben:" << endl;

    nochEinDatum = heute;                 // Zuweisung ok
    nochEinDatum.display();

    Datum* zeiger = &geburtstag;      // Zeiger auf geburtstag
    zeiger->display();

    Datum& urlaub = nochEinDatum;        // Referenz auf nochEinDatum.

    urlaub.init(1, 5, 2015);      // nochEinDatum überschreiben.
    nochEinDatum.display();               // urlaub.display();

    return 0;
}