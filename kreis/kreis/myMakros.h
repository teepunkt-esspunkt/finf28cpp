#pragma once	// diese Headerdatei nur einmal einfügen!

#ifndef _HEADER_
#define _HEADER_

// Normalerweise ist nur eine Anweisung pro Makro erlaubt.
// Man kann aber folgenden Workaround anwenden: Mehrere Anweisungen
// in eine do-while-Schleife setzen, die nur einmal durchlaufen wird.

#define HEADER do{ \
cout << "Tabelle fuer Sinus-Funktion" << endl;\
cout << "---------------------------" << endl;\
}while(0)

#define PI 3.14159
#define START 0.0           // Untergrenze
#define ENDE (2.0 * PI)     // Obergrenze
#define SCHRITT (PI / 8.0)  // Schrittweite

void hallo();    // Prototyp
void kreis();	 // Prototyp

#endif
