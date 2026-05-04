/*Write a C++ program that takes two integer input a and b multiple a by 4
using left shift operator and print the value of a.*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "Original value of a: " << a << endl;

    int result = a << 2;

    cout << "Value of a after multiplying by 4: " << result << endl;

    return 0;
}