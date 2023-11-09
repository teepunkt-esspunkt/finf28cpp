/*
* main.cpp
*
* Mit Objekten der Klasse Datum arbeiten
*
*/

#include <iostream>
#include "datum.h" 
using namespace std;
bool datumEingabe(string);

int main()
{
    Datum heute;
    Datum einTag(29, 02, 2022);
    Datum meinTag(30, 03, 1987);
    Datum nochEinTag(11, 11, 2011);
  
    cout << "---------einTag-----------------------" << endl; 
   cout << einTag.getDatum() << endl; 

   cout << "--------nochEinTag-----------------------" << endl;
   cout << nochEinTag.getDatum() << endl;

    cout << "--------------Das-heutige-Datum---------" << endl;
    cout << heute.getDatum() << endl; 
   

    cout << "--------------Der-Geburtstag-von-MIR---------" << endl;
    cout << meinTag.getDatum() << endl;
    

    cout << "---------einTag-veraendert---------------" << endl;
    einTag.setDatum(29,02, 2024);
    cout << einTag.getDatum() << endl;

    cout << "-----Zeig-die-Referenz-----" << endl; 
    Datum* zeiger = &meinTag;      // Zeiger auf geburtstag
    Datum& urlaub = einTag;         // Referenz auf einTag.
    cout << zeiger->getDatum() << endl;
    cout << urlaub.getDatum() << endl; 
    cout << "-----veraendere und Zeig-die-Referenz auf ein tag-----" << endl;
    einTag.setDatum();  
    cout << urlaub.getDatum() << endl;   

    string eingabe;
    cout << "Datum eingeben: ";
    cin >> eingabe;

    datumEingabe(eingabe);
    cout << endl
        << "----nochEinTag-ist-gleich-zu-Heute,-stimmt-das?---1-fuer-ja,-0-fuer-nein----" << endl
        << nochEinTag.isEqual(heute) << endl << endl; 
    cout << endl
        << "----nochEinTag-ist-groesser-als-Heute,-stimmt-das?---1-fuer-ja,-0-fuer-nein--" << endl
        << nochEinTag.isGreater(heute) << endl << endl; 
    cout << endl
        << "----nochEinTag-ist-kleiner-als-Heute,-stimmt-das?---1-fuer-ja,-0-fuer-nein--" << endl
        << nochEinTag.isLess(heute) << endl << endl; 
    



    return 0;
}

bool datumEingabe(string eingabe)
{
   
    
    
        int tagInt = stoi(eingabe.substr(0, 2));
        int monatInt = stoi(eingabe.substr(3, 2));
        int jahrInt = stoi(eingabe.substr(6, 4));
        Datum neuerTag(tagInt, monatInt, jahrInt);
        cout <<"eingegebenes Datum: " << neuerTag.getDatum() << endl;
        return true;

        
    

}