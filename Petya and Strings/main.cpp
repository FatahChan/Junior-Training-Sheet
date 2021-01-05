#include <iostream>
#include <cctype>
#include <cstring>


using namespace std;

int charComp (char x, char y){
    if (x > y){
        return 1;
    }
    else if (x == y){
        return 0;
    }
    else{
        return -1;
    }
};

int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    for (int i = 0; i < a.size(); i++   ){
        if (charComp(a[i], b[i])== 1){
            cout << 1;
            return 0;
        }
        else if (charComp(a[i], b[i])== -1){
            cout << -1;
            return 0;
        }
    }


    cout << 0;
    return 0;
}
