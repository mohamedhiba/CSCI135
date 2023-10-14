/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz 4
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("data.txt");  
    string line;
    while (getline(fin, line)) {
        cout << line << endl;  
    }
    
    fin.close(); 
    
    return 0;
}