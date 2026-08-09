#pragma once

#include<vector>
#include<array>
#include<iostream>
#include "EnemyData.h"
#include "Item.h"

struct RoomEnemy {
	EnemyType enemy;
	int weight;
};

struct RoomData {
	std::string Name;
	int RoomWeight;
	std::vector<RoomEnemy> enemy;
};

struct RoomContainer {
	void printContainer();
	bool addItem(std::unique_ptr<Item>&& item);
	std::unique_ptr<Item> moveItem(std::size_t index); 
	std::array<std::unique_ptr<Item>, 10>room_containerSlots;
};

struct Room {
	RoomData data;
	RoomContainer container;
};