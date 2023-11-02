/*
* myMakros.h - Teil der Nachmittagsaufgabe 1 vom 01.11.2023
*
*/

#ifndef MY_MAKROS
#define MY_MAKROS

#include <iostream>
using namespace std;

// Makro MAX
// Liefert die größere von zwei Zahlen

#define MAX(a, b) ((a<b) ? b : a)

// Makro MIN
// Liefert die kleinere von zwei Zahlen

#define MIN(a, b) ((a<b) ? a : b)

// Makro ABS
// Liefert den Absolutwert einer Zahl 
// (also den Wert der Zahl ohne Vorzeichen)

#define ABS(a) ((a<0) ? -a : a)

#endif