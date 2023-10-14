/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3 Task A
*/

#include <iostream>
#include <string>
#include <fstream>
#include <climits>
using namespace std;

int main(){
    string Date;
    string date;
    double eastSt, eastEl, westSt, westEl;

    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
    }

    string junk;        
    getline(fin, junk);

    cout << "Enter date: "; 
    cin >> Date;
    
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n'); 

        if (date == Date){
            cout << "East basin storage: " << eastSt << " billion gallons" <<endl;
            break;
        }

    }
    fin.close();

    return 0;
}