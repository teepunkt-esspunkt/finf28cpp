/*
 * teilobjekte.cpp
 * Demonstration von Teilobjekten
 * Autor: Ralf Sasse
 * Datum: 13.11.2023 (FINF28 / Tag 14)
 *
 */

#include <iostream>
using namespace std;

class A
{
private:
    int zahl;
public:
    A()             // Standard-Konstruktor
    {
        cout << "Standard-Konstruktor der Klasse A" << endl;
        zahl = 1;
    }

    A(int zahl)     // Parameter-Konstruktor
    {
        cout << "Parameter-Konstruktor der Klasse A" << endl;
        this->zahl = zahl;
    }

    int getZahl() const
    {
        return zahl;
    }
};

class B
{
private:
    const A a;      // a ist ein ein Objekt der Klasse A
    // und ein Teilobjekt der Klasser B;
    // man sagt auch: "B hat ein A"
    double wert;
public:
    B()             // Standard-Konstruktor
    {
        cout << "Standard-Konstruktor der Klasse B" << endl;
        wert = 1.5;
    }

    B(int x, double y)      // Parameter-Konstruktor
        : a(x), wert(y)     // Element-Initialisierer (im "Methoden-Hals")
        // bewirken, dass der Konstruktor von A nur noch
        // einmal aufgerufen wird statt zweimal, auÃŸerdem
        // funktioniert dieses Verfahren auch mit const-Objekten
    {
        cout << "Parameter-Konstruktor der Klasse B" << endl;
    }

    int getZahl() const
    {
        return a.getZahl();
    }

    double getWert() const
    {
        return wert;
    }
};

int main()
{
    A a1;

    cout << "Objekt a1 hat die Zahl : " << a1.getZahl() << endl;

    A a2(42);

    cout << "Objekt a2 hat die Zahl : " << a2.getZahl() << endl;

    B b1;

    cout << "Objekt b1 hat die Zahl : " << b1.getZahl() << endl;
    cout << "Objekt b1 hat den Wert : " << b1.getWert() << endl;

    B b2(42, 1.37);

    cout << "Objekt b2 hat die Zahl : " << b2.getZahl() << endl;
    cout << "Objekt b2 hat den Wert : " << b2.getWert() << endl;

    return 0;
}