// Night at the Museum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int ltrInd, currPos = 0 , rot = 0;
    //1 - 13 // 14 - 26
    string alph = "abcdefghijklmnopqrstuvwxyz", s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
         ltrInd = alph.find(s.at(i));
         if (abs(currPos - ltrInd) <= 13 && alph.at(ltrInd) != alph.at(currPos)) {
             rot += abs(ltrInd - currPos);
         }
         else
         {
             if (currPos > ltrInd && alph.at(ltrInd) != alph.at(currPos)) {
                 rot += ((26 - currPos) + ltrInd);
             }
             else if (alph.at(ltrInd) != alph.at(currPos))
             {
                 rot += ((26 - ltrInd) + currPos);
             }
         }
         currPos = ltrInd;
         
    }
    
    cout << rot;
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
