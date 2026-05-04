/* Write a C++ program that declare Global Variables
intialize 200 the main function takes an input from the user
perform floating point division of global variable by that user input
using explicit type casting store it in the local variable and print the output */

#include <iostream>
using namespace std;

int globalVar;

int main() {
    globalVar = 200;

    int userInput;

    cout << "Enter an integer: ";
    cin >> userInput;

    if (userInput == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }

    float result = (float)globalVar / userInput;

    cout << "Result of division: " << result << endl;

    return 0;
}