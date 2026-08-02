#pragma once

#include<vector>
#include<string>
#include<typeindex>
//#include "SkillData.h"
#include "Skill.h"

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
	std::vector<SkillType> skills;
};

extern const std::vector<EnemyData> enemies;