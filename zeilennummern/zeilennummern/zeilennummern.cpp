// zeilennummern.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string zeile;
    int nummer = 0;

    while (getline(cin, zeile))     // Solange Zeilen vorhanden sind
    {
        cout << setw(4) << ++nummer << ": " << zeile << endl;
    }

    return 0;
}