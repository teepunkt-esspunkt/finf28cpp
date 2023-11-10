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
    Datum heute;
    Datum geburtstag(14, 6, 1966);
    Datum neujahr2000(1, 1, 2000);

    cout << "Der Geburtstag von Ralf: "
        << geburtstag.asString() << endl;

    heute.setDatum();
    cout << "Das heutige Datum : " << heute.asString() << endl;;

    Datum urlaub;
    int tag, monat, jahr;
    char c;

    cout << "Wann beginnt Ihr naechster Urlaub?\n"
        << "Eingabe im Format Tag.Monat.Jahr : ";

    if (!(cin >> tag >> c >> monat >> c >> jahr))
        cerr << "Ungueltige Eingabe!" << endl;
    else if (!urlaub.setDatum(tag, monat, jahr))
        cerr << "Ungueltiges Datum!" << endl;
    else
    {
        cout << "Ihr erster Urlaubstag: ";
        urlaub.display();

        if (heute.getJahr() < urlaub.getJahr())
            cout << "Sie sollten noch in diesem Jahr Urlaub machen!" << endl;
        else
            cout << "Gute Reise!" << endl;
    }
    return 0;
}