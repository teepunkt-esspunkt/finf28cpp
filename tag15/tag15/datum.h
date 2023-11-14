/*
 * datum.h
 * Teil des C++-Projekts "Verein"
 * Definition der Klasse "Datum" mit Inline-Methoden
 * Autor: Ralf Sasse
 * Datum: 13.11.2023 (FINF28 / Tag 14)
 *
 */

#ifndef _DATUM_H_   // Mehrfaches Inkludieren verhindern. // anstelle von pragma once
#define _DATUM_H_

#include <string>
using namespace std;

class Datum
{
private:
    int tag, monat, jahr;

public:
    Datum()                                 // Default-Konstruktor
    {
        tag = monat = jahr = 1;
    }

    Datum(int tag, int monat, int jahr)     // Parameter-Konstruktor
    {
        if (!setDatum(tag, monat, jahr))    // Falls Datum ungültig.
        {
            this->tag = this->monat = this->jahr = 1;
        }
    }

    void setDatum();    // Setzt das aktuelle Datum
    bool setDatum(int tag, int monat, int jahr);

    int getTag()   const { return tag; }
    int getMonat() const { return monat; }
    int getJahr()  const { return jahr; }

    bool isEqual(const Datum& d) const
    {
        return  tag == d.tag && monat == d.monat
            && jahr == d.jahr;
    }

    bool isLess(const Datum& d) const;
    bool isGreater(const Datum& d) const;

    bool isLeapYear(short jahr)
    {
        return (jahr % 4 == 0 && jahr % 100 != 0) || jahr % 400 == 0;
    }

    const string& asString() const;
    void display() const;
};

inline bool Datum::isLess(const Datum& d) const
{
    if (jahr != d.jahr)
        return jahr < d.jahr;
    else if (monat != d.monat)
        return monat < d.monat;
    else
        return tag < d.tag;
}

inline bool Datum::isGreater(const Datum& d) const
{
    if (jahr != d.jahr)
        return jahr > d.jahr;
    else if (monat != d.monat)
        return monat > d.monat;
    else
        return tag > d.tag;
}

#endif   //  _DATUM_H_