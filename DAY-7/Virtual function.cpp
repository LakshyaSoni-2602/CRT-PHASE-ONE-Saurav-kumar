#include <iostream>
using namespace std;

// Base Class
class Player {
public:

    // Virtual Function
    virtual void show() {
        cout << "This is Player Class" << endl;
    }
};

// Derived Class
class Cricketer : public Player {
public:
    string name;
    int runs;

    void setData(string n, int r) {
        name = n;
        runs = r;
    }

    // Function Overriding
    void show() override {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main() {

    Cricketer c1;

    c1.setData("Virat Kohli", 13000);

    // Runtime Polymorphism
    Player* p = &c1;

    p->show();

    return 0;
}