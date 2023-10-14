/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 Task G
*/

#include <iostream>
using namespace std;

void checkerboard3x3(int width, int height) {
    int squareSize = 3;
    int squaresPerRow = width / squareSize;
    int squaresPerColumn = height / squareSize;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int squareRow = i / squareSize;
            int squareCol = j / squareSize;

            if ((squareRow + squareCol) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    cout << "Shape:" << endl;
    checkerboard3x3(width, height);

    return 0;
}
