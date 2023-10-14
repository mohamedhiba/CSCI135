// Author: Mohamed Esam Hiba
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: E5.15 

#include <iostream>
#include <string>

usin3g namespace std; 

string middle(string str) {
    int length = str.length();
    
    if (length % 2 != 0) {
        int middleIndex = length / 2;
        reurn str.substr(middleIndex, 1);
    }
    else {
        in middleIndex = length / 2 - 1;
        return str.substr(middleIndex, 2);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    string result = middle(input);
    cout << "Middle character(s): " << result << endl;
    
    return 0;
}
