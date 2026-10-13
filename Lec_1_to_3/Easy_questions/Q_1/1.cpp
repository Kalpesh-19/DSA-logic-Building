#include <iostream>
using namespace std;

int main() {
    // Input a three-digit number 
    // and print: first digit, middle digit, last digit, sum of digits, and product of digits.

    // Ans -
    int num; 
    cout <<"Enter Your Number : ";
    cin >> num;

    if (num >= 100 && num <= 999){
        int lastDigit = num % 10;
        int twoDigit = num / 10;
        int middleDigit = twoDigit % 10;
        int firstDigit = twoDigit / 10;

        int sum = firstDigit + middleDigit + lastDigit;
        int product = firstDigit * middleDigit * lastDigit;

        cout << "First Digit : " << firstDigit << endl;
        cout << "Middle Digit : " << middleDigit << endl;
        cout << "Last Digit  : " << lastDigit << endl;

        cout << "Sum of Digits : " << sum << endl;
        cout << "Product of Digits : "<< product << endl;
    } else {
        cout << "Invalid Number.\nNumber must be three digit." << endl;
    }

    

    return 0;
}