/*
* datum.h
*
* Erste Definition der Klasse Datum
*
*/

#pragma once        // Mehrfaches Inkludieren verhindern.

#ifndef _DATUM_H_   // Mehrfaches Inkludieren verhindern.
#define _DATUM_H_

class Datum
{
private:              // Geschützte Elemente
    int tag, monat, jahr;

public:               // Öffentliche Schnittstelle
    void init(void);
    void init(int tag, int monat, int jahr);
    void display(void);
};

#endif   //  _DATUM_H_