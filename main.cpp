#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include <iostream>

int main() {
    // 1. Create instances of SavingsAccount and CurrentAccount
    SavingsAccount savings("S123", "John Doe", 1000, 0.02);
    CurrentAccount current("C456", "Jane Doe", 2000, 500);

    // 2. Demonstrate deposit, withdrawal, and balance inquiry operations for both account types.
    savings.deposit(500);
    current.withdraw(1000);

    std::cout << "Account Details after deposit and withdrawl: " << std::endl;
    savings.displayDetails();
    current.displayDetails();

    // 5. Display the details of all accounts after each transaction using the << operator.
    std::cout << savings;
    std::cout << current;

    savings.withdraw(500);
    current.deposit(500);

    std::cout << savings;
    std::cout << current;

    // 3. Transfer money from one account to another using operator overloading.
    /*
        Here is where I am confused. The test code on the lab assignment 
        page on Canvas has a comment that says "// Transfer 300 from savings 
        to current", however the balance of the savings account is NOT $300. 
        I wrote the overloaded operator as I thought it told me to do; it 
        transfers all of the money from one account into the other.
        If this is not the way to do it, then the way to transfer $300
        would be to hardcode a 300 value into the method.
    */
    current = current + savings;
    std::cout << "Account Details after transfer: " << std::endl;
    std::cout << savings;
    std::cout << current;

    return 0;
}