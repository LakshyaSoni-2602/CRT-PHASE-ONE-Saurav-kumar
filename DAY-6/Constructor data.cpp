#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1("Khandu Don", 538);
    Student s2("Saurav Kumar", 102);

    s1.show();
    s2.show();

    return 0;
}