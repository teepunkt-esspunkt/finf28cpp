/*
 * strings.cpp
 * Beispiele für die Standardklasse string
 * Autor: Ralf Sasse
 * Datum: 02.11.2023 (FINF28 / Tag 7)
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Definition von Objekten der Klassse string (mit Methoden wie size() )

    string s1 = "Hallo";                // Die Schreibweisen bei s2 und s2 sind gleichbedeutend
    string s2("Welt");

    string linie(50, '-');              // Ein String mit 50 Minus-Zeichen
    string linie2("---------------------------------------------------------------------------");

    string text;                        // nicht initialisiert, also ein leerer String

    // Definition eines C-Strings (aus der Sprache C, mit Funktionen wie strlen() )
    // C-Strings sind also keine Objekte einer Klasse, sondern Arrays aus char-Variablen.
    // Deshalb können auf C-Strings keine string-Methoden angewendet werden.

    char cstring[]{ 'a', 'b', 'c', '\0' };     // das Nullbyte am Ende ist wichtig, sonst wissen die
    // Stringbearbeitungs-Funktionen nicht, wo der String endet!
    cout << s1 << endl;
    cout << s2 << endl;
    cout << linie << endl;
    cout << linie2 << endl;
    cout << text << endl;
    cout << cstring << endl;

    if (s1 == s2)
        cout << "Beide Strings sind gleich!" << endl;
    else if (s1 < s2)
        cout << "Der erste String ist kleiner!" << endl;
    else
        cout << "Der erste String ist groesser!" << endl;

    if (s1.compare(s2) != 0)
        cout << s1 << " ist nicht " << s2 << endl;

    cout << s1.length() << endl;        // Die Methoden length und size sind gleichbedeutend
    cout << s2.size() << endl;
    cout << linie.size() << endl;
    cout << linie2.size() << endl;
    cout << text.size() << endl;
    //  cout << cstring.size() << endl;     // geht nicht, denn cstring ist kein Objekt der Klasse string,
                                            // sondern ein Array aus char-Variablen, wie in C üblich.

    string s3 = s1 + " " + s2;          // Verknüpfung von Strings
    s3 += "!";                          // "Hallo Welt!"

    //    string s4 = "Hallo" + "Welt";     // Bei der Verknüpfung von Strings muss auf mindestens einer Seite
    //    string s4 = "Hallo" + cstring;    // des "+"-Operators ein String-Objekt stehen. Nur String-Konstanten
    string s4 = "Hallo" + s2;           // oder C-Strings gehen nicht, weil sie keine Objekte der Klasse string sind.

    s3.insert(s1.size(), " schoene");   // Einfügen eines Textes in einen vorhandenen String
    // (erster Parameter: Einfüge-Position)
    cout << s3 << endl;                 // "Hallo schoene Welt!"

    s3.erase(s1.size(), 8);             // Entfernen eines Teils aus einem String (hier: " schoene")
    // (erster Parameter: Start-Position,
    // zweiter Parameter: Anzahl der zu löschenden Zeichen)
    cout << s3 << endl;                 // "Hallo Welt!"

    s3.replace(6, 4, "Geld");           // Ersetzen eines Teils aus dem String
    // (erster Parameter: Start-Position,
    // zweiter Parameter: Anzahl der zu ersetzenden Zeichen,
    // dritter Parameter: Ersatztext)
    cout << s3 << endl;                 // "Hallo Geld!"

    int position = s3.find("Hallo");     // Suchen eines Teilstrings in einem größeren String

    cout << "Der String \"Hallo\" wurde an Position " << position << " gefunden!" << endl;

    char c = s3[6];

    cout << "s3[6] = " << c << endl;    // Das sechste Zeichen von s3 wird ausgegeben (hier: 'G')

    c = s3[10];

    cout << "s3[10] = " << c << endl;   // Das zehnte Zeichen von s3 wird ausgegeben (hier: '!')

    //  c = s3[20];                         // Funktioniert nicht, denn dieser String hat nur zehn Zeichen.
                                            // Dieser Fehler führt zum Absturz des Programms!
    c = cstring[20];

    cout << "cstring[20] = " << c << endl;      // Bei C-Strings klappt das auch nach dem String-Ende,
    // allerdings stehen dort undefinierte Zeichen.

    c = s3.at(6);                       // Lösung für String-Objekte: Die String-Methode at()
    // Diese Methode erzeugt zwar auch eine Fehlermeldung,
    // aber diese lässt sich in einem try-catch-Block abfangen:
    try
    {
        c = s3.at(20);                  // Der Versuch, ein Zeichen außerhalb des String-Objektes anzusprechen
        // scheitert und erzeugt eine Exception
    }
    catch (const exception& e)
    {
        cout << "FEHLER! " << e.what() << endl;     // auf diese Exception kann z.B. mit einer eigenen
        // Fehlermeldung reagiert werden.
    }                                               // Das Programm wird NICHT automatisch abgebrochen!

    // Beispiel String-Index als Schleifenzähler:

    for (int i = 0; i < s3.length(); i++)
    {
        cout << s3.at(i) << " ";
    }
    cout << endl;

    reverse(s3.begin(), s3.end());      // Funktion zum umdrehen eines Strings - KEINE Methode der Klasse string!
    cout << s3 << endl;

    return 0;
}