/*
 * name.cpp
 * Name des Programms
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 13, c = 11, erg;

    if (a < 12)
    {
        if (b > 13)
        {
            erg = 5;
        }
        else
        {
            if (c <= 10)
            {
                erg = 6;
            }
            else {
                erg = 2;
            }
        }
    }
    else {
        erg = 4;

    }
    cout << erg;

    return 0;

}
