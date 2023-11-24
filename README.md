# EECS348-ECLab03

This lab requried us to create a program that had 3 main classes, all revolving around a banking system.

# Classes
## Account
- The parent class for all other account types
- Properties: accountNumber, accountHolder, balance.
- Methods:
    - displayDetails(): Display account details.
    - deposit(amount): Deposit money into the account.
    - withdraw(amount): Withdraw money from the account (ensure sufficient balance).

## SavingsAccount
- Derived class from the Account class.
- Additional properties: interestRate.  
- Override the withdraw method to enforce a minimum balance.

## CurrentAccount
- Derived class from the Account class.
- Additional properties: overdraftlimit. 
- Override the withdraw method to allow overdrafts up to the specified limit.

# Requirements
1. Create instances of SavingsAccount and CurrentAccount.  
2. Demonstrate deposit, withdrawal, and balance inquiry operations for both account types.
3. Transfer money from one account to another using operator overloading.
4. Ensure proper validation for withdrawal operations based on account type.
5. Display the details of all accounts after each transaction using the << operator.
