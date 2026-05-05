/*Write a C++ program that takes an input that represents a person's age
Use an else if ladder to determine and print: 
1. Eligible to vote is age is 100 and more in century category.
2. Eligible to vote if age is 18 to 99.
3. Not eligible to vote if age is 0 to 17.
4. invalid age if age is negative. */

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age < 0) {
        cout << "Invalid age";
    }
    else if(age >= 100) {
        cout << "Eligible to vote and in century category";
    }
    else if(age >= 18 && age <= 99) {
        cout << "Eligible to vote";
    }
    else if(age >= 0 && age <= 17) {
        cout << "Not eligible to vote";
    }

    return 0;
}