#pragma once

#include<vector>
#include<string>
#include<typeindex>

enum class EnemyType {
	Goblin,
	Rat,
	Skeleton,
	Ghost
};

struct EnemyData {
	EnemyType type;
	std::string name;
	int hp;
	int atk;
	//implement inventory vector of unique nullptrs after refactor
};

extern const std::vector<EnemyData> enemies;