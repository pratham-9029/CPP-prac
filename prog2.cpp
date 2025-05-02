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

    void deposit()
    {
        int deposit;
        cout << "Your Current Balance : " << this->acc_balance << endl;

        cout << "Enter Amount You want to Deposit : ";
        cin >> deposit;

        acc_balance += deposit;

        cout << "----Deposit Done----" << endl;

        cout <<"----Want to see balance,PRESS 3----"<<endl;
     }
    void withdraw()
    {
        int withdraw;
        cout << "Your Current Balance : " << this->acc_balance << endl;

        cout << "Enter withdraw amount : ";
        cin >> withdraw;

        acc_balance = acc_balance - withdraw;

        cout << "----Withdraw Done----" << endl;
        cout <<"----Want to see balance,PRESS 3----"<<endl;
    }
    void balance()
    {
        cout<<"------Done------"<<endl;
        cout<<"Your Current Balance is : "<<acc_balance<<endl;
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
        
        switch (choice)
    {
    case 1:
        user.deposit();
        break;

    case 2:
        user.withdraw();
        break;
    
    case 3:
        user.balance();
    
    default:
        break;
    }
    cout<<endl;
    } while (choice != 0);
    return 0;
}
