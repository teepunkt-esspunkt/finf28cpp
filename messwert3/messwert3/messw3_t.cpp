// messw3_t.cpp 
// Die neue Klasse Messwert testen.
// ---------------------------------------------------

#include "Messw3.h"
#include <iostream>
using namespace std;

int main()  // einige Messwerte für Lufttemperaturen
{
   DayTime  morgens(6,45);
   Messwert temp1( 6.45, morgens),
            temp2( 11.2, 12,0,0);
 
   double temp = 0.0;
   cout << "\nWie hoch ist jetzt die Luftemperatur? ";
   cin >> temp;
   Messwert temp3(temp);       // mit aktueller Zeit.

   cout << "\n Temperatur   Uhrzeit  \n"
        << "-------------------------" << endl;
   temp1.print();  temp2.print();  temp3.print();

   cout << "\n Minimale Temperatur: " << Messwert::getMin()
        << "\n Maximale Temperatur: " << Messwert::getMax()
        << endl;

   return 0;
}
