#pragma once
#include<array>
#include <memory>
#include "Item.h"
#include "Room.h"
//Should probably have been a generic container, so that both player, enemy, room and chests could use it but oh well

class Item;

class Inventory {
public: 

	void printInventory();
	bool addItem(std::size_t index, RoomContainer& container);
	bool removeItem(std::size_t index, RoomContainer& container); //is a problem bcs of non-generic containers - need to transfer to specific container type 
	
private:
	std::array<std::unique_ptr<Item>, 10>inventorySlots;

};