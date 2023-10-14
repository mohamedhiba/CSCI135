/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1 Task A
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (cin >> num) {
        sum += num;
    }

    cout << sum << endl;

    return 0;
}
