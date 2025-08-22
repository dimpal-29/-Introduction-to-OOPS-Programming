//Class for Bank Account 
//	o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. 
//		Implement encapsulation by keeping the data members private.
//	o Objective: Understand encapsulation in classes.

#include <iostream>
using namespace std;

class BankAccount 
{
	private:
    	int balance;  

	public:
    BankAccount(int initialBalance = 0) 
	{
        if (initialBalance >= 0)
            balance = initialBalance;
        else 
		{
            cout << "Invalid initial balance! " << endl;
            balance = 0;
        }
    }

    void deposit(int amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else 
		{
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(int amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } 
		else 
		{
            cout << "Invalid withdrawal amount or Insufficient balance!" << endl;
        }
    }

    void showBalance() 
	{
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount account1(1000); 

    account1.showBalance();     
    account1.deposit(500);      
    account1.showBalance();     
    account1.withdraw(300);    
    account1.showBalance();
    account1.withdraw(2000);    

    return 0;
}


