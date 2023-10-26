/* 
* eingabe.cpp
* Bnutzer-Eingabe
* Autor: Ralf Sasse
* Datum: 24.10.2023 (FINF28 / Tag 1)
* 
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int zahl;
    string text;

    cout << "Bitte Zahl eingeben: ";

    cin >> zahl;

    if ((zahl < 10) && (zahl > -10))
    {
        cout << "Die Zahl ist einstellig" << endl;
    }
    else
    {
        cout << "Die Zahl ist mehrstelling" << endl;
    }

    cout << "Sie haben die Zahl " << zahl << " eingegeben!" << endl;

    cout << "Bitte einen Text eingeben: ";

    // Tastaturpuffer leeren
    cin.ignore(cin.rdbuf()->in_avail());
    cin.clear();

    getline(cin, text);

    cout << "Sie haben den Text " << text << " eingegeben!" << endl;

    return 0;
}