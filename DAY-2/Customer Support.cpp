/*Write a C++ program that simulates a customer support using switch case statements
in that menu options are:
1. for support.
2. for billing.
3. for technical assistance.
4 and 0. for speak to an agent.
5. for exit.*/

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== Customer Support Menu =====" << endl;
    cout << "1. Support" << endl;
    cout << "2. Billing" << endl;
    cout << "3. Technical Assistance" << endl;
    cout << "4 or 0. Speak to an Agent" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Support.";
            break;
        case 2:
            cout << "You selected Billing.";
            break;
        case 3:
            cout << "You selected Technical Assistance.";
            break;
        case 4:
        case 0:
            cout << "Connecting to an agent...";
            break;
        case 5:
            cout << "Exiting the system. Thank you!";
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}