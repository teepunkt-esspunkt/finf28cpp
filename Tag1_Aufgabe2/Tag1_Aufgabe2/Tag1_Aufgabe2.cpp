/*
 * Aufgabe 2 vom 24.10.2023
 *
 * Was gibt das nachfolgende C++-Programm auf dem Bildschirm aus?
 *
 * Versuchen Sie, die Lösung in einer .txt-Datei zu notieren,
 * OHNE das Programm ablaufen zu lassen.
 *
 */

#include <iostream>
using namespace std;

void pause(); // Prototyp

int main()
{
	cout << endl << "Lieber Teilnehmer, " << endl
		<< endl << "jetzt ist "
		<< "Zeit fuer einen ";
	pause();
	cout << "!" << endl;
	return 0;
}

void pause()
{
	cout << "KAFFEE";
}
