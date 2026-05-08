#include <iostream>
using namespace std;

// Encapsulation Example
class ATM {
    private:
    int balance; // Hidden Data

    public:
    void setBalance(int b) {
        balance = b;
    }

    void Deposit(int amount) {
        balance += amount;
        cout << "Deposit Successful" << endl;
    }

    void Withdraw(int amount) {
        if(amount > balance) {
            cout << "Insufficient Balance" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal Successful" << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    ATM a;

    a.setBalance(10000);
    cout << "Current Balance: " << a.getBalance() << endl;
    a.Deposit(5000);
    cout << "Balance After Deposit: " << a.getBalance() << endl;
    a.Withdraw(3000);
    cout << "Balance After Withdrawal: " << a.getBalance() << endl;

    return 0;
}