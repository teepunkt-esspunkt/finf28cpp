/*
 * datum.cpp
 * Datum
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#include <iostream>
#include <iomanip>
#include "datum.h"
#include <ctime>
using namespace std;

void Datum::init(unsigned int itag, unsigned int imonat, unsigned int ijahr)
{
    tag = itag;
    monat = imonat;
    jahr = ijahr;

    return;

}

void Datum::init(void) // Aktuelles Datum holen und 
{ // den Datenelementen zuweisen.
    struct tm* zeit; // Zeiger auf Struktur tm.
    time_t sec; // Struktur für die Sekunden. 
    time(&sec); // Aktuelle Zeit holen.
    zeit = localtime(&sec); // Eine Struktur vom Typ tm initialisieren
    // und einen Zeiger darauf zurückgeben.
    tag = zeit->tm_mday;
    monat = zeit->tm_mon + 1;
    jahr = zeit->tm_year + 1900;
}


void Datum::getDatum()
{
    cout
        << "-------------------------------------------------------" << endl
        << "Tag         :   " << tag << endl
        << "Monat       :   " << monat << endl
        << "Jahr        :   " << jahr << endl
        << "-------------------------------------------------------" << endl;

    return;
}