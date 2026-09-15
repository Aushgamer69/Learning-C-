#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class transaction
{
    int transactionId;
    string timestamp;
    double amount;

public:
    transaction(int id, string time, double amt)
        : transactionId(id), timestamp(time), amount(amt) {}

    int getid() const { return transactionId; }
    string getTimestamp() const { return timestamp; }
    double getAmount() const { return amount; }
};

class account
{
protected:
    double balance;
    string accountNumber;
    string accountHolderName;
    vector<transaction> history;

public:
    account(string accNum, string name, double initiabalance)
        : accountNumber(accNum), accountHolderName(name), balance(initiabalance) {}
    virtual void withdrawal(double amount)
    {
        balance -= amount;
        history.push_back(transaction(history.size() + 1, " 15/9/26", amount));
    }
    virtual void deposit(double amount)
    {
        balance += amount;
        history.push_back(transaction(history.size() + 1, " 15/9/26", amount));
    };

    virtual void displayinfo() const = 0;
};

class savingAccount : public account
{
public:
    savingAccount(string accNum, string name, double initiabalance)
        : account(accNum, name, initiabalance) {}
    void displayinfo() const override{cout << "[Savings Account] "
                                           << accountNumber << "| Hoder: " << accountHolderName << "| Balance " << balance << "\n";}
};

class CurrentAccount : public account
{
public:
    CurrentAccount(string accNum, string name, double initiabalance)
        : account(accNum, name, initiabalance) {}
    void displayinfo() const override{cout << "[Current Account] "
                                           << accountNumber << "| Hoder: " << accountHolderName << "| Balance " << balance << "\n";}
};

class LedgerManager
{
public:
    vector<unique_ptr<account>> accounts;
};

int main()
{
    LedgerManager manager;
    manager.accounts.push_back(make_unique<savingAccount>("Sa101" ,"Ayush", 50000.50));
    manager.accounts.push_back(make_unique<CurrentAccount>("Ed123" ,"raj", 35400.50));
    manager.accounts[0]->deposit(1500.56);
    manager.accounts[0]->withdrawal(900.23);
    for(const auto & acc: manager.accounts){
        acc->displayinfo();
    }
    
    return 0;
}