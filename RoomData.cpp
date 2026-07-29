#include "RoomData.h"
#include "EnemyData.h"

const std::vector<RoomData> rooms{
	{"Basement", 10, {{EnemyType::Goblin, 10}, {EnemyType::Rat, 10}}},
	{"Cell", 8, {{EnemyType::Skeleton, 10}, {EnemyType::Rat, 10}}},
	{"Vault", 3, {{EnemyType::Rat, 10}}}
};