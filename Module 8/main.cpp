#include "BANKH.h"

int main() {
	BankAccount MyAcc;
	MyAcc.deposit(2000.50);
	MyAcc.makePurchase("Laptop intel i7 RTX5060", 1300.99);
	MyAcc.makePurchase("Pack 12 pencils", 12.99);
	MyAcc.makePurchase("Capuccino coffee", 4.50);
	MyAcc.makePurchase("27 inch oled TV 4k", 900.0);
	MyAcc.printCurrentBalance();

	// New balance, notice that after the new balance, it shows the old and new.
	MyAcc.deposit(1000);
	MyAcc.makePurchase("Iphone 15 Pro", 1300.99);
	MyAcc.makePurchase("Book - Introduction to C++", 99.05);
	MyAcc.makePurchase("Tuna sandwich", 10.00);
	MyAcc.makePurchase("81 Oz. Bleach cleaner", 7.35);
	MyAcc.printCurrentBalance();
	return 0;
}