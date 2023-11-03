/*
* namespace.cpp
* Demonstration von Namensräumen
* Quelle: https://de.wikipedia.org/wiki/Namensraum
*
*/

#include <iostream>
using namespace std;

namespace Germany
{
    string anthemTitle = "Das Lied der Deutschen";
}

namespace Austria
{
    string anthemTitle = "Land der Berge";
}

void output1()
{
    string anthemTitle = "Schweizerpsalm";
    cout << Germany::anthemTitle << endl;   // Ausgabe: Das Lied der Deutschen
    cout << Austria::anthemTitle << endl;   // Ausgabe: Land der Berge
    cout << anthemTitle << endl;            // Ausgabe: Schweizerpsalm
}

void output2()
{
    using namespace Germany;

    cout << anthemTitle << endl;            // Ausgabe: Das Lied der Deutschen
    cout << Austria::anthemTitle << endl;   // Ausgabe: Land der Berge
}

void output3()
{
    using namespace Austria;

    cout << Germany::anthemTitle << endl;   // Ausgabe: Das Lied der Deutschen
    cout << anthemTitle << endl;            // Ausgabe: Land der Berge
}

void output4()
{
    using namespace Germany;
    using namespace Austria;

    cout << Germany::anthemTitle << endl;            // Fehler: Referenz auf anthemTitle ist mehrdeutig
    cout << Austria::anthemTitle << endl;            // Fehler: Referenz auf anthemTitle ist mehrdeutig
}

int main()
{
    output1();
    output2();
    output3();
    return 0;
}