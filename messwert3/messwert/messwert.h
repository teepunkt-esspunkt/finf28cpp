// Messwert.h
// Die Klasse Messwert zur Darstellung eines Mwsswertes
// mit Zeitpunkt der Messung. 
// ---------------------------------------------------
#ifndef  MESSWERT_H
#define  MESSWERT_H

#include "DayTime.h"          // Klasse DayTime

class Messwert
{
 private:
   double wert;
   DayTime zeit;

 public:
   Messwert();                 // Default-Konstruktor
   Messwert(double w, const DayTime& z = currentTime());
   Messwert(double w, int std, int min, int sek);

   double getWert() const { return wert; }
   void   setWert( double w ) { wert = w; }
   
   const DayTime& getTime() const  { return zeit; }

   void  setTime( const DayTime& z) { zeit = z; }
   bool  setTime(int std, int min, int sek)
   { 
     return  zeit.setTime( std, min, sek);
   }

   void print() const;
};

#endif  //  MESSWERT_H
