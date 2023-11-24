#pragma once
#include "Account.h"
class CurrentAccount : public Account
{
private:
	double overdraftLimit;

public:
	CurrentAccount(string accountNumber, string accountHolder, double balance, double overdraftLimit);

	void displayDetails() override;
	void withdraw(double amount) override;

	CurrentAccount& operator+(Account& other);
};

