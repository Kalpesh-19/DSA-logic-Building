#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;

    // upper part
    for (int i = 0; i < n; i++) {

        //spaces
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";//left spaces
        }

        cout << "*"; //first star

        //spaces
        if (i != 0) {
            for (int k = 0; k < 2 * i - 1; k++){
                cout << " ";//middle spaces
            }

            cout << "*";//second star
        }

        cout << endl;

    }


    // lower part
    for (int i = n - 2; i >= 0; i--) {

        //spaces
        for (int j = 0; j < n - i - 1 ; j++) {
            cout << " "; //left space
        }

        cout << "*"; //first star

        if (i != 0) {

            for (int k = 0; k < 2 * i - 1; k++) {
                cout << " "; //middle space
            }

            cout << "*"; //second star

        }

        cout << endl;

    }
    return 0;
}