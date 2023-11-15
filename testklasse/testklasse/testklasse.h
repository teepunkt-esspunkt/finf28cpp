/*
 * testklasse.h
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 10.11.2023
 *
 */

#pragma once
using namespace std;

class Testklasse
{
private:
	// Objekt Variablen JEDES objekt dieser klasse hat eingene!
	int variable;
	const int konstante = 2; // Wichtig, Konstante hier vorbelegen

	// klassenvariable
	static int anzahl; // klassenvariablie gibt es nur einmal

public:
	Testklasse()		// Standard-Konstruktor (ohne Parameter)
	{
		variable = 1;
		//konstante = 2;	// geht nicht, konstante ist bereits belegt
		anzahl++;
	}

	Testklasse(int i) // Konstruktor mit Parameter
	{
		setVariable(i);
		anzahl++;
	}

	Testklasse(Testklasse& tk)		// Kopier-Konstruktor Parameter ist eine Rferenz
	{								// auf ein Objekt derselben Klasse (und somit automatisch
									// ein KopierKOnstruktor
		this->variable = tk.variable; // Variablen müssen kopiert werden
		anzahl++;					// passiert automatisch wenn man keinen
									// eigenen Kopier Konstruktor erstellt
	}

	//Testklasse(Testklasse& tk) = delete; // Kopier Konstruktor wird deaktiviert
											// Objekte der KLasse werden
										//dadurch Kopiergeschützt
								//geht nicht wenn man einen eigenen kopierKonstruktor entwickelt hat

	static int getAnzahl() // getter, static weil static, 
	{						// static weil es sich auf eine klassen variable bezieht und nicht auf eine objekt variable
		return anzahl;
	}
	int getVariable() const			// Getter (kann so auch auf const zugreifen)
	{							// Durch angabe von const wird der getter zu einer REad Only Methode
		return variable;		// und kann auf jedes objekt angewendet werden also auf
								// normale und constante 
	}
	void setVariable(int i) // kein const! kann nicht auf konstante objekte angewendet werden (deshalb kein const)	
	{						// weil sie daten im objekt ändert
		if (i == 42)
		{
			cout << "unerlaubte zahl" << endl;
			cout << "stattdessen: 137" << endl;
			variable = 137;
		}
		else 
		{
			variable = i;
			cout << "ok war keine 42" << endl;
		}
		
	}

	~Testklasse()		//Destruktor (es kann nur einen geben!)
	{
		anzahl--;
	}
};		// Hier muss ein Semikolon hin
