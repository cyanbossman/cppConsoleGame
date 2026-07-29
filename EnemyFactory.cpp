#include "EnemyFactory.h"
#include<stdexcept>

Enemy create(EnemyType type) {
	return Enemy(enemies[static_cast<size_t>(type)]);
}