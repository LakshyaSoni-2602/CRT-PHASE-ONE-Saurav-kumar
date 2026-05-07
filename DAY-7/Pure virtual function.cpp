#include <iostream>
using namespace std;

// Abstract Base Class
class Player {
public:

    // Pure Virtual Function
    virtual void show() = 0;
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

    // Overriding Pure Virtual Function
    void show() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main() {

    Cricketer c1;

    c1.setData("Virat Kohli", 13000);

    c1.show();

    return 0;
}