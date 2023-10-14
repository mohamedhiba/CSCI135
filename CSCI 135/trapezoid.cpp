/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 Task F
*/

#include <iostream>
using namespace std; 

void shape (int w,int h){
    if (h > w / 2 ) {
        cout << "Impossible shape!" << endl;
    }

    int spaces = 0;
    int stars = w;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;

        spaces += 1;
        stars -= 2;
    }

}

int main (){
    int w, h;
    cout << "Input width: "; cin >> w;
    cout << "Input hight: "; cin >> h;
    cout <<"shape:" << endl;

    shape(w,h);
}