#include "Inventory.h"
#include<array>
#include<iostream>

void Inventory::printInventory() {
	//return inventorySlots;
	for (std::size_t i = 0; i < inventorySlots.size(); i++) {
		if (inventorySlots[i]) {
			std::cout << i + 1 << ". " << inventorySlots[i]-> getName() << "\n";
			continue;
		};
		std::cout << i + 1 << ". Empty\n";
	};
};

bool Inventory::addItem(std::unique_ptr<Item> item) {
	for (std::size_t i = 0; i < inventorySlots.size(); i++) {
		if (inventorySlots[i] == nullptr) {
			inventorySlots[i] = std::move(item);
			return true;
		}
	};
	return false;
};