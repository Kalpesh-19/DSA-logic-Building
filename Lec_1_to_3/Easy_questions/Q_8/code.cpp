// Determine whether a number is a palindrome. 
// Example: 121 → Palindrome; 123 → Not Palindrome. 
// Try solving it without strings



#include <iostream>
using namespace std;

int main(){
    int num, rev_num = 0;
    cout << "Enter Number: ";
    cin >> num;
    int copy_of_num = num;

    while (num > 0) {
        int last_digit = num % 10;
        rev_num = rev_num * 10 + last_digit;
        num = num / 10;
    }

    if (copy_of_num == rev_num) {
        cout << "Palindrome Number" << endl;
    } else {
        cout << "Not Palindrome Number" << endl;
    }


    return 0;
}