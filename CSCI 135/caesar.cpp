/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6 Task A
*/


// Task B. Implementing Caesar cipher encryption

// Write a program caesar.cpp with functions implementing Caesar cipher encryption:

// // A helper function to shift one character by rshift
// char shiftChar(char c, int rshift);

// // Caesar cipher encryption
// string encryptCaesar(string plaintext, int rshift);
// The argument rshift is the magnitude of the right shift. For the sake of the lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 (although, implementing it correctly for an arbitrary integer shift is also possible, of course).

// Your functions should preserve case, and any non-alphabetic characters should be left unchanged. For example,

// encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!"
// Feel free to write more additional helper functions when you need them.

// The main function should ask the user to input a plaintext sentence, then enter the right shift, and report the ciphertext computed using your encryption function.

// Example:

// $ ./caesar

// Enter plaintext: Hello, World!
// Enter shift    : 10
// Ciphertext     : Rovvy, Gybvn!

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){
    if (isalpha(c)){
       if (c>= 'a' && c<= 'z'){
        c += rshift;
        c = c - 'a';
        c = c%26;
        c += 'a';
       }
       else if(c>= 'A' && c<= 'Z'){
        c += rshift;
        c = c - 'A';
        c = c%26;
        c += 'A';
       }
    }
    else {
        c = c;
    }
    return c;
}
string encryptCaesar(string plaintext, int rshift){
    string word("");
    for (int i =0; i< plaintext.length(); i++){
        word += shiftChar(plaintext[i], rshift);
    }
    return word;
}

int main(){
    string plaintext;
    int rshift;
    cout <<"Enter plaintext: ";
    getline (cin, plaintext);
    cout <<"Enter shift    : "; cin>> rshift;
    cout << "Ciphertext     : " <<encryptCaesar(plaintext, rshift)<<"\n\n";
    return 0;
}
