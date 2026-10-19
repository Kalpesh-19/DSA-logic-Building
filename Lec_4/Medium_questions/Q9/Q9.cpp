#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        //spaces
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";
        }

        cout << "*";

    }
    return 0;
}