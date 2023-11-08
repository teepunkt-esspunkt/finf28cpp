/*
 * main.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#include <iostream>
#include "konto.h"
#include <string>
using namespace std;
bool getKonto(Konto*);

int main()
{
    Konto giro1, giro2, giro3;      // 2 Konten Objekte erzeugen

   giro1.init(1234567, "Meier", 750.00);
   giro1.display();

   giro1.setStand(50);
   giro1.display();
   giro1.setStand(-100);
   giro1.display();


   giro2.init(2345678, "Schmidt", 12.50);
   giro2.display();
   giro2.init(3456789, "Bauer", 49.95);

   giro1 = giro2;
   giro1.display();
   giro2.display();

   giro1.setName("Muller");
   giro1.display();

   giro3.init(777777777, "James Bond", 0.45);
   giro3.display();

   Konto& giro4 = giro3;
   giro4.display();
   giro3.setStand(-200);
   giro4.display();

   Konto* zeiger = &giro1;
   giro1.display();           // Zugriff auf giro1 mit seinem Namen
   (*zeiger).display();     // Zugriff auf giro1 mit einem Zeiger
   zeiger->display();       // Schreibweise mit dem Zeiger-Operator
                            // alle drei liefern dasselbe Ergebnis!
   
   
   if (!getKonto(&giro4))   // An dieser Stelle werden über die Konsole die Daten für ein neues Konto eingelesen
   {
       cout << "Ungueltige Eingabe!" << endl;
   }
   
   giro1.display();
   giro2.display();
   giro3.display();
   giro4.display();

   return 0;

}

bool getKonto(Konto* kontozeiger)
{
    string name;
    unsigned long kontonummer;
    double startkapital;

    cout << "Daten fuer ein neues Konto eingeben:" << endl
    << "Kontoinhaber: ";
    if (!getline(cin, name) || name.size() == 0)
    {
        return false;
    }
    cout << "Kontonummer: ";
    if (!(cin >> kontonummer))
    {
        return false;
    }
    cout << "Startkapital:";
    if (!(cin >> startkapital))
    {
        return false;
    }

    // Alle Eingaben sind okay
   // kontozeiger->init(kontonummer, name, startkapital);
    (*kontozeiger).init(kontonummer, name, startkapital);
    return true;

}