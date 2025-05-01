// 2. Bank Account System

// Create a class BankAccount with accountNumber, holderName, and balance. Write functions for deposit, withdrawal, and balance display.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int acc_num[16];
    string holder_name;
    double acc_balance;

public:
    void setaccount()
    {
        cout << "Enter Your Account No. : ";
        cin >> this->acc_num[16];
        cout << "Enter Your Name : ";
        cin >> this->holder_name;
        cout << "Enter your balance : ";
        cin >> this->acc_balance;
    }

    void Display()
    {
    }

    void deposit()
    {
        int deposit;
        cout << "Your Current Balance : " << this->acc_balance << endl;

        cout << "Enter Amount You want to Deposit : ";
        cin >> deposit;

        acc_balance += deposit;

        cout << "----Deposit Done----" << endl;

        cout << "Your updated balance is : " << acc_balance << endl;
    }

    void withdraw()
    {
        int withdraw;
        cout << "Your Current Balance : " << this->acc_balance << endl;

        cout << "Enter Amount You want to Deposit : ";
        cin >> withdraw;

        acc_balance -= withdraw;

        cout << "----Deposit Done----" << endl;

        cout << "Your updated balance is : " << withdraw << endl;
    }
};

int main()
{
    int choice;

    BankAccount user;

    user.setaccount();

    do
    {
        cout << "PRESS 1 FOR DEPOSIT" << endl;
        cout << "PRESS 2 FOR WITHDRAWAL" << endl;
        cout << "PRESS 3 FOR CHECK BALANCE" << endl;
        cout << "PRESS 0 FOR EXIT" << endl;

        cout << "ENTER YOUR CHOICE : ";
        cin >> choice;
    } while (choice != 0);

    switch (choice)
    {
    case 1:
        user.deposit();
        break;

    case 2:
        user.withdraw();
        break;
    
    default:
        break;
    }


    return 0;
}