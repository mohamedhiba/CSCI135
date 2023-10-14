/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task C
*/

#include <iostream>
using namespace std;

int main() {
    int total = 0;
    char oper;
    int num;

    while (cin >> num) {
        total += num;

        while (cin >> oper) {
            if (oper == '+') {
                break;
            } else if (oper == '-') {
                if (cin >> num) {
                    total -= num;
                }
            } else if (oper == ';') {
                cout << total << endl;
                total = 0;
                break;
            }
        }
    }
    return 0;
}