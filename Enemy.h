#pragma once
#include<string>
#include<vector>
#include "EnemyData.h"
//#include "Item.h" 
// - ItemType?


class Enemy {
public:
	Enemy(const EnemyData& data)
		: type(data.type),
		name(data.name),
		hp(data.hp),
		atk(data.atk),
		skills(data.skills)
	{ }

	const std::string& GetName() const { return name; }
	int GetHp() const { return hp; }
	int GetAtk() const { return atk; }
	EnemyType GetType() const { return type; }
	std::vector<SkillType> GetSkills() const { return skills; }

private:
	EnemyType type;
	std::string name;
	int hp;
	int atk;
	std::vector<SkillType> skills;
	//include inventory vector of unique nullptrs after refactor
};
