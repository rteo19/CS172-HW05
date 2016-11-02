#include <iostream>
#include "Account.h"
#include <string>
#include <vector>
using namespace std;


Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}

Account::Account(string Name, int Id, double Balance)
{
	name = Name;
	id = Id;
	balance = Balance;
}

int Account::getId()
{
	return id;
}

void Account::setId(int Id)
{
	id = Id;
}

double Account::getBalance()
{
	return balance;
}

void Account::setBalance(double Balance)
{
	balance = Balance;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

void Account::setAnnualInterestRate(double AnnualInterestRate)
{
	annualInterestRate = AnnualInterestRate;
}

double Account::getMonthlyInterestRate()
{
	return annualInterestRate / 12;
}

void Account::withdraw(int Amount) //finds new balance after withdrawal and adds one to transactions
{
	balance -= Amount;
	numTransactions++;
}

void Account::deposit(int Amount) //finds new balance after deposit and adds one to transactions
{
	balance += Amount;
	numTransactions++;
}

string Account::getName()
{
	return name;
}

int Account::getNumTransactions()
{
	return numTransactions;
}


void Account::setNumTransactions(int NumTransactions)
{
	numTransactions = NumTransactions;
}
