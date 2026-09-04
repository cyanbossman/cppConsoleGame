#pragma once
#include<string>
#include "StatDefinition.h"

enum class ItemType {
	Weapon,
	Helmet,
	Armour,
	Boots,
	NonEquipable
};

class Item {
public:
	Item(std::string Name, ItemType itemtype, Stats Stat, int weight);
	std::string getName() const;
	ItemType getItemType() const;
	Stats getStat() const;
	int getWeight() const;

private:
	std::string m_name;
	ItemType m_itemtype;
	Stats m_stat;
	int m_weight;
};
