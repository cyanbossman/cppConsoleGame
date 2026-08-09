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

bool Inventory::addItem(std::size_t index, RoomContainer& container){
	if(index >= container.room_containerSlots.size()){
		return false;
	};
	
	for (auto& slot : inventorySlots) {
		if (slot == nullptr) {
			slot = container.moveItem(index);
			return true;
		};
	};
	return false;
};

bool Inventory::removeItem(std::size_t index, RoomContainer& container) {
	if (index >= inventorySlots.size() || inventorySlots[index] == nullptr) {
		return false;
	};

	return container.addItem(std::move(inventorySlots[index]));
};