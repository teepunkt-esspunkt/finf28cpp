/*
 * name.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: xx
 *
 */

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    // 3 Strings fuer den Userinput. original, getrimmt und getrimmt + umgedreht
    string so;
    string s1;
    string s2;

    bool buchstaben = false;
    bool ende = false;
    bool palindrom = false; 
    int laengste = 0;
    string laengstePali;
    string laengsteOrig;


    while (!ende) {


        cout << "Bitte etwas eingeben! zum Beenden nur Enter druecken!" << endl;
        getline(cin, so);
        if (so.length() == 0) {
            ende = true;
            if (palindrom == true) {
                cout << "Das laengste eingegebene Palindrom ist: " << "\"" << laengsteOrig << "\" mit " << laengsteOrig.length() << " Zeichen!" << endl
                    << "\"" << laengstePali << "\"" << endl;


            }
            else {
                cout << "Leider wurde kein gueltiges Palindrom eingegeben!" << endl;
            }
        }
        s1 = so;



        for (string::size_type i = 0; i < s1.length(); i++) {
            if (!isalpha(s1[i]) || (!isalnum(s1[i]))) {
                s1.erase(i, 1);
                i--;
            }
            else {
                s1[i] = tolower(s1[i]);
                buchstaben = true;
            }
        }

        if (s1.length() > laengste) {
            laengste = s1.length();
            laengstePali = s1;
            laengsteOrig = so;
        }
        s2 = s1;
        reverse(s2.begin(), s2.end());



        if (ende == false)
        {
            if (s1.compare(s2) == 0 && s1.length() > 1) {
                cout << "\"" << so << "\"" << " ist ein Palindrom!" << endl << s2 << endl;
                palindrom = true;
            }
            else {
                //throw runtime_error("DAS IST KEIN PALINDROM!");
                cerr << endl << "DAS IST KEIN PALINDROM!" << endl;
            }
        }


    }







    return 0;

}

