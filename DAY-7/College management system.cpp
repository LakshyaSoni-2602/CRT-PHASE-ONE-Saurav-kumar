// College Management System using Virtual Function in C++

#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Virtual Function
    virtual void category() {
        cout << "Category: Part of College" << endl;
    }
};

// Derived Class Student
class Student : public Person {
private:
    int rollNo;
    string course;
    float marks;

public:
    void getStudentDetails() {
        getPersonDetails();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Course: ";
        getline(cin, course);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudentDetails() {
        cout << "\n--- Student Details ---" << endl;

        displayPersonDetails();

        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;

        category();
    }

    // Overriding Virtual Function
    void category() override {
        cout << "Category: Student" << endl;
    }
};

// Derived Class Teacher
class Teacher : public Person {
private:
    int teacherID;
    string subject;
    double salary;

public:
    void getTeacherDetails() {
        getPersonDetails();

        cout << "Enter Teacher ID: ";
        cin >> teacherID;

        cin.ignore();

        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacherDetails() {
        cout << "\n--- Teacher Details ---" << endl;

        displayPersonDetails();

        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;

        category();
    }

    // Overriding Virtual Function
    void category() override {
        cout << "Category: Teacher" << endl;
    }
};

// Main Function
int main() {

    Student s;
    Teacher t;

    cout << "Enter Student Information\n";
    s.getStudentDetails();

    cout << "\nEnter Teacher Information\n";
    t.getTeacherDetails();

    s.displayStudentDetails();
    t.displayTeacherDetails();

    return 0;
}