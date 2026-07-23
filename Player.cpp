#include<iostream>
#include<array>
#include "Player.h"

constexpr std::array<PlayerClass, 3> Classes{
	PlayerClass{"Knight", {150, 20, 50}},
	PlayerClass{"Mage", {100, 35, 0}},
	PlayerClass{"Assassin", {70, 50, 10}}
};

void Player::CalculateStats(PlayerClass& playerclass) {
	//Logic for additional modifiers planned
	stats = playerclass.stats;
};

void Player::printInventory() {
	inventory.printInventory();
}