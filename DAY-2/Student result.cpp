/*Write a C++ program that take a student percentage 0 to 100 as input 
and calculate the grade based on the percentage.
1. If percentage is between 90 and 100, grade is A.
2. If percentage is between 80 and 89, grade is B.
3. If percentage is between 70 and 79, grade is C.
4. If percentage is between 60 and 69, grade is D.
5. If percentage is less than 60, grade is F.*/

#include <iostream>
using namespace std;

int main() {
    int percentage;

    cout << "Enter percentage (0-100): ";
    cin >> percentage;

    if(percentage < 0 || percentage > 100) {
        cout << "Invalid percentage";
    }
    else if(percentage >= 90) {
        cout << "Grade: A";
    }
    else if(percentage >= 80) {
        cout << "Grade: B";
    }
    else if(percentage >= 70) {
        cout << "Grade: C";
    }
    else if(percentage >= 60) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F";
    }

    return 0;
}