// Author: Mohamed Esam Hiba
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: E5.14

#include <iostream>
using namespace std;

void sort2(int& a, int& b) {
    if (a > b) {
        int c = b;
        b = a;
        a = c;
    }
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    sort2(a, b);

    cout << "The numbers in ascending order are: " << a << " and " << b << endl;

    return 0;
}
