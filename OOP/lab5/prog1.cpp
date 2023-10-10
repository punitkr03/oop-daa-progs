#include <iostream>
#include <string>
#include <ctime>

class BankCustomer {
private:
    std::string name;
    int accountNumber;
    std::string accountType;
    bool isActive;
    double balance;
    time_t lastTransactionDate;

public:
    // Constructor to initialize the customer object
    BankCustomer(std::string name, int accountNumber, std::string accountType, double balance)
        : name(name), accountNumber(accountNumber), accountType(accountType), isActive(true), balance(balance) {
        // Initialize lastTransactionDate to the current date
        time(&lastTransactionDate);
    }

    // Function to display the name of the customer given the account number
    void displayName() {
        std::cout << "Customer Name: " << name << std::endl;
    }

    // Function to withdraw funds given the amount
    void withdrawFunds(double amount) {
        if (isActive) {
            if (balance - amount >= 1000) {
                balance -= amount;
                std::cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << std::endl;
                time(&lastTransactionDate);
            } else {
                std::cout << "Withdrawal denied. Insufficient balance." << std::endl;
            }
        } else {
            std::cout << "Withdrawal denied. Account is dormant." << std::endl;
        }
    }

    // Function to check and change the account status to dormant if no transaction in the past year
    void checkAndUpdateAccountStatus() {
        time_t currentTime;
        time(&currentTime);
        double secondsDiff = difftime(currentTime, lastTransactionDate);
        double secondsInOneYear = 365 * 24 * 60 * 60;

        if (secondsDiff >= secondsInOneYear) {
            isActive = false;
            std::cout << "Account is now dormant due to inactivity." << std::endl;
        }
    }
};

int main() {
    // Create a BankCustomer object
    BankCustomer customer("John Doe", 123456, "Savings", 1500);

    // Display the customer's name
    customer.displayName();

    // Withdraw funds
    customer.withdrawFunds(500);

    // Check and update account status
    customer.checkAndUpdateAccountStatus();

    return 0;
}
