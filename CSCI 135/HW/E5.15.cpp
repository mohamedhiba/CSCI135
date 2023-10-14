// Author: Mohamed Esam Hiba
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: E5.15

#include <iostream>
using namespace std;

void sort3(int& a, int& b, int& c) {
    if (a > b){
        a = a + b;
        b = a - b;
        a = a - b; 
    }
    if (b > c){
        b = b + c;
        c = b - c;
        b = b - c; 
    }
    if (a > b){
        a = a + b;
        b = a - b;
        a = a - b; 
    }
}

int main() {
    int a, b, c;

    cout << "Enter number (1) : ";
    cin >> a;
    cout << "Enter number (2) : ";
    cin >> b;
    cout << "Enter number (3) : ";
    cin >> c;

    sort3(a, b, c);

    cout << "The numbers in ascending order are: " << a << " and " << b << " and " << c << endl;

    return 0;
}
