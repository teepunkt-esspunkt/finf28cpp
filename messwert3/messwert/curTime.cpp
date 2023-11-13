// curTime.cpp 
// Definition der globalen Funktion currentTime()
// ---------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS      // Für Visual Studio und localtime()

#include "DayTime.h"
#include <ctime>    // Standardfkt. time(), localtime()
using namespace std;

const DayTime& currentTime()      // Die aktuelle Zeit
{                                 // zurückgeben.
  static DayTime curTime;
  time_t sec;  time(&sec);  // Aktuelle Zeit holen.
                            // Damit Struktur vom Typ tm
  struct tm *zeit = localtime(&sec);  // initialisieren.

  curTime.setTime( zeit->tm_hour, zeit->tm_min, 
                   zeit->tm_sec );
  return curTime;
}
