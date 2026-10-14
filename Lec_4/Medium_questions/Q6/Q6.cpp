#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        //Star & End line
        if(i==0 || i==(n-1)) {
            for (int k=0; k<n; k++) {
                cout << "* ";
            }
        } 
        else {
            //Middle part
            cout << "* ";

            for (int j=0; j<n-2; j++) {
                cout << "  ";
            }

            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}