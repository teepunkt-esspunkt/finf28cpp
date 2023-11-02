/*
* Nachmittagsaufgabe 1 vom 01.11.2023
*
* Schreiben Sie folgende drei Makros und speichern Sie sie in der
* Header-Datei myMakros.h:
*
* 1. das Makro MAX, das die größere von zwei Zahlen zurückgibt
* 2. das Makro MIN, das die kleinere von zwei Zahlen zurückgibt
* 3. das Makro ABS, das den Absolutwert einer Zahl zurückgibt
*    (also den Wert der Zahl ohne Vorzeichen)
*
* Erstellen Sie dann ein Testprogramm, um die Makros zu testen.
*
*/

#include "myMakros.h"     // eigene Makros MAX, MIN und ABS

int main()
{
    int a = 1, b = 2, c = -3;

    cout << "Die groessere Zahl ist " << MAX(a, b) << endl;
    cout << "Die kleinere Zahl ist  " << MIN(a, b) << endl;
    cout << "Der absolute Wert ist  " << ABS(c) << endl;

    return 0;
}