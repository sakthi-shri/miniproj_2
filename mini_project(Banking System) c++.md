//mini_project(Banking System)
#include <iostream>
using namespace std;

class Bank
{
public:
    int balance = 5000;
    int pin = 5623;

    void deposit()
    {
        int amt;
        cout << "Enter amount: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw()
    {
        int amt;
        cout << "Enter amount: ";
        cin >> amt;

        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance" << endl;
    }

    void showBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    Bank b;
    int enteredPin, choice;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != b.pin)
    {
        cout << "Wrong PIN!" << endl;
        return 0;
    }

    cout << "1. Deposit"<<endl;
    cout << "2. Withdraw"<<endl;
    cout << "3. Check Balance"<<endl;
    cout << "Enter Choice: "<<endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            b.deposit();
            b.showBalance();
            break;

        case 2:
            b.withdraw();
            b.showBalance();
            break;

        case 3:
            b.showBalance();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
