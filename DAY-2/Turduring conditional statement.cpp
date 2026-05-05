/*Write a C++ program that takes 2 integers as a input from a user
find the maximum of two number using ternary operator. */

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;

    cout << "Maximum number is: " << max;

    return 0;
}