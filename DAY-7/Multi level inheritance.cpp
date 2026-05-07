#include <iostream>
using namespace std;

class Player{
    public:
    string name;
    int age;

    void setName(string n){
        name = n;
    }
};
class Cricketer : public Player{
    public:
    int  runs;
    
    void setRuns(int r){
        runs = r;
    }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};

class IndianCricketer : public Cricketer{
    public:
    string state;

    void setState(string s){
        state = s;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"State: "<<state<<endl;
    }
};

int main(){
    int r;
    cin >> r;
    string s;
    cin >> s;
    IndianCricketer ic1;
    ic1.setName("Virat Kohli");
    ic1.setRuns(r);
    ic1.setState(s);
    ic1.display();




    return 0;
}