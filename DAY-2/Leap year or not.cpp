/*Write a C++ program that takes a year as input and determines if it is a leap year or not.*/

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year.";
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}