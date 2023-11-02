#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    void setInitialValues(string name, string accNumber, string accType, double initialBalance){
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            cout << "Deposit successful. Current balance: " << balance << endl;
        }
        else{
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        }
        else{
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }
};

int main(){
    BankAccount account;
    account.setInitialValues("John Doe", "1234567890", "Savings", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);
    return 0;
}