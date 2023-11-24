#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
private:
	double interestRate;

public:
	SavingsAccount(string accountNumber, string accountHolder, double balance, double interestRate);

	void displayDetails() override;
	void withdraw(double amount) override;

	SavingsAccount& operator+(Account& other);
};

