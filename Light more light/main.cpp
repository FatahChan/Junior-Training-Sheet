#include <iostream>

using namespace std;

int main()
{
    int N = 1;
    int NumCase = 0;
    string on_off = "no";
    string output[20];


    while (N != 0){
        cin >> N;

        for (int i = 1; i <= N; i++){
            if (N % i == 0){
                if (on_off == "no"){
                    on_off = "yes";
                }
                else if (on_off == "yes"){
                    on_off = "no";
                }

            }

        }
        output[NumCase] = on_off;
        NumCase++;
    }




    for (int i = 0; i < NumCase -1; i++){
        cout << output[i] << endl;
    }





    return 0;
}
