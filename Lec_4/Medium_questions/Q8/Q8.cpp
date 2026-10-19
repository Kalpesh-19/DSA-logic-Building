#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    //Left part
    for (int i = 0; i < n; i++) {
        
        //spaces 
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        //numbers 
        for (int k = 1; k <= i + 1; k++) {
            cout << k;
        }


        //right part
        if (i == 0) {
            cout << " ";
        }

        else {

            //numbers
            for (int j = i; j > 0; j--) {
                cout << j;
            }

        }

        cout << endl;

    }

    return 0;
}