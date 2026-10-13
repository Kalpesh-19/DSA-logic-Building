#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        //Spaces
        for (int j=n-1; j>i; j--) {
            cout << " ";
        } 

        //stars
        for (int k=0; k<(2*i+1); k++) {
            cout << "*";
        }

        cout << endl;

    }
    return 0;
}