/*
 * main.cpp
 * Hauptprogramm für Datum
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#include <iostream>
#include "datum.h"
#include <string>
using namespace std;


int main()
{
    Datum datum1, datum2;      // 3 Daten Objekte

    
    datum1.init(5, 2, 1923);
    datum1.display();

    datum2.init();
    datum2.display();

    Datum* zeiger = &datum1;
    cout << "Speicheradresse Datum1: " << zeiger << endl;
    Datum &var = datum1;
    cout << &var << endl;

    cout << endl << "Inhalt Datum1: " << endl;
    zeiger->display();
    


    return 0;

}