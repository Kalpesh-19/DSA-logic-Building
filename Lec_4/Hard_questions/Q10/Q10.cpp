#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    // Top Part
    for (int i = n; i > 0; i--) {

        //left Spaces
        for (int j = 0; j < n - i + 1; j++) {
            cout << "*";
        }

        //Spaces
        for (int k = 0; k < 2 * i - 2; k++) {
            cout << " ";
        }

        // Right Spaces
        for (int j = 0; j < n - i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom Part
    for (int i = 1; i < n; i++) {

        //left Spaces
        for (int j = n; j > i; j--) {
            cout << "*";
        }

        // Spaces
        for (int k = 0; k < 2 * i; k++) {
            cout << " ";
        }

        //Right Stars
        for (int j = n; j > i; j--) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}