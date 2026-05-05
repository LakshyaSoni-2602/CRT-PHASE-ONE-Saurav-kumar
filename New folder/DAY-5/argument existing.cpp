// With Argument, No Return Value
#include <iostream>
using namespace std;

void printSum(int a, int b)
{
    cout << "Sum = " << a + b;
}

int main()
{
    int x = 5, y = 10;
    printSum(x, y); 
    return 0;
}