// With Argument, With Return Value
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 7, y = 3;
    int result = add(x, y);
    cout << "Sum = " << result;
    return 0;
}