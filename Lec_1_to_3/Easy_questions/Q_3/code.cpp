// Input three numbers and find the largest without using max(). 
// Then modify your solution to handle the case where two or three numbers are equal.


#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third Number : ";
    cin >> c;

    if (a == b && a == c) {
        cout << "Three Numbers are equal" << endl;
    } else if (a == b && a > c ) {
        cout << "Largest : " << a << endl;
        cout << a << " Appears Twice" << endl;
    } else if (b == c && b > a) {
       cout << "Largest : " << b << endl;
        cout << b << " Appears Twice" << endl;
    } else if (a == c && a > b) {
        cout << "Largest : " << a << endl;
        cout << a << " Appears Twice" << endl;
    } else if (a == b && a < c) {
        cout << "Largest : " << c << endl;
    } else if ( b == c && b < a) {
        cout << "Largest : " << a << endl;
    } else if ( a == c && b > a){
        cout << "Largest : " << b << endl;
    } else if (a > b && a > c){
        cout << "Largest : " << a << endl;
    } else if (b > a && b > c) {
        cout << "Largest : " << b << endl;
    } else if (c > a && c > b) {
        cout << "Largest : " << c << endl;
    }
   
    return 0;
}