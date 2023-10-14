/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1 D

Write an even better calculator program calc3.cpp that can understand squared numbers. 
We are going to use a simplified notation X^ to mean X2. For example, 
10^ + 7 - 51^ should mean 102 + 7 − 512.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    char ch = '+';
    int operand;

    while (cin >> operand) {
        char nextChar;
        cin >> nextChar;
        if (nextChar == '^') {
            operand = operand * operand; // Square the operand
            cin >> nextChar; // Read the next character
        }

        if (ch == '+') {
            sum += operand;
        } else if (ch == '-') {
            sum -= operand;
        }

        if (nextChar == ';') {
            cout << sum << endl;
            sum = 0; // Reset sum after printing the result
            ch = '+';
        } else {
            ch = nextChar; // Update the operator for the next iteration
        }
    }
    return 0;
}









