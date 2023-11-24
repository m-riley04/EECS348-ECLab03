#pragma once
#include <string>
using namespace std;

class Account
{
public:
	string accountNumber;
	string accountHolder;
	double balance;

	Account(string accountNumber, string accountHolder, double balance);
	virtual void displayDetails();
	void deposit(double amount);
	virtual void withdraw(double amount);

	Account& operator+(Account& other);
	friend ostream& operator<<(ostream& os, Account& account);
};

