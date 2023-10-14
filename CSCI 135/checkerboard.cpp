/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 Task A
*/

#include <iostream>
using namespace std; 

void shape (int w,int h){
    for (int i=0 ; i<h ; i++){
        for (int j=0 ; j<(w); j++){

            if (i%2 == 1){
                if ((j+1)%2 == 0){
                    cout<<"*";
                }
                else {
                    cout << " ";
                }
            }
            else {
                if ((j)%2 == 0){
                    cout<<"*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout <<endl;
    }
}

int main (){
    int w, h;
    cout << "Input width: "; cin >> w;
    cout << "Input hight: "; cin >> h;
    cout <<"shape:" << endl;

    shape(w,h);
}