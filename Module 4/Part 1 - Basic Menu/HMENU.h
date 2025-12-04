#pragma once
#include <string>

bool addItem(std::string* inventory, int size, int location);
void viewItems(std::string* arrView, int size, int currentUsed);
void menu(std::string* Inventory, int size);