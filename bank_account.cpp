#include <iostream>
using namespace std;

class BankAccount {
    protected:
        string accountHolder;
        float balance;

    public:
        BankAccount(string accountHolder, float balance) {
            setAccountHolder(accountHolder);
            this->balance = balance;
        }

        void setAccountHolder(string name) {
            accountHolder = name;
        }

        string getAccountHolder() {
            return accountHolder;
        }

        float getBalance() {
            return balance;
        }
};

class SavingsAccount : public BankAccount {
    private:
        float interestRate;

    public:
        SavingsAccount(string accountHolder, float balance, float interestRate) 
            : BankAccount(accountHolder, balance) {
            this->interestRate = interestRate;
        }

        float calculatedInterest() {
            return (balance * interestRate);
        }
};

class CheckingAccount : public BankAccount {
    private:
        float transactionFee;

    public:
        CheckingAccount(string accountHolder, float balance, float transactionFee) 
            : BankAccount(accountHolder, balance) {
            this->transactionFee = transactionFee;
        }

        float deductFee() {
            return (balance - transactionFee);
        }
};

int main() {
    SavingsAccount savingsAccount1("Alice", 1000, 0.03);
    CheckingAccount checkingAccount1("Bob", 500, 2.5);

    cout << "Account Holder: " << savingsAccount1.getAccountHolder() << endl;
    cout << "Balance: " << savingsAccount1.getBalance() << endl;
    cout << "Interest: " << savingsAccount1.calculatedInterest() << endl;

    cout << "Account Holder: " << checkingAccount1.getAccountHolder() << endl;
    cout << "Balance: " << checkingAccount1.getBalance() << endl;
    
    cout << "Updated Balance after Fee Deduction: " << checkingAccount1.deductFee() << endl;

    return 0;
}
