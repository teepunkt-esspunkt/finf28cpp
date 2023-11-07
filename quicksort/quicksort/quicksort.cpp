/*
 * quicksort.cpp
 * Rekursiver Sortier-Algorithmus
 * Autor: Ralf Sasse
 * Datum: 07.11.2023 (FINF28 / Tag 10)
 *
 */

#include <iostream>
#include <ctime>
#include <random>
#include <algorithm>
using namespace std;

// Prototypen

void quicksort(int array[], int erstesElement, int letztesElement);
int partition(int array[], int erstesElement, int letztesElement);
void bubbleSort(int array[], int erstesElement, int letztesElement);

const int ANZAHL = 100000;    // Anzahl der Array-Elemente
const int BEREICH = 10000;  // Wertebereich der Array-Elemente (beginnt mit 1)

int main()
{
    int array[ANZAHL];
    int array2[ANZAHL];
    // array mit Zufallszahlen füllen

    srand(time(NULL));
    for (int i = 0; i < ANZAHL; i++)
        array[i] = rand() % BEREICH + 1;
    copy(begin(array), end(array), array2);

    // Anzeige des Arrays (zu Testzwecken, nur die letzten 100 Elemente)

    cout << "Array vor dem Quicksort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array[i] << " ";
    cout << endl;

    quicksort(array, 0, ANZAHL - 1);

    // Anzeige des Arrays (zu Testzwecken, nur die letzten 100 Elemente)

    cout << "Array nach dem Quicksort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << endl << endl;
    cout << "Array vor dem Bubblesort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array2[i] << " ";
    
    bubbleSort(array2, 0, ANZAHL - 1);

    cout << "Array nach dem Bubblesort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array[i] << " ";
    cout << endl;



    cout << endl;
    return 0;
}

void quicksort(int array[], int erstes, int letztes)
{
    if (erstes < letztes)
    {
        // Array wird geteilt

        int pivot = partition(array, erstes, letztes);

        // Teil-Arrays werden unabhängig voneinander sortiert
        // (rekursiver Funktionsaufruf)

        quicksort(array, erstes, pivot - 1);
        quicksort(array, pivot + 1, letztes);
    }
}

int partition(int array[], int erstes, int letztes)
{
    int pivot = array[letztes]; // pivot ist das Element am Ende des Arrays
    int i = erstes - 1;
    int temp;

    for (int j = erstes; j <= letztes - 1; j++)
    {
        // wenn das aktuelle Element kleiner ist als das Pivot,
        // wird der Index des kleineren Elements hochgezählt
        // und die beiden Elemente werden getauscht

        if (array[j] <= pivot)
        {
            i++;

            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    temp = array[i + 1];
    array[i + 1] = array[letztes];
    array[letztes] = temp;

    return (i + 1);
}

void bubbleSort(int array[], int erstes, int letztes)
{
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) 
    {
        for (int j = 0; j < (sizeof(array) / sizeof(array[0])) - i; i++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

}