#include <iostream>

using namespace std;

int main()
{
    int n;
    int h;
    int minWitdh = 0;
    int height ;

    cin >> n >> h;
    for (int i = 0; i < n; i++){
            cin >> height ;
            if( height > h){
                minWitdh++;
            }

            minWitdh++;


    }
    cout << minWitdh << endl;

    return 0;
}
