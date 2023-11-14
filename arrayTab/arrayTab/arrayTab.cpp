/*
 * arrayTab.cpp
 * Adressen und Wert von Vektor-Elemente anzeigen, ZEIGER ARITHMETIK
 * Autor: Tarek Saleh
 * Datum: 14.11.2023
 *
 */

#include <iostream>
using namespace std;

int main()
{

    int array[4] = { 10,20,30,40 };

    cout << "Adressen und Werte der Vektor-Elemente:" << endl;
    // ayayaya size(array) = sizeof(array)/sizeof(array[0]) FFS
    for (int i = 0; i < size(array); i++)
    {
        cout << "Adresse: " << &array[i] << ", Wert: " << array[i] << endl;
    }


    int* zeiger = array; // gleichbedeutend mit &array[0]


    cout << "zeiger: " << zeiger << endl;
    cout << "++zeiger: " << ++zeiger << endl;                // gleichbedeutend mit &array[0+1]  (zeiger wird um 1 hochgezählt)
    cout << "zeiger + 2 :" << zeiger + 2 << endl;           // gleichbedeutend mit &array[3] (also 1+2, zeiger verändert sich hier nicht)
    cout << " * (zeiger + 1) " << *(zeiger + 1) << endl;    // gleichbedeutend mit &array[2] (also 1+1, zeiger verändert sich)
    cout << "zeiger: " << zeiger << endl;
    cout << endl << endl;

    int i = 1;
    // Diese vier Schreibweisen sind gleichbedeutend und geben den Wert an:

    cout << "array[i]       : "         << array[i] << endl;
    cout << "*(array+i)     : "         << *(array + i) << endl;
    cout << "*(zeiger +i)   : "         << *(zeiger + i) << endl;     // naechstes Element wird ausgegeben, zeiger wird aber nicht erhoeht
    cout << "zeiger[i]      : "         << zeiger[i] << endl;
    cout << "array[i]       : " << array[i] << endl;

    cout << endl;
    cout << "zeiger + x :" << zeiger + 99 << endl;
    cout << "*(zeiger + x) :" << *(zeiger + 9) << endl;
   
    // Diese vier Schreibweisen sind gleichbedeutend und geeben den Wert an:
    
    cout << "array +i           : " << array + i << endl;
    cout << "&array[i]          : " << &array[i] << endl;
    cout << "zeiger + i         : " << zeiger + i << endl;

    cout << ++zeiger << endl;       // zweites array-Element (zeiger wird vor der Auswertung inkrementiert)
    cout << zeiger-- << endl;       // zweites array-Element (zeiger wird nach der Auswertung dekrementiert)
    cout << *++zeiger << endl;      // Inhalt des zweiten Array (erst wird zeiger inkrementiert und danach
                                    // der Wert genommen, auf den zeiger anschließend zeigt)


    return 0;

}

