/*
* dynamisch.cpp
* 
* Demonstration der dynamischen Anforderung von Speicher
* 
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Dynamisch Speicher für eine Integer-Variable auf dem Heap
    // anfordern (nicht auf dem Stack). Der new-Operator gibt
    // einen Zeiger auf die erste Stelle des Speichers zurück.

    int* ptrInteger = new int;

    // Dynamisch Speicher für ein String-Objekt anfordern.

    string* ptrString = new string;

    // Am Ende sollte der Speicher mit dem delete-Operator
    // wieder freigegeben werden.

    delete ptrInteger;
    delete ptrString;

    return 0;
}
