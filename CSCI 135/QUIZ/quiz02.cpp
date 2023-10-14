// Author: Mohamed Esam Hiba
// Course: CSCI-135
// Assignment: quiz 3


#include <iostream>
using namespace std;

int main(){
    int index;
    int arr[10];
    for(index=0; index<10; index++){
        arr[index]=index+1;
    }
    for(index=0; index<10; index++){
        cout<< arr[index]<< endl;
    }
    return 0;
}