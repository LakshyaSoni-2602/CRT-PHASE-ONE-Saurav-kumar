/*Write a function that apply 10% discount using references
update the original bill amount and print the updated bill.*/

#include <iostream>
using namespace std;

void applyDiscount(float &billAmount) {
    billAmount = billAmount - (billAmount * 0.10); 
}

int main() {
    float bill;

    cout << "Enter original bill amount: ";
    cin >> bill;

    applyDiscount(bill);

    cout << "Updated bill after 10% discount: " << bill << endl;

    return 0;
}