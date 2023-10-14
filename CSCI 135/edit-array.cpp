/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab2 Task c
*/

#include <iostream>
using namespace std;

int main() {
    int myData[10]; 
    int i, v;

    for (int j = 0; j < 10; j++) {
        myData[j] = 1;
    }

    do {
        for (int j = 0; j < 10; j++) {
            cout << myData[j] << " ";
        }
        cout << endl;

        cout << "Input index: ";
        cin >> i;

        if (i >= 0 && i < 10) {
            cout << "Input value: ";
            cin >> v;
            myData[i] = v; 
        } else {
            cout << "Index out of range. Exit." << endl;
            break; 
        }
    } while (true);

    return 0;
}
