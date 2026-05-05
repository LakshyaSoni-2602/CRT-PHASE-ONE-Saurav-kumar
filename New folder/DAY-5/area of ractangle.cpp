/*Write a function that takes length and breadth as input
return and print the area of rectangle.*/

#include <iostream>
using namespace std;

int calculateArea(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    int area = calculateArea(length, breadth);

    cout << "Area of rectangle: " << area << endl;

    return 0;
}