// messw2_t.cpp 
// Die neue Klasse Messwert testen.
// ---------------------------------------------------

#include "Messw2.h"
#include <iostream>
using namespace std;

int main()
{
   DayTime  start(10,15);
   Messwert m1( 101.01, start),
            m2( m1),           // Kopierkonstruktor ok  
            m3( 99.9);         // mit aktueller Zeit.
 
// m2 = m3;      // Fehler! Standard-Zuweisung nicht ok.  
   m2.setWert(100.9);        // korrigierter Wert für m2

   cout << "\n Messwerte    Uhrzeit  \n"
        << "-------------------------" << endl;

   m1.print();
   m2.print();
   m3.print();

   cout << endl;
   return 0;
}
