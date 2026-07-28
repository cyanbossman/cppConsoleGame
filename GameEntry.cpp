#include<iostream>
#include "GameEntry.h"


void GameEntry(Player& player) {

	std::string input;
	std::cout << "Are you ready to venture into the dungeon?\n1. Yes\n2. No\n";
	std::cin >> input;
	GameLoop(player);
}