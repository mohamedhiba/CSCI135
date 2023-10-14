/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3 Task D
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    string date;
    string start, end;
    string ddate[1000];
    double westarr[1000];
    double eastSt, eastEl, westSt, westEl;
    int index = 0;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
    }

    string junk;        
    getline(fin, junk);
    cout << "Enter starting date: "; cin >>start;
    cout << "Enter end date: "; cin >>end;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');
        if ((date >= start) && (date <= end)){
            ddate[index]=date;
            westarr[index]=westEl;
            index++;
        }
    }
    for (int i = index ; i >= 0 ; i--)
    {
        cout << ddate[i] << " " << westarr[i]<< endl;
    }
    fin.close();
    return 0;
}
