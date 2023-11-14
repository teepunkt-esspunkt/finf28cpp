/*
 * mitglied.h
 * mitglied klasse, header datei
 * Autor: Tarek Saleh
 * Datum: 13.11.2023
 *
 */
#ifndef  MITGLIED_H
#define  MITGLIED_H

#include "datum.h"
using namespace std;


class Mitglied
{
private:
    int mitgliedsnummer;
    string name;
    const Datum geburtstag;

    static Mitglied* ptrVorstand;

public:
    //Mitglied();
    Mitglied(int mitgliedsnummer, string name, const Datum& geburtstag);
    Mitglied(int mitgliedsnummer, string name, int tag, int monat, int jahr);

    int getMitgliedsnummer() const { return mitgliedsnummer; }
    string getName() const { return name; }
    const Datum getGeburtstag() const { return geburtstag; }

    static Mitglied* getVorstand();

    static void setVorstand(Mitglied* vorstand);

    void setMitgliedsnummer(int mitgliedsnummer)
    {
        this->mitgliedsnummer = mitgliedsnummer;
    }
    void ausgabe() const;
    // methode zur formartierten bildschirmausgabe aller elemente






};

#endif