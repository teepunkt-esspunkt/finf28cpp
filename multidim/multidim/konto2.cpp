/*
 * konto2.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#include <iostream>
#include <iomanip>
#include "konto.h"
using namespace std;

int Konto::anzahl = 0;

Konto::Konto(unsigned long iNummer, const string& iName, double iStand)
{
    name = iName;
    nummer = iNummer;
    stand = iStand;

    anzahl++;
}

Konto::Konto()
{
    name = "Theodor";
    nummer = 42;
    stand = -80;

    anzahl++;

}

//string Konto::getName() {   // nicht mehr nötig da inline'd
//    return name;
//}
//unsigned long Konto::getNummer() {
//    return nummer;
//}
//
//double Konto::getStand() {
//    return stand;
//} 
//void Konto::setStand(double iStand)
//{
//    stand += iStand;
//
//    return;
//}
//
//void Konto::setName(const string& iName)
//{
//    name = iName;
//    return;
//}
//void Konto::setNummer(unsigned long iNummer)
//{
//    nummer = iNummer;
//    return;
//}

//inline void Konto::display()
//{
//    cout << fixed << setprecision(2)
//        << "-------------------------------------------------------" << endl
//        << "Kontoinhaber:   " << name << endl
//        << "Kontonummer:    " << nummer << endl
//        << "Kontostand:     " << stand << endl
//        << "-------------------------------------------------------" << endl;
//
//    return;
//}

Konto::~Konto()
{
    cout << "Ciao! sagt " << name << ", ich war Objekt Nr. " << anzahl << endl;
    anzahl--;
}