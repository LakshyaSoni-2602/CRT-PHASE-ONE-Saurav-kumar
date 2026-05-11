//binary search 
#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // To avoid overflow

        if (arr[mid] == key) {
            return mid; // Element found at index mid
        } else if (arr[mid] < key) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}    