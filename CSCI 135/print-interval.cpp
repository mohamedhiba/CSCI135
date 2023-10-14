/*
Author: Mohamed Esam Hiba
Course: CSCI-135
Instructor: Tong Yi
Assignment: Task B
rint out all integers in the range L ≤ i < U separated by spaces.
*/
#include <iostream>
using namespace std;

int main() 

{
    int L,U,i;
    cout <<"Please enter L: ";
    cin >> L;
    cout <<"Please enter U: ";
    cin >> U;
    for ( i = L ; i < U; i++){
        cout << i << " ";
    }
    return 0;
}