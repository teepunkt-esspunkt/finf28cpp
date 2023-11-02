#pragma once

#define HEADER "	SPRINGENDER BALL"
#define BODEN "--------------------------------------------------------------------------------"

#define CLS (cout << "\033[2J")		// Bildschirm löschen 033 (oktal) anstelle von ESC (Escape)

// Curso in Zeile zeile und Spalte spalte positionieren
#define LOCATE(zeile,spalte) (cout << "\033["<< zeile <<';'<< spalte <<'H')

#define LOCATE2(zeile2,spalte2) (cout << "\033["<< zeile2 <<';'<< spalte2 <<'H')

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