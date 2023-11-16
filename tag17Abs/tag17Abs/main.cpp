/*
 * main.cpp
 * Teil des Projekts "formAbstrakt"
 * Autor: Ralf Sasse
 * Datum: 16.11.2023 (FINF28 / Tag 17)
 *
 */

#include <iostream>
#include "form.h"
#include "kreis.h"
#include "quadrat.h"

using namespace std;

const int ANZAHL = 6;

int main()
{
	Form* array[ANZAHL];		// Vektor aus Basisklassenzeigern

	// Abwechselnd Objekte der Klassen Kreis und Quadrat erzeugen.
	// Der Speicher wird dynamisch angefordert und liegt auf dem Heap
	// (und NICHT auf dem Stack, denn der ist zu klein dafür),
	// daher der Operator new.

	for (int i = 0; i < ANZAHL; i++)
	{
		if (i % 2)
		{
			array[i] = new Kreis(i + 1);
		}
		else
		{
			array[i] = new Quadrat(i + 1);
		}
	}

	// display()-Methoden der einzelnen Objekte aufrufen
	// (funktioniert nur, wenn die Objekte eine gemeinsame
	// Basisklasse, z.B. Form, haben. Außerdem muss die
	// display()-Methode der Basisklasse als virtual
	// definiert sein).

	// virtualDisplay() ist in der Basisklasse Form REIN virtuell,
	// d.h. die Basisklasse wird dadurch abstrakt. Es können also
	// nur noch Objekte der abgeleiteten Klassen Kreis und Quadrat
	// erzeugt weden, aber keine Objekte der Klasse Form.

	for (int i = 0; i < ANZAHL; i++)
	{
		array[i]->display();
		array[i]->virtualDisplay();
	}

	// Am Ende sollten alle Objekte wieder gelöscht werden,
	// um den mit new angeforderten Speicher freizugeben.

	for (int i = 0; i < ANZAHL; i++)
	{
		delete array[i];
	}

	return 0;
}
