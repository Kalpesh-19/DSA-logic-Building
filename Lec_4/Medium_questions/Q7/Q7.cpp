#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    //top part
    for(int i = 0; i < n; i++) {
        //spaces 
        for (int j = 1; j <= n-1-i; j++) {
            cout << " ";
        }

        //stars
        for(int k = 0; k < ( 2*i + 1); k++) {
            cout << "*";
        }

        cout << endl;
    }


    //bottom part
    for (int i=0; i < n-1; i++) {
        //spaces
        for (int j=0; j <= i; j++) {
            cout << " ";
        }

        // stars
        for (int k = 2 * i+1; k >= n+1;){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}