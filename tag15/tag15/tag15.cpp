/*
 * tag15.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 14.11.2023
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int v[] = { 10, 20, 30, 40 }, i, *pv;

    cout << *pv;

    return 0;

}



//Nachmittagsaufgaben Tag 15
//Aufgabe 1
//Der Vektor v ist wie folgt definiert :
int v[] = { 10, 20, 30, 40 }, i, *pv;
//Was geben die folgenden Anweisungen auf dem Bildschirm aus ?
//a) 
for (pv = v; pv <= v + 3; pv++)
cout << " *pv = " << *pv;
// *pv = 10 *pv = 40 *p = // out of bounds oder was sich in einer speicheradresse so befindet(??)
//b) 
for (pv = v, i = 1; i <= 3; i++)
cout << " pv[i] = " << pv[i];
// pv[i] = 10 pv[i] = 20 pv[i] = 30 pv[i] = 40
//c) 
for (pv = v, i = 0; pv + i <= &v[3]; pv++, i++)
cout << " *(pv + i) = " << *(pv + i);
// *(pv +i) = 10 *pv = 30, *pv = ... // die inhalte anderer speicheradressen(??)
//d) 
for (pv = v + 3; pv >= v; --pv)
cout << " v[" << (pv – v) << "] = " << v[pv – v];
// v[0] = 10

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
