/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

asking the user to input 3 integer numbers and prints out the smaller of the three.
*/


#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    if ((num1 > num2) && (num3 > num2))
    {
        cout<< "The smaller of the two is "<< num2 << endl;
    }
    else if (((num1 > num3) && (num3 < num2))) 
    {
        cout<< "The smaller of the two is "<< num3 << endl;
    }
    else cout<< "The smaller of the two is "<< num1 << endl;
    return 0;
}