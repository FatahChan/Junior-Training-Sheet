// Black Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int r, rm, lm, l, s = 0;
	string sl;
	cin >> r >> rm >> lm >> l >> sl;

	for (int i = 0; i < sl.length(); i++) {
		
		switch (sl.at(i))
		{
		case '1':
			s += r; 
			break;
		case '2':
			s += rm;
			break;
		case '3':
			s += lm;
			break;
		case '4':
			s += l;
			break;
		}
	}
	cout << s;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
