/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

asking the user to input 3 integer numbers and prints out the smaller of the three.
*/

#include <iostream>
using namespace std; 

int main()
{
    int num;
    cout << "Enter a number: "; cin >> num;
    if (num < 0)
    {
        cout << "This number is negative";
    }
    else if (num == 0)
    {
        cout << "This number is zero";
    }
    else 
    {
        cout << "This number is positive";
    }
    
    return 0;
}