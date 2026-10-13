// Input a number such as 12345 and output 54321. Also handle 1200 → 21. 
// Do not convert the number into a string.



#include <iostream>
using namespace std;

int main(){
    int num, rev_num = 0;
    cout << "Enter Number: ";
    cin >> num;

    while (num > 0) {
        int last_digit = num % 10;
        rev_num = rev_num * 10 + last_digit;
        num = num / 10;
    }

    cout << "After Reverse : " << rev_num << endl;
    return 0;
}