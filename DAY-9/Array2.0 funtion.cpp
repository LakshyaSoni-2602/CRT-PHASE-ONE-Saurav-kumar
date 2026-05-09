#include <iostream>
using namespace std;

int main()
{
    int arr[5]; //= {1, 2, 3, 4, 5};
                // Manual input of array elements using cin
    // cin >> arr[0];
    // cin >> arr[1];
    // cin >> arr[2];
    // cin >> arr[3];
    // cin >> arr[4];

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}