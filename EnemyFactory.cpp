#include "EnemyFactory.h"

//Forced to make a namespace, look into it
namespace EnemyFactory {
	Enemy EnemyFactory::create(EnemyType type) {
		switch (type) {
		case EnemyType::Goblin:
			return Enemy("Goblin", 10, 2);
		case EnemyType::Skeleton:
			return Enemy("Skeleton", 5, 4);
		default:
			return;
		}
	}
}