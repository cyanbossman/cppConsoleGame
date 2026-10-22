#include<memory> 
#include "GameControl.h"
#include "InputHandling.h"
#include "Inventory.h"
#include "player_init.h"
#include "GameEntry.h"
#include "Enemy.h"
#include "EnemyFactory.h"
#include "SelectRandomEnemy.h"
#include "LootFactory.h"
#include "ItemData.h"
#include "Item.h"

void GameLoop(Player& player) {

	while (true) {

		//following is just for concept, create a dedicated factory for this
		//------
		Room room;
		room.data = SelectRandomRoom();
		//------

		EnemyType type = SelectRandomEnemy(room.data);
		Enemy enemy = create(type);


		std::cout << "You entered '" << room.data.Name << "'.\n" << "You have encountered '" << enemy.GetName() << "'!\n";
		int choice;
		runBattle(player, enemy);
		std::cin >> choice;

		////Just to visualize the concept
		//std::string input;
		//std::cout << "Press anything to attack!\n";
		//std::cin >> input;
		//std::cout << "OH-KO! You beat " << enemy.GetName() << "\n";

		if (!room.container.isFull()) {
			std::unique_ptr<Item> item = CreateLoot(items);
			room.container.addItem(std::move(item));
		}
		room.container.printContainer();
	};
}


