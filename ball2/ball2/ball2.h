#pragma once

#define HEADER "	SPRINGENDER BALL2"
#define BODEN "---------------------------------------------------------------------------------"

#define CLS (cout << "\033[2J")		// Bildschirm löschen 033 (oktal) anstelle von ESC (Escape)

// Curso in Zeile zeile und Spalte spalte positionieren
#define LOCATE(zeile,spalte) (cout << "\033["<< zeile <<';'<< spalte <<'H')