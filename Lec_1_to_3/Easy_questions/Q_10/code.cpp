// Input a number and determine whether it is prime. 
// Then improve the logic so that you do not unnecessarily check every number from 2 to N−1.

#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if (num > 0) {
        if (num == 1) {
            cout << "Not Prime" << endl;
            
        } else if (num != 1) {
            for (int i = 2; i <= num-1; i++) {
                if (num % i == 0) {
                    cout << "Not prime" << endl;
                    break;
                }
            }
        }

        cout << "Prime" << endl;

    }
    return 0;
}