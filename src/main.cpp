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
        balance = balance - lessmoney;
    }


};


int main()
{
    Bank Account;
    Account.SetOwner("John");
    Account.SetAccountType("Payroll");    
    Account.Deposit(1200);
    if (Account.GetBalance() <= 0)
    {
        cout << "You cant withdraw";
    }
    else if (Account.GetAccountType() == "CheckBook")
    {
        cout << "You cant withdraw with a Checkbook account";    
    }
    else
    {
        Account.withdraw(500);
        Account.Deposit(200);
        Account.withdraw(500);
        cout << "Your current balance is: " << Account.GetBalance() << "\n";   
        cout << "The name of the owner is: " << Account.GetOwner() << "\n";   
        cout << "The Account type is: " << Account.GetAccountType() << "\n";
    }
    
}