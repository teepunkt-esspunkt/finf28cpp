/*
 * formPolymorph.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: xx
 *
 */

#include <iostream>
#include "form.h"
#include "quadrat.h"
#include "kreis.h"

using namespace std;

const int ANZAHL = 6;
int main()
{
    Form* array[ANZAHL];         // Vektor aus Basisklassenzeigern

    // Abwechselnd Objekte der Klassen Kreis und Quadrat erzeugen
    // Der SPeicher wird dynamisch angefordert und liegt auf dem Heap
    // und NICHT auf dem Stack, denn der ist zu klein dafür
    // daher der OPerator new

    for (int i = 0; i < ANZAHL; i++)
    {
        if (i % 2)
        {
            array[i] = new Kreis(i + 1);

        }
        else
        {
            array[i] = new Quadrat(i + 1);
        }
    }

    //display()-Methode der einzelnen Objekte aufrufen
    //(funktioniert nur wenn die Objekte eine gemeinsame Basisklasse
    // z.B. Form , haben außerdem muss die 
    //display()-Methode der Basisklasse als virtual
    //definiert sein)

    for (int i = 0; i < ANZAHL; i++)
    {
        array[i]->display();
    }

    //Am Ende sollten alle Ojekte wieder gelöscht werden
    // um den mit new angeforderten Speicher freizugeben
    for (int i = 0; i < ANZAHL; i++)
    {
        delete array[i];
    }
    /*Quadrat q1(5);
    Kreis k1(5);
    cout << "Quadrat: ";
    q1.display();
    cout << "Kreis: ";
    k1.display();*/

    return 0;

}