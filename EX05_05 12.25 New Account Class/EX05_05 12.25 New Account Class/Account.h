#pragma once
#include <string>
#include <vector>
#include "Date.h"
using namespace std;

//transaction class as defined 
class Transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	//constructor with specified values
	Transaction( char Type, double Amount, double Balance, string Description)
	{
		type = Type;
		amount = Amount;
		balance = Balance;
		description = Description;
	}
	
	//getters and setters
	int getType()
	{
		return type;
	}

	void setType(char Type)
	{
		type = Type;
	}

	double getAmount()
	{
		return amount;
	}

	void setAmount(double Amount)
	{
		amount = Amount;
	}

	double getBalance()
	{
		return balance;
	}

	void setBalance(double Balance)
	{
		balance = Balance;
	}

	string getDescription()
	{
		return description;
	}

	void setDescription(string Description)
	{
		description = Description;
	}

};

class Account 
{
private:
	double annualInterestRate;
	int id;
	double balance;
	double amount;
	string name;
	vector<Transaction> transactions;
	double monthlyInterestRate;
	int numTransactions;
public:
	Account(); //No argument constructor

	Account(string Name, int Id, double Balance); //Constructor with specified values

	//getters and setters
	int getNumTransactions();

	void Account::setNumTransactions(int NumTransactions);

	int getId();

	void setId(int Id);

	double getBalance();

	void setBalance(double Balance);

	double getAnnualInterestRate(); 

	void setAnnualInterestRate(double AnnualInterestRate);

	double getMonthlyInterestRate();

	void withdraw(int Amount);

	void deposit(int Amount);

	string getName();
};
