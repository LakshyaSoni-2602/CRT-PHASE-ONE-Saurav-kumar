#include <iostream>
using namespace std;

// Abstraction Example
class ATM {
    private:
    int balance;

    public:
    ATM() {
        balance = 10000;
    }

    void Withdraw(int amount) {
        if(amount > balance) {
            cout << "Insufficient Balance" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal Successful" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    void Deposit(int amount) {
        balance += amount;
        cout << "Deposit Successful" << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void CheckBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    ATM a;

    a.CheckBalance();
    a.Deposit(5000);
    a.Withdraw(3000);
    a.CheckBalance();
    return 0;
}