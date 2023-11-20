#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 2, c = 3, d = 3;

	cout << boolalpha
		<< (a == b && b == c || c == d) << endl
		<< (a == b || b == c && c == d) << endl;

	cout << (++a == b++ && b-- == ++c || c-- == d++) << endl;
	cout << (++a == b++ || b-- == ++c && c-- == d++) << endl;
}