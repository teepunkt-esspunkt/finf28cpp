// prufiBen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;


class Drink
{
public:
	Drink(string drink)
	{
		cout << "Drink " << drink << endl;
	}
};
class Food
{
private:
	Drink drink;
public:
	Food(string food)
		: drink("Wasser")
	{
		cout << "Food " << food << endl;
	}
};
int main()
{
	Drink drink("Cola");
	Food food("Pizza");
	return 0;

}

