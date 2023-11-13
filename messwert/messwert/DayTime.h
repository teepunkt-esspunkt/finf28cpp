// DayTime.h
// Die Klasse DayTime stellt die Uhrzeit mit Stunden, 
// Minuten und Sekunden dar.
// ---------------------------------------------------

#ifndef DAYTIME_H
#define DAYTIME_H

#include <iostream>
#include <iomanip>
using namespace std;

class DayTime
{
private:
    short hour, minute, second;
    bool overflow;

public:
    DayTime(int h = 0, int m = 0, int s = 0)
    {
        overflow = false;
        if (!setTime(h, m, s))        // this->setTime(...)
            hour = minute = second = 0;  // hour ist 
    }                                // this->hour etc.
    bool setTime(int hour, int minute, int second = 0)
    {
        if (hour >= 0 && hour < 24
            && minute >= 0 && minute < 60
            && second >= 0 && second < 60)
        {
            this->hour = (short)hour;
            this->minute = (short)minute;
            this->second = (short)second;
            return true;
        }
        else
            return false;
    }
    int getHour()   const { return hour; }
    int getMinute() const { return minute; };
    int getSecond() const { return second; };

    int asSeconds() const    // Tageszeit als Sekunden
    {
        return (60 * 60 * hour + 60 * minute + second);
    }

    bool isLess(DayTime t) const  // *this mit t vergl.
    {
        return  asSeconds() < t.asSeconds();
    }      // this->sSeconds() < t.asSeconds(); 

    void print() const
    {
        cout << setfill('0')
            << setw(2) << hour << ':'
            << setw(2) << minute << ':'
            << setw(2) << second << endl;
        cout << setfill(' ');
    }
    void swap(DayTime& t)       // ein Parameter!
    {                            // *this und t tauschen:
        DayTime temp(t);  t = *this;  *this = temp;
    }
};

const DayTime& currentTime();    // Die aktuelle Zeit.

#endif   // DAYTIME_H