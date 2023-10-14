/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

asking the user to input 3 integer numbers and prints out the smaller of the three.
*/
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 != 0) {
        cout << "Common year" << endl;
    } else if (year % 100 != 0) {
        cout << "Leap year" << endl;
    } else if (year % 400 != 0) {
        cout << "Common year" << endl;
    } else {
        cout << "Leap year" << endl;
    }

    return 0;
}
