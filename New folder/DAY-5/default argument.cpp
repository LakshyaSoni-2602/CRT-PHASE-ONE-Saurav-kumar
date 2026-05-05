/*Write a function in C++ programming language with default arguments
and calling it with or without parameter.*/

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();

    greet("Lokesh");

    return 0;
}