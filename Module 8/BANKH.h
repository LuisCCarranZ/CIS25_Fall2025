#pragma once
#include <string>

class BankAccount {
private:
	double balance;
public:
	BankAccount() : balance(0) {};
	void makePurchase(std::string itemName, double price);
	void deposit(double depositAmount);
	void printCurrentBalance();
	void saveTransaction(std::string transaction, double amountTransaction, char action);
};