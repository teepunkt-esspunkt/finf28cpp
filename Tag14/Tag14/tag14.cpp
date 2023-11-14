/*
 * tag14.cpp
 * Testprogramm
 * Autor: Tarek Saleh
 * Datum: 13.11.2023
 *
 */

#include <iostream>

#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>
#include "mitglied.h"
#include "datum.h"

using namespace std;


int main()
{
    Datum urlaub;
    char c;
    int tag, monat, jahr;
    string name;
    int mitgliedsnummer;

    Datum heute;
    heute.setDatum();
    Datum geburtstag;

    Datum meingeburtstag(30, 03, 1987);

    cout << "Datum: " << heute.asString() << endl;

   
    cout << "Geburtstag: " << meingeburtstag.asString() << endl;
    // in einem cout geht es nicht

    Mitglied ich(99, "ich", geburtstag);
    Mitglied du(22, "du", 15, 05, 1995);

    ich.ausgabe();
    du.ausgabe();

    /*cout << "Wann haben Sie Geburtstag?"
        << "Eingabe im Format Tag.Monat.Jahr : ";

    if (!(cin >> tag >> c >> monat >> c >> jahr))
        cerr << "Ungueltige Eingabe!" << endl;
    else if (!geburtstag.setDatum(tag, monat, jahr))
        cerr << "Ungueltiges Datum!" << endl;
    */

    cout << "Mitgliedsnummer: ";
    cin >> mitgliedsnummer;

    cout << "Name: ";
    cin >> name;

    cout << "Geburtstag (Format Tag.Monat.Jahr): ";
    if (!(cin >> tag >> c >> monat >> c >> jahr)) {
        cerr << "Ungueltige Eingabe" << endl;
        return 1;
    }

    
    Datum geburtstag2(tag, monat, jahr); 
    Mitglied mitglied(mitgliedsnummer, name, geburtstag2); 

   
    Mitglied::setVorstand(&ich);

    
    cout << "Mitglied information: " << endl;
    mitglied.ausgabe();
    

    
    Mitglied* vorstand = Mitglied::getVorstand();
    if (vorstand != nullptr) {
        cout << "Vorstand information:" << endl;;
        vorstand->ausgabe();
    }
    else {
        cout << "Kein Vorstand";
    }





    return 0;

}

