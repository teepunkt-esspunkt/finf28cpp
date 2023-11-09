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
private:              // Gesch�tzte Elemente
    int tag, monat, jahr;

public:               // �ffentliche Schnittstelle
    void init(void);
    void init(int tag, int monat, int jahr);
    void display(void);
};

#endif   //  _DATUM_H_