/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to demonstrate inheritance in a simple bank account system.
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

// Class representing a basic Bank Account
class BankAccount {
    protected:
        //Data member to store the account holder's name
        string accountHolder;

        //Data member to store the account balance
        float balance;

    public:
        // Constructor to initialize account holder's name and balance
        BankAccount(string accountHolder, float balance) {
            setAccountHolder(accountHolder);
            this->balance = balance;
        }

        // Setter function to change the account holder's name
        void setAccountHolder(string name) {
            accountHolder = name;
        }

        // Getter function to retrieve the account holder's name
        string getAccountHolder() {
            return accountHolder;
        }

        // Getter function to retrieve the account balance
        float getBalance() {
            return balance;
        }
};

// Derived class representing a Savings Account, inherits from BankAccount
class SavingsAccount : public BankAccount {
    private:
        //Data member to store the interest rate
        float interestRate;

    public:
        // Constructor to initialize account holder, balance, and interest rate
        SavingsAccount(string accountHolder, float balance, float interestRate) 
            : BankAccount(accountHolder, balance) {
            this->interestRate = interestRate;
        }

        // Member function to calculate and return the interest based on the balance and interest rate
        float calculatedInterest() {
            return (balance * interestRate);
        }
};

// Derived class representing a Checking Account, inherits from BankAccount
class CheckingAccount : public BankAccount {
    private:
        //Data member to store the transaction fee
        float transactionFee;

    public:
        // Constructor to initialize account holder, balance, and transaction fee
        CheckingAccount(string accountHolder, float balance, float transactionFee) 
            : BankAccount(accountHolder, balance) {
            this->transactionFee = transactionFee;
        }

        // Member function to deduct the transaction fee from the balance
        float deductFee() {
            return (balance - transactionFee);
        }
};

int main() {
    // Create a SavingsAccount object with account holder "Alice", balance 1000, and interest rate 0.03
    SavingsAccount savingsAccount1("Alice", 1000, 0.03);

    // Create a CheckingAccount object with account holder "Bob", balance 500, and transaction fee 2.5
    CheckingAccount checkingAccount1("Bob", 500, 2.5);

    // Display the account holder, balance, and calculated interest for the savings account
    cout << "Account Holder: " << savingsAccount1.getAccountHolder() << endl;
    cout << "Balance: " << savingsAccount1.getBalance() << endl;
    cout << "Interest: " << savingsAccount1.calculatedInterest() << endl;

    // Display the account holder and balance for the checking account
    cout << "Account Holder: " << checkingAccount1.getAccountHolder() << endl;
    cout << "Balance: " << checkingAccount1.getBalance() << endl;
    
    // Display the updated balance after deducting the transaction fee from the checking account
    cout << "Updated Balance after Fee Deduction: " << checkingAccount1.deductFee() << endl;

    //Telling the OS, our program was successfully executed
    return 0;
}
