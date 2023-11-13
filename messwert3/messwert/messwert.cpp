// Messwert.cpp 
// Implementierung der Methoden der Klasse Messwert, 
// die nicht inline definiert sind
// ---------------------------------------------------

#include "Messwert.h"

// Konstruktoren mit Elementinitialisierer.

Messwert::Messwert() : wert(0.0) { }

Messwert::Messwert( double w, const DayTime& z)
: wert(w), zeit(z)
{  }
 
Messwert::Messwert( double w, int std, int min, int sek)
: wert(w), zeit(std, min, sek)
{}

void Messwert::print() const
{
   cout << fixed << setprecision(2)
        << setw(8) << wert << "      ";
   zeit.print();
}
