/*
* Nachmittagsaufgabe vom 02.11.2023
*
* Erstellen Sie ein C++-Programm, das innerhalb einer Schleife Wörter
* oder Sätze von der Tastatur einliest und überprüft, ob das Wort /
* der Satz ein Palindrom ist.
*
* Ein Palindrom ergibt von links nach rechts gelesen dasselbe Wort /
* denselben Satz wie von rechts nach links gelesen.
*
* Wort-Palindrome sind z.B. "Rentner", "Reittier" oder "Lagerregal".
*
* Satz-Palindrome sind z.B.:
* Eine Horde bedrohe nie!
* Erika feuert nur untreue Fakire.
* O, Genie, der Herr ehre dein Ego!
*
* Wenn ein eingegebenes Wort / ein eingegebener Satz kein Palindrom ist,
* soll eine Fehlermeldung ausgegeben werden. Am Ende des Programms
* soll das längste eingegebene Palindrom ausgegeben werden.
*
* Groß- und Kleinschreibung soll nicht berücksichtigt werden.
*
* Zeichen, die keine Buchstaben sind (Satzzeichen, Leerzeichen etc.)
* sollen nicht berücksichtigt werden.
*
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool istPalindrom(string);

int main()
{
	string eingabe,			// Zuletzt eingegebene Zeile
		laengster("");		// längstes eingegebenes Palindrom
	char weiter;			// Eingabe, ob weiteres Wort geprüft werden soll
	bool palindrom = false; // true, wenn mindestens ein Palindrom eingegeben wurde

	do
	{
		// Eingabe eines neuen Wortes/Satzes

		cout << "Bitte ein Wort oder einen Satz eingeben: " << endl;

		cin.ignore(cin.rdbuf()->in_avail());	// Tastaturpuffer löschen
		cin.clear();

		getline(cin, eingabe);


		if (istPalindrom(eingabe))		// Eingabe ist ein Palindrom
		{
			cout << "Das ist ein Palindrom!" << endl << endl;

			// Längstes Palindrom bestimmen
			laengster = eingabe.size() > laengster.size() ? eingabe : laengster;

			// Schalter für Palindrom gefunden setzen
			palindrom = true;
		}

		else							// Eingabe ist kein Palindrom
		{
			cout << "Das ist leider kein Palindrom!" << endl << endl;
		}

		// Abfrage, ob weiteres Wort/Satz geprüft werden soll

		cout << "Noch ein Wort/ einen Satz eingeben (j/N)? ";

		cin.ignore(cin.rdbuf()->in_avail());	// Tastaturpuffer löschen
		cin.clear();

		weiter = cin.get();

		cout << endl;

	} while ('j' == weiter || 'J' == weiter);


	if (palindrom)	// Wenn mindestens ein Palindrom eingegeben wurde
	{
		cout << endl
			<< "Das laengste eingegebene Palindrom ist: " << endl
			<< laengster << endl;
	}
	else			// Wenn kein Palindrom eingegeben wurde
	{
		cout << endl
			<< "Du hast kein Palindrom eingegeben" << endl;
	}

	return 0;
}

bool istPalindrom(string wort)
{
	string pruefWort("");

	// Nur Buchstaben übernehmen (dabei in Kleinbuchstaben umwandeln)

	for (int i = 0; i < wort.size(); i++)
	{
		if (isalpha(wort[i]))
		{
			pruefWort += isupper(wort[i]) ? wort[i] + 32 : wort[i];
		}
	}

	// Prüfen, ob das Wort / der Satz ein Palindrom ist

	for (int i = 0; i < pruefWort.size() / 2; i++)
	{
		if (pruefWort[i] != pruefWort[pruefWort.size() - 1 - i])
		{
			return false;
		}
	}
	return true;
}
