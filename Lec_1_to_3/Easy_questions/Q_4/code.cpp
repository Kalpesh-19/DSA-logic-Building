// Input an integer and 
// determine whether it is: positive even, positive odd, negative even, negative odd, or zero.

#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << num << " is Positive Even" << endl;
        } else {
            cout << num << " is Positive Odd" << endl;
        }
    } else if (num < 0) {
         if (num % 2 == 0) {
            cout << num << " is Negative Even" << endl;
        } else {
            cout << num << " is Negative Odd" << endl;
        }
    } else {
        cout << "Number is Zero" << endl;
    }


    return 0;
}