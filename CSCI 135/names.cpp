/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: E1.7

asking the user to input 3 integer numbers and prints out the smaller of the three.
*/
#include <iostream>
#include <string>

using namespace std; 

int main() {
    string name1, name2, name3;

    cout << "Enter the name of your first best friend or favorite movie: ";
    cin >> name1;

    cout << "Enter the name of your second best friend or favorite movie: ";
    cin >> name2;

    cout << "Enter the name of your third best friend or favorite movie: ";
    cin >> name3;

    cout << "\nMy Three Best Friends or Favorite Movies:" << endl;
    cout << name1 <<"\n"<<name2 <<"\n"<<name3 <<"\n";
    return 0;
}
