/*
* datum.h
*
* Erste Definition der Klasse Datum
*
*/

#pragma once        // Mehrfaches Inkludieren verhindern.

#ifndef _DATUM_H_   // Mehrfaches Inkludieren verhindern.
#define _DATUM_H_
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Datum
{
private:              // Geschützte Elemente
    int tag, monat, jahr;

public:               // Öffentliche Schnittstelle
    Datum();
    Datum(int tag, int monat, int jahr);
    
    void setDatum();
    bool setDatum(int tag, int monat, int jahr);

    string getDatum();

    inline bool isLeapYear(int jahr);
    bool istDatumGueltig();
    bool isGreater(const Datum&) const;
    bool isEqual(const Datum&) const;
    bool isLess(const Datum&) const;

};

inline bool Datum::isLeapYear(int jahr)
{
    return ((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0));
}




#endif   //  _DATUM_H_