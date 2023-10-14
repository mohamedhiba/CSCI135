/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 Task C
*/

#include <iostream>
using namespace std; 

void shape (int s){
    for (int i=0 ; i < s ; i++){
        for (int j=0 ; j < s ; j++){
            if (j == i || i+j == (s-1)){
                cout << "*";
            }
            else {
                cout << " ";
            }
            
        }
        cout <<endl;
    }
}

int main (){
    int s;
    cout << "Input size: "; cin >> s;
    cout <<"shape:" << endl;

    shape(s);
}