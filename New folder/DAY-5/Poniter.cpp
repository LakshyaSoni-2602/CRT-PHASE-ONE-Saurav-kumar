#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    return 0;
}