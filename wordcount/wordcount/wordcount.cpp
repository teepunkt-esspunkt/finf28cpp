/*
 * wordcount.cpp
 * Zaehlen von Woertern in einer Datei
 * Autor: Tarek Saleh
 * Datum: 26.10.2023 (FINF28 / Tag 3)
 *
 * Erstellen Sie ein Filterprogramm, das die Wörter einer beliebigen Textdatei
 * zählt und die Anzahl ausgibt. Als Wörter sollen alle Zeichenfolgen gelten,
 * die nur aus den Zeichen a-z oder A-Z bestehen und mindestens zwei Zeichen
 * lang sind.
 *
 * text.txt neben der exe erstellen
 * cmd befehl in dem ordner indem sich die exe und die txt befindet
 * wordcount.exe < text.txt > ergebnis.txt
 */

#include <iostream>
using namespace std;

int main()
{
    int woerter = 0, buchstaben = 0;
    char c;

    while (cin.get(c))
    {
        if ((isalpha((unsigned char)c)) ||       // Wenn das Zeichen ein Buchstabe ist
            (c == -124) || (c == -114) || (c == -108) || (c == -103) || (c == -127) || (c == -102) || (c == -31))
        {
            if (++buchstaben == 2)
            {
                woerter++;      // Wort zählen, wenn der zweite Buchstabe in Folge gefunden wurde
            }
        }
        else
        {
            buchstaben = 0; // Buchstabenzähler zurücksetzen, wenn ein anderes Zeichen gefunden wurde
        }
    }

    cout << "Die Datei hat " << woerter << " Woerter." << endl;

    return 0;
}