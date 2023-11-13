// Messw2.h
// Die Klasse Messwert mit konstantem Datenelement.
// ---------------------------------------------------
#ifndef  MESSWERT_H
#define  MESSWERT_H

#include "DayTime.h"          // Klasse DayTime

class Messwert
{
 private:
   double wert;
   const DayTime zeit;

 public:
   Messwert(double w, const DayTime& z = currentTime());
   Messwert(double w, int std, int min, int sek);

   double getWert() const { return wert; }
   void   setWert( double w ) { wert = w; }
   
   const DayTime& getTime() const  { return zeit; }

   void print() const;
};

#endif  //  MESSWERT_H
