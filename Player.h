#pragma once
#include<iostream>
#include<array>
#include "Inventory.h"
#include "StatDefinition.h"

struct PlayerClass {
	const char* name;
	Stats stats;
};

extern const std::array<PlayerClass, 3> Classes;

class Player {
public:
	std::string Name{};
	Stats stats{};
	PlayerClass playerclass{};
	Inventory inventory;

	void CalculateStats(PlayerClass& playerclass);
	void printInventory();
};