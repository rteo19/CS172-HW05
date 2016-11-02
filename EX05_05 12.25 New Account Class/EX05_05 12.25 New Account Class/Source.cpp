//Ryan Teo
//CS 172
//EX05_05 12.25 New Account Class

#include <iostream>
#include "Account.h"
#include <vector>
#include "Date.h"
using namespace std;

int main()
{
	//test program
	Account MyAccount("George", 1122, 1000); //create object with specified values
	MyAccount.setAnnualInterestRate(1.5); //set the interest rate
	MyAccount.setNumTransactions(0); //set number of transactions to 0

	//implement deposits and withdrawals
	MyAccount.deposit(30);
	MyAccount.deposit(40);
	MyAccount.deposit(50);
	MyAccount.withdraw(5);
	MyAccount.withdraw(4);
	MyAccount.withdraw(2);

	//output the account summary
	cout << "Account Summary" << endl;
	cout << "Account holder name: " << MyAccount.getName() << endl;
	cout << "Interest rate: " << MyAccount.getAnnualInterestRate() << "%" << endl;
	cout << "Account balance: $" << MyAccount.getBalance() << endl;
	cout << "Transactions: " << MyAccount.getNumTransactions() << endl;

}
