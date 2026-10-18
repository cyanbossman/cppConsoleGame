#include "RoomLootTest.h"


void GenerateLootTest(Player& player) {
	std::cout << "ItWorks";
	Room room;
	room.data = SelectRandomRoom();
	int input;
	bool appcontinue = true;
	bool switchcontinue = true;

	while (appcontinue) {
		switchcontinue = true;
		std::cin >> input;
		if (!room.container.isFull()) {
			std::unique_ptr<Item> item = CreateLoot(items);
			room.container.addItem(std::move(item));
		}
		else { break; }
		std::cout << "\n\n====ROOM CONTAINER START====\n\n";
		room.container.printContainer();
		std::cout << "\n=====ROOM CONTAINER END=====\n\n";

		while (switchcontinue) {
			std::cout << "\n 1. take an item \n 2. check inventory \n 3. continue \n Any. Exit\n";
			std::cin >> input;
			switch (input) {
			case 1: grabItem(room, player); continue; //move
			case 2: printInv(player); continue; //player.printinv 
			case 3: switchcontinue = false;
			default: switchcontinue = false;
			}
		}
	}
}

void grabItem(Room& room, Player& player) {
	int choice;
	room.container.printContainer();
	std::cout << "\nWhich item do you want?\n";
	std::cin >> choice;
	int actualChoice = choice - 1;
	if (room.container.room_containerSlots[actualChoice] != nullptr) {
		player.addItem(room.container.moveItem(actualChoice));
		std::cout << "SUCCESS, item moved to inventory";
		//player.addItem(room.container.room_containerSlots[choice])
	}
	else {
		std::cout << "\nFailed, no item at index: " << choice << ".\n\n";
	};
}

static void printInv(Player& player) {
	std::cout << "\n\n======INVENTORT START======\n";
	player.printInventory();
	std::cout << "\n=======INVENTORT END=======\n\n";
}