/*
 * tag15.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 14.11.2023
 *
 */

#include <iostream>
#include "mitglied.h"
#include "datum.h"

using namespace std;

void sortN(Mitglied* []);
void sortG(Mitglied* []);

int main()
{

    Mitglied m1(99, "Serral", 19, 10, 1990);
    Mitglied m2(89, "Flash", 20, 10, 1990);
    Mitglied m3(100, "Yagami", 17, 7, 1970);
    Mitglied m4(101, "Delos", 16, 6, 1960);
    Mitglied m5(1, "AB", 11, 1, 1950);
    
    Mitglied* mitzeig[5] = { &m1, &m2, &m3, &m4, &m5 };
    Mitglied* temp[5]; 
    cout << "**************************Standard***********************" << endl;
    for (int i = 0; i < 5; i++)
    {
        mitzeig[i]->ausgabe();
    }

    cout << "**************************Geburtstags-Sortierung***********************" << endl; 
    sortG(mitzeig);

    for (int i = 0; i < 5; i++)
    {
        mitzeig[i]->ausgabe();
    }

    cout << "**************************Namens-Sortierung***********************" << endl;  
    sortN(mitzeig);
    for (int i = 0; i < 5; i++)
    {
        mitzeig[i]->ausgabe();
    }


    return 0;

}

void sortN(Mitglied* mitzeig[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (mitzeig[j]->getName() > mitzeig[j + 1]->getName())
            
            {
                swap(mitzeig[j], mitzeig[j + 1]);

            }
        }
    }
    
}
void sortG(Mitglied* mitzeig[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i -1; j++)
        {
            if (mitzeig[j]->getGeburtstag().isGreater(mitzeig[j + 1]->getGeburtstag()))
            {
                swap(mitzeig[j], mitzeig[j + 1]);

            }
        }
    }

}

////Aufgabe 2
//Erstellen Sie ein Programm, das mindestens fünf Objekte der Klasse Mitglied
//enthält.Definieren Sie dann einen Vektor aus Zeigern auf diese Objekte und
//weisen Sie jedem Vektor - Element die Speicheradresse eines dieser Objekte zu.
//Geben Sie anschließend zweimal die Daten aller Mitglieder mit der Methode
//display() aus.Beim ersten Mal sollen die Mitglieder nach dem Namen sortiert
//sein, beim zweiten Mal sollen sie nach dem Geburtsdatum sortiert sein.
//Beachten Sie, dass beim Sortieren ausschließlich die Zeiger innerhalb des
//Vektors getauscht werden sollen, aber nicht die Objekte selbst.
//Bitte geben Sie ein ZIP - Archiv ab, das folgende Dateien enthält :
//• main.cpp
//• mitglied.cpp(aus der Nachmittagsaufgabe von Tag 14)
//• mitglied.h(aus der Nachmittagsaufgabe von Tag 14)
//• datum.cpp(aus der Nachmittagsaufgabe von Tag 12)
//• datum.h(aus der Nachmittagsaufgabe von Tag 12

//
////Nachmittagsaufgaben Tag 15
////Aufgabe 1
////Der Vektor v ist wie folgt definiert :
//int v[] = { 10, 20, 30, 40 }, i, *pv;
////Was geben die folgenden Anweisungen auf dem Bildschirm aus ?
////a) 
//for (pv = v; pv <= v + 3; pv++)
//cout << " *pv = " << *pv;
//// *pv = 10 *pv = 40 *p = // out of bounds oder was sich in einer speicheradresse so befindet(??)
////b) 
//for (pv = v, i = 1; i <= 3; i++)
//cout << " pv[i] = " << pv[i];
//// pv[i] = 10 pv[i] = 20 pv[i] = 30 pv[i] = 40
////c) 
//for (pv = v, i = 0; pv + i <= &v[3]; pv++, i++)
//cout << " *(pv + i) = " << *(pv + i);
//// *(pv +i) = 10 *pv = 30, *pv = ... // die inhalte anderer speicheradressen(??)
////d) 
//for (pv = v + 3; pv >= v; --pv)
//cout << " v[" << (pv – v) << "] = " << v[pv – v];
//// v[0] = 10
//
