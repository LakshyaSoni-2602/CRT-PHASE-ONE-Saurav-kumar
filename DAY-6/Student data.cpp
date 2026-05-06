/*Write a C++ program to create a class student in which  it shows the data as student name and roll number.*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayData() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);

    s1.displayData();
    s2.displayData();

    return 0;
}