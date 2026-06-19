#include <iostream>
#include <string>

class BankAccount;

class FriendFunction {
public:
    static double getBalance(const BankAccount& account);
};

class BankAccount {
private:
    double balance;
    std::string accountNumber;
    std::string accountName;

public:
    BankAccount(const std::string& number, const std::string& name, double initialBalance)
        : accountNumber(number), accountName(name), balance(initialBalance) {}

    void printAccountInfo() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Name: " << accountName << std::endl;
        std::cout << "Account Balance: " << balance << std::endl;
    }

    friend double FriendFunction::getBalance(const BankAccount& account);
};

double FriendFunction::getBalance(const BankAccount& account) {
    return account.balance;
}

int main() {
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    // Using the friend function to get the balance
    double balance = FriendFunction::getBalance(myAccount);
    std::cout << "Balance from friend function: " << balance << std::endl;

    // Using the member function to print account information
    myAccount.printAccountInfo();

    return 0;
}
