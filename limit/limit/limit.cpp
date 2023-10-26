/* 
* limit.cpp
* Wertebereiche von Integer-Datentypen
* 
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Wertebereiche von Integer-Datentypen" << endl;
    cout << "Typ         Speicher                           Minimum                          Maximum" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;

    cout << "char    " << sizeof(char) << "                    " << CHAR_MIN << "          " << CHAR_MAX << endl;
    cout << "short   " << sizeof(short) << "                   " << SHRT_MIN << "          " << SHRT_MAX << endl;
    cout << "int     " << sizeof(int) << "                     " << INT_MIN << "          " << INT_MAX << endl;
    cout << "long     " << sizeof(long) << "                   " << LONG_MIN << "          " << LONG_MAX << endl;
    cout << "long long   " << sizeof(long long) << "           " << LLONG_MIN << "          " << LLONG_MAX << endl;

    cout << "unsigned char    " << sizeof(unsigned char) << "                    " << 0 << "          " << UCHAR_MAX << endl;
    cout << "unsigned short   " << sizeof(unsigned short) << "                   " << 0 << "          " << USHRT_MAX << endl;
    cout << "unsigned int     " << sizeof(unsigned int) << "                     " << 0 << "          " << UINT_MAX << endl;
    cout << "unsigned long     " << sizeof(unsigned long) << "                   " << 0 << "          " << ULONG_MAX << endl;
    cout << "unsigned long long   " << sizeof(unsigned long long) << "           " << 0 << "          " << ULLONG_MAX << endl;

    return 0;

}