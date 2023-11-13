/*
 * testklasse.h
 * Header-Datei für Testklasse
 * Autor: Ralf Sasse
 * Datum: 10.11.2023 (FINF28 / Tag 13)
 *
 */

#pragma once

class Testklasse
{
private:

	//  Objekt-Variablen, JEDES Objekt dieser Klasse hat seine eigenen!

	int variable;
	const int konstante = 2;	// WICHTIG: Konstanten HIER vorbelegen!

	static int anzahl;			// Klassen-Variable, gibt es nur einmal!

public:
	Testklasse()				// Standard-Konstruktor (ohne Parameter)
	{
		variable = 1;
		//		konstante = 2;			// geht nicht, konstante hat bereits einen Wert
		anzahl++;
	}

	Testklasse(int i)			// Konstruktor (mit Parameter)
	{
		variable = i;
		anzahl++;
	}

	Testklasse(Testklasse& tk)			// Kopier-Konstruktor (Parameter ist eine
	{									// Referenz auf ein Objekt derselben Klasse)
		this->variable = tk.variable;	// Variablen müssen kopiert werden
		anzahl++;						// (passiert automatisch, wenn man keinen
	}									// eigenen Kopier-Konstruktor erstellt)

//	Testklasse(Testklasse& tk) = delete;	// Kopier-Konstruktor wird deaktiviert,
											// Objekte dieser Klasse werden dadurch
											// kopiergeschützt
											// geht NICHT, wenn man einen eigenen
											// Kopier-Konstruktor entwickelt hat!

	static int getAnzahl()		// Getter (MUSS static sein, weil er sich
	{							// auf eine Klassen-Variable bezieht und
		return anzahl;			// nicht auf eine Objekt-Variable)
	}

	int getVariable() const		// Getter (durch Angabe von "const" wird er
	{							// zu einer Read-Only-Methode und kann auf
		return variable;		// JEDES Objekt angewendet werden, also auf
	}							// "normale" und auch auf konstante Objekte)

	void setVariable(int i)		// Setter (kann NICHT auf konstante Objekte
	{							// angewendet werden, weil sie Daten im Objekt
		variable = i;			// ändert, deshalb fehlt "const")
	}

	~Testklasse()				// Destruktor (es kann nur einen geben!)
	{
		anzahl--;
	}

};				// Hier MUSS ein Semikolon stehen!