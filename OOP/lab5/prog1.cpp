#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class BankCustomer {
private:
    string name;
    int accountNumber;
    std::string accountType;
    bool isActive;
    double balance;
    time_t lastTransactionDate;

public:
    BankCustomer(string name, int accountNumber, string accountType, double balance)
        : name(name), accountNumber(accountNumber), accountType(accountType), isActive(true), balance(balance) {
        time(&lastTransactionDate);
    }
    void displayName() {
        cout << "Customer Name: " << name << endl;
    }
    void withdrawFunds(double amount) {
        if (isActive) {
            if (balance - amount >= 1000) {
                balance -= amount;
                cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
                time(&lastTransactionDate);
            } else {
                cout << "Withdrawal denied. Insufficient balance." << endl;
            }
        } else {
            cout << "Withdrawal denied. Account is dormant." << endl;
        }
    }
    void checkAndUpdateAccountStatus() {
        time_t currentTime;
        time(&currentTime);
        double secondsDiff = difftime(currentTime, lastTransactionDate);
        double secondsInOneYear = 365 * 24 * 60 * 60;

        if (secondsDiff >= secondsInOneYear) {
            isActive = false;
            cout << "Account is now dormant due to inactivity." << endl;
        }
    }
};

int main() {
    BankCustomer customer("John Doe", 123456, "Savings", 1500);
    customer.displayName();
    customer.withdrawFunds(500);
    customer.checkAndUpdateAccountStatus();

    return 0;
}