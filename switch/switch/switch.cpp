/*
 * switch.cpp
 * Menü-Auswahl
 * Autor: Tarek Saleh
 * Datum: 25.10.2023
 *
 */

#include <iostream>
using namespace std;

char menu(); // Prototyp

int main()
{
    char eingabe;

    do
    {
        eingabe = menu();

        switch (eingabe)
        {
        case 'O':
        case 'o': cout << "Datei oeffnen ausgewaehlt" << endl;
            break;
        case 'S':
        case 's': cout << "Datei speichern ausgewaehlt" << endl;
            break;
        case 'B':
        case 'b': cout << "Bearbeiten ausgewaehlt" << endl;
            break;
        case 'E':
        case 'e': cout << "Einstellungen ausgewaehlt" << endl;
            break;
        case 'X':
        case 'x': cout << "Beenden ausgewaehlt" << endl;
            return 0;
        default: cout << "Ungueltige Eingabe!" << endl;

        
        }

    } while(true);
   

   

}

char menu()
{
    cout << "Menue" << endl
        << "------" << endl
        << "[o] Datei Oeffnen" << endl
        << "[s] Datei Speichern" << endl
        << "[b] Bearbeiten" << endl
        << "[e] Einstellungen" << endl
        << "[x] Beenden" << endl
        << ">> ";

    char eingabe;
    cin >> eingabe;
    cin.ignore(cin.rdbuf()->in_avail());
    cin.clear();
    return eingabe;
}
