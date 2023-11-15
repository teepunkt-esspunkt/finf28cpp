/*
 * tag16.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 15.11.2023
 *
 */

#include <iostream>
#include "form.h"
#include "quadrat.h"
#include "kreis.h"

using namespace std;

int main()
{
    Quadrat q1(5);
    Kreis k1(5);
    cout << "Quadrat: ";
    q1.display();
    cout << "Kreis: ";
    k1.display();

    return 0;

}

