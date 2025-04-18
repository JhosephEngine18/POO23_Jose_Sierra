/*
Universidad Amerike
Author: José Sierra
Pratice#:23
Date: 11/04/25
Description: This code simulates how it work a Bank Account
*/

#include <iostream>
using namespace std;

class Bank
{
private:
    
    string Owner;
    string TypeAccount;
    float balance = 0;

public:
    void SetOwner(string Master)
    {
        Owner = Master;
    }

    string GetOwner()
    {
        return Owner;
    }

    void SetAccountType(string Type)
    {
        TypeAccount = Type;  
    }

    string GetAccountType()
    {
        return TypeAccount;
    }

    void Deposit(float money = 0)
    {
        balance = money;
    }

    float GetBalance()
    {
        return balance;
    }

    void withdraw(float lessmoney)
    {
        if (GetBalance() <= 0)
        {
        cout << "You dont have any money inside";
        }
        else if (GetAccountType() == "CheckBook")
        {
            cout << "You cant withdraw with a Checkbook account";
        }
        else if (lessmoney > GetBalance())
        {
            cout << "You cant withdraw that amount of money\n";   
        }
        else
        {
            balance = balance - lessmoney;
        }
    }


};


int main()
{
    Bank Account;
    Account.SetOwner("John");
    Account.SetAccountType("Payroll");
    Account.Deposit(1200);

        float SubtractMoney = 500;
        Account.withdraw(SubtractMoney);
        Account.Deposit(200);
        SubtractMoney = 5000;

        Account.withdraw(SubtractMoney);
        cout << "Your current balance is: " << Account.GetBalance() << "\n";   
        cout << "The name of the owner is: " << Account.GetOwner() << "\n";   
        cout << "The Account type is: " << Account.GetAccountType() << "\n";
    
}