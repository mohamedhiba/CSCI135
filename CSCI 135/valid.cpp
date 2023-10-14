/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Task A
number 0 < n < 100 squared.
*/
#include <iostream>
using namespace std;

int main() 
{
    int value;

    do{
        cout <<"Enter a number between 0 and 100 :";
        cin >> value;
    }
    while ((value <= 0)|| (value >= 100));
    cout << "The Number squared is: " << ((value*value)) ;

    return 0;
}