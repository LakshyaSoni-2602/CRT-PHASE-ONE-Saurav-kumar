// No Argument, With Return Value
#include <iostream>
using namespace std;

int getNumber()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int main()
{
    int value = getNumber();
    cout << "Number = " << value;
    return 0;
}