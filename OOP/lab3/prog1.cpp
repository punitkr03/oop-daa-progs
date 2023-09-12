/**Write a program in C++ for handling n number of bank account
holders using array of objects. Define a class to represent a bank
account which includes the following members as Data members:
a) Name_of_the_depositor
b) Account_Number
c)Withdraw_amount
d)Balance
Member Functions:
a) To assign initial values
b) To deposit an amount 
c) To withdraw an amount after checking the balance
d) To display name and balance. */

#include <iostream>
#include <string>
using namespace std;

class Bank_Account{
    private:
        string Name_of_the_depositor;
        int Account_Number, Withdraw_amount, Balance;
    public:
        void init();
        void deposit(int amount);
        void withdraw(int amount);
        void display(void);
};

void Bank_Account :: init() {
    Name_of_the_depositor = "John Doe";
    Account_Number = 2134476542;
    Balance = 1000;
}

void Bank_Account :: deposit(int amount) {
    Balance += amount;
}

void Bank_Account :: withdraw(int amount) {
    if(amount > Balance) {
        cout << "Insufficient balance." << endl;
        return;
    }
    Balance -= amount;
}

void Bank_Account :: display() {
    cout << "Name of the depositor : " << Name_of_the_depositor << endl;
    cout << "Account number : " << Account_Number << endl;
    cout << "Balance : " << Balance;
    cout << "\n\n";
}

int main() {
    int amount;
    Bank_Account curr_acc, acc1, acc2, acc3;
    Bank_Account accounts[] = {acc1, acc2, acc3};
    accounts[0].init();
    accounts[0].display();
    cout << "Enter the amount to be deposited : ";
    cin >> amount;
    accounts[0].deposit(amount);
    accounts[0].display();
    cout << "Enter the amount to be withdrawn : ";
    cin >> amount;
    accounts[0].withdraw(amount);
    accounts[0].display();
    return 0;
}