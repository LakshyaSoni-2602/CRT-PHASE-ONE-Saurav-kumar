/*Write a C++ program that takes an integer as an input and print all numbers from 1 to n
but a skip any number that is multiple of 3 using continues statement.*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}