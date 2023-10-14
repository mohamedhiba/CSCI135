#include <iostream>
using namespace std;

int main(){
    int month, year, days;
    cout<< "enter input:";
    cin >>month; 
    cin >> year;   
    if ((month >=1) && (month <=12) ){
        cout << month;
    }
    else{
        cout << "error";
    }
    
    return 0;
}