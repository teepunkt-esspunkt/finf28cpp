/*
* datum1.cpp
*
* Implementierung der Methoden der Klasse Datum
*
*/

#pragma warning(disable : 4996)	// Fehlermeldung bei
// localtime() unterdücken
#include <iostream>
#include <iomanip>
#include <ctime>
#include "datum.h"
using namespace std;

// ---------------------------------------------------
void Datum::init(void)      // Aktuelles Datum holen und 
{                           // den Datenelementen zuweisen.
    struct tm* zeit;        // Zeiger auf Struktur tm.
    time_t sec;             // Für die Sekunden. 

    time(&sec);             // Aktuelle Zeit holen.
    zeit = localtime(&sec); // Eine Struktur vom Typ tm initialisieren
    // und einen Zeiger darauf zurückgeben.
    tag = zeit->tm_mday;
    monat = zeit->tm_mon + 1;
    jahr = zeit->tm_year + 1900;
}

// ---------------------------------------------------
void Datum::init(int tag, int monat, int jahr)
{
    this->tag = tag;
    this->monat = monat;
    this->jahr = jahr;
}

// ---------------------------------------------------
void Datum::display(void)     // Datum anzeigen
{
    cout << setfill('0')
        << setw(2) << tag << '.'
        << setw(2) << monat << '.'
        << setw(4) << jahr << endl;
}