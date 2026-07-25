#include"SelectRandomEnemy.h"

EnemyType SelectRandomEnemy(const RoomData& ChosenRoom) {
	WeightedPool<RoomEnemy> pool;
	for (const auto& enemy : ChosenRoom.enemy) {
		pool.add(enemy, enemy.weight);
	};

	const RoomEnemy& rolledEnemy = pool.roll();
	return rolledEnemy.enemy;
}