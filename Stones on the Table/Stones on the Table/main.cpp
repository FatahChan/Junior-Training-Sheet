// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int n, i = 0,  sRmv = 0;
	string rgb;
	cin >> n >> rgb;
	while (i < rgb.size() - 1) {
		char x = rgb[i], y = rgb[i + 1], z = rgb[i + 2];
		char* mid = &y;
		if (y == x || y == z) {
			rgb.erase(rgb.begin() + i + 1);
			sRmv++;
		}
		else
		{
			i++;
		}


		
		
	}
	cout << sRmv;
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
