/*
 * teilobjekte.cpp
 * Programm Bechreibung
 * Autor: Tarek Saleh
 * Datum: 13.11.2023
 *
 */

#include <iostream>
using namespace std;

class A
{
private:
    int zahl;
public:
    A()             // Standard-Konstruktor (keine Parameter)
    {
        cout << "Standard-Konstruktor der Klasse A" << endl;
        zahl = 1;
    }

    A(int zahl)        // Parameter Konstruktor
    {
        cout << "Parameter-Konstruktor der Klasse A" << endl;
        this->zahl = zahl;
    }

    int getZahl() const
    {
        return this->zahl;
    }

    void setZahl(int zahl)
    {
        this->zahl = zahl;
    }
};

class B
{
private:
    A a;        // a ist ein objekt der klasse a
                //a ist ein Teilobjekt von B; man sagt auch: "B hat ein A"
    double wert;
public:
    B()
    {
        cout << "Standard-Konstruktor der Klasse B" << endl;
        wert = 1.5;
    }

    B(int x, double y)
    {
        cout << "Parameter-Konstruktor der Klase B" << endl;
        a = A(x);
        wert = y;
    }

    int getZahl() const
    {
        return a.getZahl();
    }
    void setZahl(int zahl) //const
    {
        a.setZahl(zahl);
    }
    double getWert() const
    {
        return wert;
    }
};
int main()
{
    A a1;
    cout << "Objekt a1 hat die Zahl: " << a1.getZahl() << endl;

    A a2(42);
    cout << "Objekt a2 hat die Zahl: " << a2.getZahl() << endl;
    
    B b1;
    cout << "Objekt b1 hat die Zahl : " << b1.getZahl() << endl;
    cout << "Objekt b1 hat die Wert : " << b1.getWert() << endl;

    B b2(42, 1.37);
    cout << "Objekt b2 hat die Zahl : " << b2.getZahl() << endl;
    cout << "Objekt b2 hat die Wert : " << b2.getWert() << endl;

    const B b3(43, 2.7);
    cout << "Objekt b3 hat die Zahl : " << b3.getZahl() << endl;
    cout << "Objekt b3 hat die Wert : " << b3.getWert() << endl;

    b1.setZahl(7);
    b2.setZahl(8);
    //b3.setZahl(9);

    
    return 0;

}

