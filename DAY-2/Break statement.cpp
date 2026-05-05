/*Write a C++ program that continuously takes positive integers as input from the user
and add them to running sum variable if the user enters a positive number immediately terminates 
the loop using break statement and print the final sum.*/

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while(true) {
        cout << "Enter a positive integer (negative to stop): ";
        cin >> num;

        if(num < 0) {
            break; 
        }

        sum += num; 
    }

    cout << "Final sum: " << sum << endl;

    return 0;
}