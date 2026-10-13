// Input an integer and 
// find: number of digits, sum of digits, largest digit, and smallest digit. 
// Example: 58321 → digits 5, sum 19, largest 8, smallest 1.


#include <iostream> 
using namespace std;


int main() {
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int total_digits = 0;
    int largest = 0;
    int smallest = num % 10;
    int sum = 0;

    

    while (num > 0) {
        
        int last_digit = num % 10;
        total_digits = total_digits + 1;

        if (last_digit >= largest) {
            largest = last_digit;

        } 
        
        if (last_digit <= smallest) {
            smallest = last_digit;
        }

        sum = sum + last_digit;
        num = num / 10;
    }

    cout << "Digits : " << total_digits << endl;
    cout << "Largest Digit : " << largest << endl;
    cout << "Smallest_digit : " << smallest << endl;
    cout << "Sum of Digits : " << sum << endl;

    return 0;
}