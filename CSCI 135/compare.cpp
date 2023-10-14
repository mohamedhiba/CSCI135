/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3 Task C
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
    string start, end;

    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
    }
    string sitw; 
    string junk;        
    getline(fin, junk);
    cout << "Enter starting date: "; cin >>start;
    cout << "Enter end date: "; cin >>end;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n'); 
        if ((date >= start) && (date <= end)){
            if (eastEl > westEl){
                sitw = "East";
            }
            else if (westEl > eastEl){
                sitw = "West";
            }
            else {
                sitw = "Equal";

            }
            cout <<date << " "<< sitw <<endl;
        }
    }
    fin.close();

    return 0;
}