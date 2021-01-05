#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, cl= 0, rw=0
    ;
    for (int i = 1; i < 26; i++){
        cin >> x;
        if(x==1){
            if(i < 6){
                rw = 1;
            }
            else if(i < 11){
                rw = 2;
            }
            else if(i < 16){
                rw = 3;
            }
            else if(i < 21){
                rw = 4;
            }
            else{
                rw = 5;
            }

            if(i == 5 || i == 10 || i == 15 || i == 20 ||i == 25){
                cl=5;
            }
            else{
                cl = i % 5;
            }
        }
    }

    cout << abs(3-cl) + abs(3-rw);

    return 0;
}
