#include <iostream>
#include <string>
#include "HMENU.h"

using namespace std;

bool addItem(string* inventory, int size, int location) {
	if (location >= size) {
		cout << "There is no more free slots." << endl;
		cout << endl;
		return false;
	}
	string item;
	cout << "Insert the item to be added:" << endl;
	cout << "Free slots: " << (size - location) << endl;
	cout << "Item name:  ";
	getline(cin, item);
	inventory[location] = item;
	cout << "Item " << item << " has been succesfully added." << endl;
	cout << endl;
	return true;
}

void viewItems(string* arrView, int size, int currentUsed) {
	cout << endl;
	int limit = min(currentUsed, size);
	cout << "Current list of item in the inventory" << endl;
	for (int i = 0; i < limit; i++) {
		cout << i + 1 << ". item: " << arrView[i] << endl;
	}
	cout << endl;
}

void menu(string* Inventory, int size) {
	int choice;
	int fullslots = 0;
	do {
		cout << "----------- Main Menu -----------" << endl;
		cout << "What would you like to do (integer)? " << endl;
		cout << "1. Add an item to the inventory" << endl;
		cout << "2. View Items from the inventory" << endl;
		cout << "3. Exit the program" << endl;
		cout << "----------------------------------" << endl;
		cout << ">> ";
		cin >> choice;
		if (cin.fail() || (choice > 3 || choice < 1)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		if (choice == 1) {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (addItem(Inventory, size, fullslots)) {
				fullslots++;
			}
		}
		else if (choice == 2) {
			viewItems(Inventory, size, fullslots);
		}
		else {
			cout << "Closing program..." << endl;
			break;
		}
	} while (choice != 3);
	
}

int main() {
	string arrInventory[2] = {};
	menu(arrInventory, 2);
	return 0;
}