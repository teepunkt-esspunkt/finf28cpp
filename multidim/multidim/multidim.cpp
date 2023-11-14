/*
 * multidim.cpp
 * Demonstration mit mehrdimensionalen Vektoren
 * Autor: Tarek Saleh
 * Datum: 14.11.2023
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char vertreter[2][20] = { "Waalkes, Otto",
                            "Lindenberg, Udo" };

    // Jeder Vertreter hat fuenf verschiedene Artikel im Sortiment,
    // davon wurden verkauft:
    int artikelAnzahl[2][5] = { {20, 51, 30, 17, 44}, 
                                {150, 120, 90, 110, 88} };

    //cout << "Antwort: " << artikelAnzahl[][] << endl << endl;
    cout << "Antwort: " << vertreter[][] << endl << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Vertreter: " << vertreter[i] << endl;
        cout << "Verkaufte Stueckzahlen: ";

        for (int j = 0; j < 5; j++)
        {
            cout << setw(6) << artikelAnzahl[i][j];

        }
        cout << endl;
    }

    return 0;

}

