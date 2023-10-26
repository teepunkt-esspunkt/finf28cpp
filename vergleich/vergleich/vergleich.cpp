/*
 * vergleich.cpp
 * Vergleich mehrerer Zahlen
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int zahl1, zahl2, min;


    cout << "Bitte eine Zahl eingeben: ";
    cin >> zahl1;
    cout << "Bitte eine weitere Zahl eingeben: ";
    cin >> zahl2;
/*
    if (zahl1 < zahl2)
    {
        cout << "Die erste Zahl ist kleiner!" << endl;
    }
    else
    {
        cout << "Die erste Zahl ist nicht kleiner!" << endl;
    }

    */
  
    
    min = zahl1 < zahl2 ? zahl1 : zahl2;
    
    cout << "Die kleinere Zahl ist " << min << endl;



    return 0;

}
