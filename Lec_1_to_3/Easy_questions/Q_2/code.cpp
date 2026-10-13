// Input the number of units consumed. 
// Calculate the bill using: first 100 units → ■5/unit; next 100 units → ■7/unit; 
// above 200 units → ■10/unit. Print the total bill.



#include <iostream>
using namespace std;


int main() {

    int units;
    cout << "Enter No.of.Units Consumed : ";
    cin >> units;

    if (units >=  0) {
        if (units <= 100) {
            int bill = units * 5;
            cout << "Your bill : " << bill << endl;

        } else if (units > 100 && units <= 200) {
            int first_hundred = 500;
            int remaining_units = units - 100;
            int final_bill = (remaining_units * 7) + first_hundred;
            cout << "Your bill : " << final_bill << endl;

        } else if (units > 200) {
            int first_hundred = 500;
            int second_hundred = 700;
            int remaining_units = units - 200;
            int final_bill = (remaining_units * 10) + first_hundred + second_hundred;
            cout << "Your bill : " << final_bill << endl;

        }
    } else {
        cout << "Invalid Units." << endl;
        cout << "Please Provide Valid Units" << endl;
    }
    return 0;
}