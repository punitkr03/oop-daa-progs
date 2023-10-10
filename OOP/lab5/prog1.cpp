#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class BankCustomer
{
private:
    string name;
    string accountType;
    bool isActive;
    double balance;
    time_t lastTransactionDate;

public:
    int accountNumber;
    BankCustomer(string name, int accountNumber, string accountType, double balance)
        : name(name), accountNumber(accountNumber), accountType(accountType), isActive(true), balance(balance)
    {
        time(&lastTransactionDate);
    }
    void displayName()
    {
        cout << "Customer Name: " << name << endl;
    }
    void withdrawFunds(double amount)
    {
        if (isActive)
        {
            if (balance - amount >= 1000)
            {
                balance -= amount;
                cout << "Withdrawal of " << amount << " successful.\nNew balance: " << balance << endl;
                time(&lastTransactionDate);
            }
            else
            {
                cout << "Withdrawal denied. Insufficient balance." << endl;
            }
        }
        else
        {
            cout << "Withdrawal denied. Account is dormant." << endl;
        }
    }
    void checkStatus()
    {
        time_t currentTime;
        time(&currentTime);
        double secondsDiff = difftime(currentTime, lastTransactionDate);
        double secondsInOneYear = 365 * 24 * 60 * 60;

        if (secondsDiff >= secondsInOneYear)
        {
            isActive = false;
            cout << "Account is now dormant due to inactivity." << endl;
        }
    }
};

int main()
{
    BankCustomer c1("John Doe", 123456, "Savings", 1500);
    BankCustomer c2("Ken Doe", 456566, "Savings", 2000);
    BankCustomer c3("Zen Doe", 643568, "Savings", 10000);
    BankCustomer customers[3] = {c1, c2, c3};
    int givenAcc = 643568;
    for (int i = 0; i < 3; i++)
    {
        if (customers[i].accountNumber == givenAcc)
        {
            customers[i].displayName();
            customers[i].withdrawFunds(500);
            customers[i].checkStatus();
        }
    }
    return 0;
}