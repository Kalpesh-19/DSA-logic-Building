// Input a number N and print its multiplication table from 1 to 20. 
// Then modify it so that only even multiples are printed.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number whose table you want : ";
    cin >> n;

    for(int i = 2; i <= 20; i++) {
        if(i % 2 == 0) {
            cout << n << " * " << i << " = " << n*i << endl;
        }
    }
    return 0;
}