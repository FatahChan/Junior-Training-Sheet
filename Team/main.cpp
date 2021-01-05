#include <iostream>

using namespace std;

int main()
{
    int n, ansr = 0;
    int x, y, z;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        if (x+y+z >= 2){
            ansr++;
        }
    }
    cout << ansr << endl;
    return 0;
}
