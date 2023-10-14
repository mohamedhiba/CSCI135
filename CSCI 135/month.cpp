    /*
    Author: Mohamed Esam Hiba
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab1B

    asking the user to input 3 integer numbers and prints out the smaller of the three.
    */
    #include <iostream>

    using namespace std;

    int main() {
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    int daysInMonth;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        {
            daysInMonth = 29; 
        } 
        else 
        {
            daysInMonth = 28; 
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) 
    {
        daysInMonth = 30; 
    } 
    else 
    {
        daysInMonth = 31; 
    }

    cout << daysInMonth << " days" << endl;

    return 0;
}
