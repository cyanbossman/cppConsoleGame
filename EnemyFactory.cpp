#include "EnemyFactory.h"
#include<stdexcept>

//Forced to make a namespace, look into it
//Refactor to the same factory pattern as room, easier to extend than big switch case
namespace EnemyFactory {
	Enemy EnemyFactory::create(EnemyType type) {
		switch (type) {
		case EnemyType::Goblin:
			return Enemy("Goblin", 100, 10);
		case EnemyType::Skeleton:
			return Enemy("Skeleton", 50, 20);
		case EnemyType::Rat:
			return Enemy("Rat", 20, 5);
		default:
			throw std::runtime_error("Unknown enemy type!\n");
		}
	}
}