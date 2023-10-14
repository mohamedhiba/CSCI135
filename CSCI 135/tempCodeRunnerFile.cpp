/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 Task D
*/

#include <iostream>
using namespace std; 

void shape (int l){
    for (int i=0 ; i < l ; i++){
        for (int j=0 ; j <i+1  ; j++){
                cout << "*";
            }
        cout <<endl;

    }
}

int main (){
    int l;
    cout << "Input side length: "; cin >> l;
    cout <<"shape:" << endl;

    shape(l);
}