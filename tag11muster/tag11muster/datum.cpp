/*
* datum.cpp
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
#include <string>
#include <regex>
using namespace std;

// ---------------------------------------------------
Datum::Datum()      // Aktuelles Datum holen und 
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
Datum::Datum(int tag, int monat, int jahr)
{
    this->setDatum(tag, monat, jahr);
   
}

// ---------------------------------------------------


bool Datum::setDatum(int tag, int monat, int jahr) 
{
    
        this->tag = tag;
        this->monat = monat;
        this->jahr = jahr;
        if (!this->istDatumGueltig())
        {
            this->tag = 0;
            this->monat = 0;
            this->jahr = 0;
            return false;
        }
        return true;

}

void Datum::setDatum()      // Aktuelles Datum holen und 
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

string Datum::getDatum()     // Datum anzeigen
{
    return to_string(tag) + "." + to_string(monat) + "." + to_string(jahr);
}


bool Datum::istDatumGueltig()
{
   
    if (getDatum().length() < 8) {
        return false;
    }
    string datum = getDatum().substr(0, 4); 
    
    
    if (datum == "29.2" && !isLeapYear(jahr)) {
        
        return false;
    }

    // Zeitraum: 1900 -2099
    regex regex("^(0?[1-9]|[12][0-9]|3[01])\\.(0?[1-9]|1[0-2])\\.(19|20)\\d{2}$");
    if (!regex_match(getDatum(), regex)) {
       
        return false;
    }

    return true;

}
bool Datum::isGreater(const Datum& other) const
{
    if (this->jahr > other.jahr) {
        return true;
    }
    else if (this->jahr == other.jahr) {
        if (this->monat > other.monat) {
            return true;
        }
        else if (this->monat == other.monat) {
            if (this->tag >= other.tag) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }

    }
    else {
        return false;
    }
}

bool Datum::isEqual(const Datum& other) const
{
    if (this->tag == other.tag && this->monat == other.monat && this->jahr == other.jahr) {
        return true;
    }
    else {
        return false;
    }
}


bool Datum::isLess(const Datum& other) const 
{
    if (isGreater(other)) {
        return false;
    }
    else {
        return true;
    }
}