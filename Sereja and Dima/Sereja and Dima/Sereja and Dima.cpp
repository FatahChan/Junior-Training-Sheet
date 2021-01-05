// Sereja and Dima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int n = 0, v, sPoint = 0, dPoint = 0;
	cin >> n;
	vector<int> values;
	for (int i = 0; i < n; i++) {
		cin >> v;
		values.push_back(v);
	}

	while (values.size() != 0) {
		if (values.front() > values.back()) {
			sPoint += values.front();
			values.erase(values.begin());
		}
		else {
			sPoint += values.back();
			values.pop_back();
		}
		
		if (values.front() > values.back() && values.size() != 0) {
			dPoint += values.front();
			values.erase(values.begin());
		}
		else if (values.size() != 0) {
			dPoint += values.back();
			values.pop_back();
		}

		

	}
	cout << sPoint << endl << dPoint;
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
