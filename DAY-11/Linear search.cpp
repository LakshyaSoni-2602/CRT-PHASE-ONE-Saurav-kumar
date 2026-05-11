#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == key) {
            return i;
        }
    }

    return -1; // Element not found
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int key = 30;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}