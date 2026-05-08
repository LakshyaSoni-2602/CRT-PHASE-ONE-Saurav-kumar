#include <iostream>
using namespace std;
 class Area{
    private:
    int length;
    int breadth;

    public:
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    friend void showArea(Area a);
 };

 void showArea(Area b){
    int area = b.length * b.breadth;
    cout << "Area: " << area << endl;
 }
 int main() {
    Area a;
    a.setDimensions(5, 10);
    showArea(a);
    return 0; 
 }