#include <iostream>
using namespace std;

class Sum{
    public:
    int sumOfArray(int nums[], int n){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += nums[i];
        }
        return sum;
    }
};

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    Sum s1;
    int result = s1.sumOfArray(arr, size);
    cout << "The sum of the array is: " << result << endl;

    return 0;
}