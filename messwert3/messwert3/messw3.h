// Messw3.h
// Die Klasse Messwert mit statischen Datenelement.
// ---------------------------------------------------
#ifndef  MESSWERT_H
#define  MESSWERT_H

#include "DayTime.h"          // Klasse DayTime

class Messwert
{
 private:
   double wert;
   const  DayTime zeit;
   
    // Deklaration statischer Elemente:
   static double min, max;    // Minimum, Maximum
   static bool erster;        // true, falls erster Messwert; 

   static void setMinMax(double w);  // Hilfsfunktion

 public:
   Messwert(double w, const DayTime& z = currentTime());
   Messwert(double w, int std, int min, int sek);

   double getWert() const { return wert; }
   const DayTime& getTime() const  { return zeit; }

   void  setWert( double w )
   { 
      wert = w;
      setMinMax(w);
   }
   void print() const;

   static double getMin() { return min; }
   static double getMax() { return max; }
};

#endif  //  MESSWERT_H
