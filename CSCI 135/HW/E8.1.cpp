// Author: Mohamed Esam Hiba
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: E8.1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file_out("hello.txt");

    file_out << "Hello, World!";
    file_out.close(); 

    ifstream file_in("hello.txt");

    string message;
    getline(file_in, message);

    cout << message << endl;
    file_in.close();  

    return 0;
}

