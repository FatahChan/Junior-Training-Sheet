#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    int  x[n];
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int y = 0; y < n; y++){
        for (int i = 0; i < n-1; i++){
            if (x[i+1] < x[i]){
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << x[i] << ' ';
    }

    return 0;
}
