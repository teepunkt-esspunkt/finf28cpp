// Tag1_Aufgabe3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double zahl;

    cout << "Bitte eine Zahl eingeben: ";

    cin >> zahl;

    double ergebnis = sqrt(zahl);
    
    cout << ergebnis;

    return 0;
}