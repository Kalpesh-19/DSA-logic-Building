// Input N. 
// Calculate separately the sum of all even numbers from 1 to N and the sum of all odd numbers from 1 to N.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int sum_of_evens = 0;
    int sum_of_odds = 0;

    if (n > 0) {
        for (int i = 1; i <= n; i++){
            if (i % 2 == 0) {
                sum_of_evens += i;
            } else {
                sum_of_odds += i;
            }
    }

        cout << "Sum of Even Numbers : " << sum_of_evens << endl;
        cout << "Sum of Odd Numbers : " << sum_of_odds << endl;

    } else {
        cout << "Number must be greater than 0 ";
    }
    
    return 0;
}