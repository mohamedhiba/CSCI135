/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6 Task A
*/

// Task A. Testing ASCII

// Write a program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces). The program should report all characters from the input line together with their ASCII codes.

// Make sure to print exactly one space between the character and it’s code.

// Example:

// $ ./test-ascii

// Input: Cat :3 Dog

// C 67
// a 97
// t 116
//   32
// : 58
// 3 51
//   32
// D 68
// o 111
// g 103
// Hint:

// When you are printing a value of type char on the screen, it is normally shown as a symbol. To print it as a number (as its ASCII code), type cast it to integer:

// cout << (int)c;

#include <iostream>
using namespace std;

char testascii(string s){
    for (int i = 0; i < s.length(); i++){
        cout << s[i]<< " " <<(int)s[i] <<endl;
    }
    return 1;
}

int main(){
    string s;
    cout <<"Input: ";
    getline (cin, s);
    testascii(s);
    return 0;
}
