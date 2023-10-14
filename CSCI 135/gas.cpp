/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10

asking the user to input 3 integer numbers and prints out the smaller of the three.
*/
#include <iostream>

using namespace std;

int main() 
{
    double gal, eff, pri;
    cout << "Enter number of gallons of gas in the tank: ";
    cin >> gal;
    cout << "Enter fuel efficiency in miles per gallon: ";
    cin >> eff;
    cout << "Enter Price of gallon: ";
    cin >> pri;

    cout << "The cost per 100 miles is :" << (100/eff)*pri<< endl;
    cout << "The car can go "<< gal <<" of gas in the tank " << (eff)*gal << " miles" << endl;
    return 0;
}
