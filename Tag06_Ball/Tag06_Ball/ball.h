#pragma once

#define HEADER "SPRINGENDER BALL"
#define BODEN  "------------------------------------------------------------------------------"

#define CLS (cout << "\033[2J")		// Bildschirm löschen

// Parametrisiertes Makro (also mit Parameter-Übergabe, hier "zeile" und "spalte")

#define LOCATE(zeile,spalte) (cout << "\033["<< zeile <<';'<< spalte <<'H')
// Cursor in Zeile zeile und Spalte spalte positionieren: \033[zeile;spalteH

// Die Funktion hidecursor verhindert, dass der Cursor am linken
// Bildschirmrand zu sehen ist und mit dem Ball auf und ab springt.
void hidecursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}