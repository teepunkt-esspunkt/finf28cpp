// Messw3.cpp 
// Definition der statischen Datenelemente und 
// der Methoden, die nicht inline definiert sind.
// ---------------------------------------------------

#include "Messw3.h"

double Messwert::min = 0.0;
double Messwert::max = 0.0;
bool   Messwert::erster = true;

// private Hilfsfunktion:
void Messwert::setMinMax(double w)
{
  if( erster)
  { 
      min = max = w;
      erster = false;
  }
  else if( w < min)  min = w;
  else if( w > max)  max = w;
}

// Konstruktoren mit Elementinitialisierer.

Messwert::Messwert( double w, const DayTime& z)
: wert(w), zeit(z)
{
   setMinMax(w);
}
 
Messwert::Messwert( double w, int std, int min, int sek)
: wert(w), zeit(std, min, sek)
{
   setMinMax(w);
}

void Messwert::print() const
{
   cout << fixed << setprecision(2)
        << setw(8) << wert << "      ";
   zeit.print();
}
