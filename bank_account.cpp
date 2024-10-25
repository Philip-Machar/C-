/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program that mimics the the oprations of a bank account such as deposit, withdraw etc.
*/

//Importing the input/output stream library
#include <iostream>

//Importing the string library
#include <string>

//Declaring the standard namespace for input/output
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor to initialize the account number and set the balance to 0
    BankAccount(string accNum) {
        accountNumber = accNum;
        balance = 0.0;
    }

    // Method to deposit amount into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw amount from the account
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Withdrawal denied! Insufficient balance." << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Method to return the current balance
    double getBalance() {
        return balance;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount account("12345678");

    // Deposit $500 into the account
    account.deposit(500);

    // Withdraw $200 from the account
    account.withdraw(200);

    // Attempt to withdraw $400 (should be prevented)
    account.withdraw(400);

    // Print the final balance
    cout << "Final balance: $" << account.getBalance() << endl;

    // Telling the OS that our program was successfully executed
    return 0;
}
