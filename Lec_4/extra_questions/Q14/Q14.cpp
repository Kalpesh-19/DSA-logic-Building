#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++) {

        //Spaces
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }


        //Characters
        for (int k = i; k < n; k++) {
            cout << ch << " ";
        }

        ch++;
        cout << endl;
    }

    return 0;
}