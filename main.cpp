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

	//Enemy enemy = EnemyFactory::create(EnemyType::Goblin);
	//std::cout << enemy.name << "\n";

	while (true) {
		RoomData room = SelectRandomRoom();
		std::cout << "\nYou have entered " << room.Name << "\n";

		Enemy enemy = EnemyFactory::create(SelectRandomEnemy(room));
		std::cout << "\nYou have encountered " << enemy.name << "\n";
		
		//just to require an input to loop
		std::string wait;
		std::cin >> wait;
	}
	return 0;
}
