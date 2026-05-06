#include<iostream>
#include<string>
using namespace std;

class cricketers
{
    string name;
    int runs;
    double avg;

public:
    // Parameterized constructor
    cricketers(string n, int r, double a){
        name = n;
        runs = r;
        this->avg = a;   // fixed
    }

    // Member Function 
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};

int main()
{
    cricketers c1("Virat Kohli", 12000, 58.16);
    c1.display();
    return 0;
}