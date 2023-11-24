#include "CurrentAccount.h"
#include <iostream>

CurrentAccount::CurrentAccount(std::string accNum, std::string accHolder, double bal, double limit)
	: Account(accNum, accHolder, bal), overdraftLimit(limit) {}

void CurrentAccount::displayDetails() {
	Account::displayDetails();
	std::cout << "  Overdraft Limit: $" << this->overdraftLimit << std::endl;
}

void CurrentAccount::withdraw(double amount) {
	// Allow overdrafts up to the specified limit
	if (amount <= balance + overdraftLimit) {
		balance -= amount;
	}
	else {
		cout << "Withdrawal exceeds overdraft limit.\n";
	}
}

// Operator to transfer funds from one account to another
CurrentAccount& CurrentAccount::operator+(Account& other) {
	this->deposit(other.balance);
	other.withdraw(other.balance);
	return *this;
}