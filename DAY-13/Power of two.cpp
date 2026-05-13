#include <iostream>
using namespace std;

bool isPower(int x){
    if( x == 0){
        return false;
    }
    if(x == 1){
        return true;
    }
    return (x % 2 == 0) && isPower(x / 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPower(n)){
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }
    return 0;
}