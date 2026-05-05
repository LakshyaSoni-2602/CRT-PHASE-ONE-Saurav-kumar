/*Write a C++ program to print a rectangular pattern 
which has 4 rows and 5 columns in star pattern.*/

#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}