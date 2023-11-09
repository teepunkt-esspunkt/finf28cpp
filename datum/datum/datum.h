/*
 * datum.h
 * header f�r datum
 * Autor: Tarek Saleh
 * Datum: 8.11.2023
 *
 */

#pragma once
#pragma warning(disable : 4996)



#ifndef _DATUM_H_
#define _DATUM_H_

using namespace std;


class Datum
{
private:		// gesch�tzte  elemente (gekapselt)
	unsigned int tag;	
	unsigned int monat;			
	unsigned int jahr;			

public:			// �ffentliche schnittstelle
	
	void init(unsigned int tag, unsigned int monat, unsigned int jahr);
	void init(void);
	void getDatum(void);

};







#endif