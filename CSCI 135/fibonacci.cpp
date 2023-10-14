/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task D
*/
#include <iostream>
using namespace std;

int main() 
{
    int i;  //int i for the fob num
    int fib[60]; //Array of 60 nums for fob numbers
    fib[0]= 0; //set the 1st index to 0
    fib[1]=1; //set the 2nd indext to 1
    cout << fib[0]<< endl;
    cout << fib[1] << endl;
    for ( i = 2; i<60; i++){
        fib[i] = fib[i-2] + fib[i-1];
        cout << fib[i] << endl;
    }
    return 0;
}