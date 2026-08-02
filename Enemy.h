#pragma once
#include<string>
#include "EnemyData.h"
//#include "Item.h"


class Enemy {
public:
	Enemy(const EnemyData& data)
		: type(data.type),
		name(data.name),
		hp(data.hp),
		atk(data.atk)
	{ }

	const std::string& GetName() const { return name; }
	int GetHp() const { return hp; }
	int GetAtk() const { return atk; }
	EnemyType GetType() const { return type; }

private:
	EnemyType type;
	std::string name;
	int hp;
	int atk;
	//include inventory vector of unique nullptrs after refactor
};
