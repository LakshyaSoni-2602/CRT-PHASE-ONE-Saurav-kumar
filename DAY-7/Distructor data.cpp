#include <iostream>
using namespace std;

class Cricketer {
    string name;
    int runs;

public:
    Cricketer(string n, int r) {
        name = n;
        runs = r;

        cout << "Constructor Called" << endl;
    }

    void display() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }

    ~Cricketer() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {

    Cricketer c1("MS Dhoni", 10500);

    c1.display();

    return 0;
}