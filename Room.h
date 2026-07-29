#pragma once

#include<vector>
#include<iostream>
#include "EnemyData.h"

struct RoomEnemy {
	EnemyType enemy;
	int weight;
};

struct RoomData {
	std::string Name;
	int RoomWeight;
	std::vector<RoomEnemy> enemy;
};

