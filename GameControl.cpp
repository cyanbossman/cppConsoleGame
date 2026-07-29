#include "GameControl.h"

void GameLoop(Player& player) {

	while (true) {
		RoomData room = SelectRandomRoom();
		EnemyType type = SelectRandomEnemy(room);
		Enemy enemy = create(type);
		

		std::cout << "You entered '" << room.Name << "'.\n" << "You have encountered '" << enemy.GetName() << "'!\n";

		//Just to visualize the concept
		std::string input;
		std::cout << "Press anything to attack!\n";
		std::cin >> input;
		std::cout << "OH-KO! You beat " << enemy.GetName() << "\n";

	};

}