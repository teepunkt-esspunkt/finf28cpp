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
#include <chrono>
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

   // Array anlegen
    srand(time(NULL));
    for (int i = 0; i < ANZAHL; i++)
        array[i] = rand() % BEREICH + 1;
    copy(begin(array), end(array), array2);

   
    // Array kopieren fuer die zweite sortiermethode
    cout << "Array vor dem Quicksort (Ausschnitt)" << endl;


    // Anzeige des Arrays vor dem sortieren
    for (int i = 99900; i < ANZAHL; i++)
        cout << array[i] << " ";
    cout << endl;

    // quickstart stoppuhr
    auto start = chrono::high_resolution_clock::now();
    // quicksort stoppuhr GO
    quicksort(array, 0, ANZAHL - 1);
    // quicksort stoppuhr STOP
    auto stop = chrono::high_resolution_clock::now();
    // quicksort quicksort stoppuhr dauer speichern
    auto quicksort_duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    // quicksort quicksort stoppuhr dauer ausgeben
    cout << endl << "Quicksort hat " << quicksort_duration.count() << " mikrosekunden gebraucht." << endl;

    // Anzeige des Arrays nach dem quicksort
    cout << "Array nach dem Quicksort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array[i] << " ";
    cout << endl;

    cout << endl << endl;


    // Anzeige des Arrays vor dem sortieren
    cout << "Array vor dem Bubblesort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array2[i] << " ";
    cout << endl;
    
    // bubblesort 1. timestop 
    auto start2 = chrono::high_resolution_clock::now(); 
    // bubbleSort 2. GO!
    bubbleSort(array2, 0, ANZAHL - 1);
    // bubblesort 3. STOP
    auto stop2 = chrono::high_resolution_clock::now();
    // bubblesort 4. ???
    auto bubblesort_duration = chrono::duration_cast<chrono::microseconds>(stop2 - start2);
    // bubblesort 5. profit ☻
    cout << endl << "Bubblesort hat " << bubblesort_duration.count() << " mikrosekunden gebraucht." << endl;


    // Anzeige des Arrays nach dem bubblesort
    cout << "Array nach dem Bubblesort (Ausschnitt)" << endl;
    for (int i = 99900; i < ANZAHL; i++)
        cout << array2[i] << " ";
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
    // arrays werden zu pointern in funktionen?
    // sizeof liefert die groesse des pointers nicht des arrays, daher werden auch hier der 2. und 3. parameter benoetigt
    int anzahl = letztes - erstes - 1;

    for (int i = 0; i < anzahl; i++) 
    {
        for (int j = 0; j < anzahl - i; j++)
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