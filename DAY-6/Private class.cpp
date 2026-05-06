#include <iostream>
using namespace std;

class Student {
private:
    static int regNo;

public:
    string name;
    int rollNumber;

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Registration Number: " << regNo << endl;
        regNo++;
    }
};

int Student::regNo = 1761;

int main() {
    Student s1;
    s1.name = "Khandu Don";
    s1.rollNumber = 101;
    s1.displayData();

    Student s2;
    s2.name = "Saurav Kumar";
    s2.rollNumber = 102;
    s2.displayData();

    return 0;
}