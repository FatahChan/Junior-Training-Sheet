// Card for friends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int c = 0, w = 0, h = 0, n = 0, np;
	bool isNotEnough, isPossible;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> w >> h >> n;
		isNotEnough = true; isPossible = true; np = 1;
		while (isNotEnough == true && isPossible == true) {
			if (np >= n) {
				isNotEnough = false;
			}
			else if (w % 2 == 0 || h % 2 == 0) {
				if (w % 2 == 0)
				{
					w /= 2;
					np *= 2;
				}
				else {
					h /= 2;
					np *= 2;
				}
			}
			else {
				isPossible = false;
			}
		}
		if (isPossible == true) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}




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
