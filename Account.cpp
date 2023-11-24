#include "Account.h"
#include <iostream>

Account::Account(std::string accNum, std::string accHolder, double bal)
	: accountNumber(accNum), accountHolder(accHolder), balance(bal) {}

// Displays all the details of the account
void Account::displayDetails() {
	std::cout << "Account Details for Account (ID: " << accountNumber << "): " << std::endl;
	std::cout << "  Holder: " << accountHolder << std::endl;
	std::cout << "  Balance: $" << balance << std::endl;
}

// Deposits a specific ammount into the account
void Account::deposit(double amount) {
	balance += amount;
}

// Withdraws a specific ammount from the account.
void Account::withdraw(double amount) {
	balance -= amount;
}

// Returns the character stream of the account print
ostream& operator<<(ostream& os, Account& account) {
	account.displayDetails();
	return os;
}