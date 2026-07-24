#pragma once

#include<vector>
#include "EnemyType.h"
#include<iostream>

struct RoomEnemy {
	EnemyType enemy;
	int weight;
};

struct RoomData {
	std::string Name;
	int RoomWeight;
	std::vector<RoomEnemy> enemy;
};

