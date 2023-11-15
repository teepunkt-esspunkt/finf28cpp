/*
 * vererbung.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 15.11.2023
 *
 */

#include <iostream>
#include "vater.h"
#include "sohn.h"

using namespace std;

int main()
{
    Vater vater1("Sven", 69, 5000);
    Sohn sohn1("Olaf", 42, 300, 50);
    const Sohn sohn2("Erik", 39, 200, 40);
    vater1.display();
    sohn1.display();
    sohn2.display();

    return 0;

}

