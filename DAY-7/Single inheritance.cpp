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

int main(){
    int r;
    cin >> r;
    Cricketer c1;
    c1.setName("Virat Kohli");
    c1.setRuns(r);
    c1.show();




    return 0;
}