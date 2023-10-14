/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3 Task B
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    string date;
    double eastSt, eastEl, westSt, westEl, min, max;
    min =1000;
    max =0;

    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
    }

    string junk;        
    getline(fin, junk);
    
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n'); 
        if (eastSt > max) {
            max = eastSt;
        }
        if (eastSt < min) {
            min = eastSt;
        }
    }
    cout << "minimum storage in East basin: " << min << " billion gallons" <<endl;
    cout << "MAXimum storage in East basin: " << max << " billion gallons" <<endl;
    fin.close();

    return 0;
}