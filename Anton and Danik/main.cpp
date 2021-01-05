#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    string ans;
    int Anton = 0;
    int Danik = 0;

    cin >> n >> s;

    for (int i = 0; i < n; i++){
        if (s[i] == 'A'){
            Anton++;
        }
        else{
            Danik++;
        }
    }
    if (Anton == Danik){
        cout << "Friendship" << endl;
    }
    else if(Anton > Danik){
        cout << "Anton" << endl;
    }
    else{
        cout << "Danik" << endl;
    }
    return 0;
}
