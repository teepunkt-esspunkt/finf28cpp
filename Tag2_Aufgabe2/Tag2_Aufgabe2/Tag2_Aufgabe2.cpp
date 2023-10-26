/*
 * Tag2_Aufgabe2.cpp
 * Lotto
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
#include <cstdlib>   
#include <ctime>      
#include <algorithm>


using namespace std;

int zufall(int, int);
void lotto(int zahlen[], int arrayLaenge);
const int LOW = 1;  
const int HIGH = 49;  
int zahlen[6];


int main()
{
    int arrayLaenge = sizeof(zahlen) / sizeof(zahlen[0]);
   
    srand(time(NULL));    
    int x = 0;
    
    lotto(zahlen, arrayLaenge);

    std::sort(zahlen, zahlen + arrayLaenge);
    for (int i = 1; i < arrayLaenge; i++)
    {
        while (zahlen[i] == zahlen[i - 1])
        {
            lotto(zahlen, arrayLaenge);
            sort(zahlen, zahlen + arrayLaenge);
            i = 0;
        }
    }
    for (int i = 0; i < arrayLaenge; i++)
    {
        cout << zahlen[i] << endl;
    }
    
}

int zufall(int low, int high)
{
    return low + rand() % (high - low + 1);    
    
}

void lotto(int zahlen[], int arrayLaenge) {
    for (int i = 0; i < arrayLaenge; i++)
    {
        zahlen[i] = zufall(LOW, HIGH);
    }

}