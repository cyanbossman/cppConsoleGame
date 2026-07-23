#include<iostream>
#include<array>
#include<vector>
#include "UmbrellaHeader.h"
#include "Inventory.h"
#include "EnemyType.h"
#include "EnemyFactory.h"

int main() {
	Player player;
	initializePlayer(player);
	player.printInventory();

	Enemy enemy = EnemyFactory::create(EnemyType::Goblin);
	std::cout << enemy.Name;
	
	return 0;
}
