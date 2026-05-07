#include <iostream>
using namespace std;

class Cricketer {
    string name;
    int runs;

public:
    Cricketer(string n, int r) {
        name = n;
        runs = r;
    }

    Cricketer(const Cricketer &c) {
        name = c.name;
        runs = c.runs;

        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main() {

    Cricketer c1("Virat Kohli", 13000);

    Cricketer c2 = c1;

    cout << "Original Object:" << endl;
    c1.display();

    cout << "\nCopied Object:" << endl;
    c2.display();

    return 0;
}