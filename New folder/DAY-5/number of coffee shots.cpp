/*Write a function in C++ programming language that takes number of coffee shots written 
the total coffee volume if one shot = 30ml.*/

#include <iostream>
using namespace std;

int calculateCoffeeVolume(int shots) {
    return shots * 30;
}

int main() {
    int shots;
    
    cout << "Enter number of coffee shots: ";
    cin >> shots;

    int totalVolume = calculateCoffeeVolume(shots);

    cout << "Total coffee volume: " << totalVolume << " ml" << endl;

    return 0;
}