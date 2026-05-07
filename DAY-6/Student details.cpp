#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    string reg_no;
    string gmail;
    string phone;
    char grade;

public:
    // Default Constructor
    Student() {
        name = "Not Assigned";
        roll_no = 0;
        reg_no = "N/A";
        gmail = "N/A";
        phone = "N/A";
        grade = 'N';
    }

    // Parameterized Constructor
    Student(string n, int r, string reg, string g, string p, char gr) {
        name = n;
        roll_no = r;
        reg_no = reg;
        gmail = g;
        phone = p;
        grade = gr;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll No     : " << roll_no << endl;
        cout << "Reg No      : " << reg_no << endl;
        cout << "Gmail       : " << gmail << endl;
        cout << "Phone       : " << phone << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main() {
    // Using Default Constructor
    Student s1;
    cout << "Default Constructor Output:";
    s1.display();

    // Using Parameterized Constructor
    Student s2("Yuvraj Jain", 101, "JECRC2025", "yuvraj@gmail.com", "9876543210", 'A');
    cout << "\nParameterized Constructor Output:";
    s2.display();

    return 0;
}