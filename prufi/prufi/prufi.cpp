// prufi.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 4, 4, 5, 5, 5, 6, 7};

	string zahlen = "Die am haeufigsten vorkommende(n) zahl(en): ";
	int aufkommen = 1;
	int max = 0;
	vector<int> dieHaeufigsten;

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		aufkommen = 1;

		for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[i] == arr[j])
			{
				aufkommen++;
			}
		}
		if (aufkommen > max)
		{
			dieHaeufigsten.clear();
			dieHaeufigsten.push_back(arr[i]);
			max = aufkommen;
				
		}
		else if (aufkommen == max)
		{
			dieHaeufigsten.push_back(arr[i]);

		}
		
	}
	for (int i = 0; i < dieHaeufigsten.size(); i++)
	{
		zahlen += to_string(dieHaeufigsten[i]) + ". ";
	}
	

	cout << zahlen << ": " << max << " mal" << endl;

}
