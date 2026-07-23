#pragma once
#include<array>
#include <memory>
#include "Item.h"

class Item;

class Inventory {
public: 

	void printInventory();
	bool addItem(std::unique_ptr<Item> item);
	std::unique_ptr<Item> removeItem(std::size_t index);

private:
	std::array<std::unique_ptr<Item>, 20>inventorySlots;

};