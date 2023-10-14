//Author: Mohamed Esam Hiba
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: E3.5
//a program that reads three numbers and prints “increasing” if they are in increasing order,
//“decreasing” if they are in decreasing order,
//and “neither” other- wise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor.

#include <iostream>
using namespace std;

int main ()
{
    double num1,num2,num3 ;
    cout << "Enter the numbers: 1."; cin >> num1; cout << "2. "; cin >> num2; cout << "3. ";cin >> num3; cout << endl;  
    if ((num1 > num2)&&(num2 > num3)){
        cout << "The numbers are decreasing";
    }
    else if ((num3 > num2)&&(num2 > num1)){
        cout << "The numbers are increasing"; 
    }
    else{
        cout << "neither increasing nor decreasing"; 

    }
    return 0;
    
}