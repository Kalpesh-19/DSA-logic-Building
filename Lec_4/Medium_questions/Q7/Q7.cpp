#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    //top part
    for(int i = 0; i < n; i++) {

        //spaces 
        for (int j = 1; j <= n - 1 - i; j++) {
            cout << " ";
        }

        //stars
        for(int k = 0; k < ( 2 * i + 1 ); k++) {
            cout << "*";
        }

        cout << endl;
    }


    //bottom part
    for (int i = n - 2; i >= 0; i--) {

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    
    return 0;
}