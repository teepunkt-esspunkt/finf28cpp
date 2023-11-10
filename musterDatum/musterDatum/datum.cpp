/*
* datum2.cpp
*
* Implementierung der Methoden der Klasse Datum,
* die nicht schon inline definiert sind.
*
*/

#pragma warning(disable : 4996)	// Fehlermeldung bei
// localtime() unterdÃ¼cken
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>
#include "datum.h"
using namespace std;

void Datum::setDatum()      // Aktuelles Datum holen und 
{                           // den Datenelementen zuweisen.
    struct tm* zeit;        // Zeiger auf Struktur tm.
    time_t sec;             // FÃ¼r die Sekunden. 

    time(&sec);             // Aktuelle Zeit holen.
    zeit = localtime(&sec); // Eine Struktur vom Typ tm initialisieren
    // und Zeiger darauf zurÃ¼ckgeben.
    tag = zeit->tm_mday;
    monat = zeit->tm_mon + 1;
    jahr = zeit->tm_year + 1900;
}

bool Datum::setDatum(int tag, int monat, int jahr)
{
    if (tag < 1 || tag > 31) return false;
    if (monat < 1 || monat > 12) return false;

    switch (monat)       // Monate mit weniger als 31 Tagen
    {
    case 2:  if (isLeapYear(jahr))
    {
        if (tag > 29)
            return false;
    }
          else if (tag > 28)
    {
        return false;
    }
          break;
    case 4:
    case 6:
    case 9:
    case 11: if (tag > 30)
    {
        return false;
    }
    }

    this->tag = tag;
    this->monat = monat;
    this->jahr = jahr;

    return true;
}

void Datum::display() const              // Datum anzeigen
{
    cout << asString() << endl;
    return;
}

const string& Datum::asString() const  // Datum als String
{                                      // zurÃ¼ckgeben.
    static string datumString;
    stringstream iostream;         // Zur Konvertierung Zahl -> String
    // und Formatierung.
    iostream << setfill('0')
        << setw(2) << tag << '.'
        << setw(2) << monat << '.'
        << setw(4) << jahr;

    iostream >> datumString;
    return datumString;
}