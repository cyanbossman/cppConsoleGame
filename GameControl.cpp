#include "GameControl.h"

void GameLoop(Player& player) {

	while (true) {
		RoomData room = SelectRandomRoom();
		Enemy enemy = EnemyFactory::create(SelectRandomEnemy(room));

		std::cout << "You entered '" << room.Name << "'.\n" << "You have encountered '" << enemy.name << "'!\n";

		//Just to visualize the concept
		std::string input;
		std::cout << "Press anything to attack!\n";
		std::cin >> input;
		std::cout << "OH-KO! You beat " << enemy.name << "\n";

	};

}