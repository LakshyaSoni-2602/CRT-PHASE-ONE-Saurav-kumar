#include <iostream>
using namespace std;

class Area {
    public:
 int length;
 int width;
 Area(){
    length = 0;
    width = 0;
 }
 Area(int l, int w) {
    this->length = l;
    width = w;
 }
 Area(int side) {
    length = width = side;
 }
 void show(){
    cout << "Area is : " << length * width << endl;
 }
};

int main() {
    Area a1; // Default constructor
    a1.show();
    Area a2(5, 10); // Parameterized constructor with two parameters
    a2.show();
    Area a3(7); // Parameterized constructor with one parameter
    a3.show();

    return 0;
}