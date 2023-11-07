/*
* Nachmittagsaufgabe 1 vom 07.11.2023
*
* Dieses Programm soll innerhalb der Funktion swapp() die beiden
* übergebenen int-Variablen vertauschen. Dazu bekommt sie
* zwei Zeiger auf diese Variablen als Parameter übergeben -
* siehe Prototyp.
*
* Leider liefert swapp() nicht das gewünschte Ergebnis.
* Finden Sie den Fehler und korrigieren Sie ihn.
*
* Erstellen Sie dann eine zweite Version von swapp(), in der die
* beiden int-Variablen zurück getauscht werden. Diesmal sollen
* die beiden Variablen nicht als Zeiger, sondern als Referenz
* übergeben werden.
*
*/

#include <iostream>
using namespace std;

void swapp(int*, int*); // Prototyp von swapp() mit Zeigern

int main()
{
    int x = 42;
    int y = 137;

    cout << "x und y vor dem Tauschen:  "
        << x << "   " << y << endl;

    swapp(&x, &y);            // Version mit Zeigern aufrufen.

    cout << "x und y nach dem Tauschen: "
        << x << "   " << y << endl;

    return 0;
}

// Diese Version von swapp() ist logisch falsch.
// Wo liegt der Fehler?

void swapp(int* p1, int* p2)
{
    int* temp;              // Hilfsvariable 

    temp = p1;
    p1 = p2;
    p2 = temp;
}
