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
	Item(std::string Name, ItemType itemtype, int Value);
	std::string getName() const;
	int getValue() const;
	ItemType getItemType() const;

private:
	std::string m_name;
	int m_value;
	ItemType m_itemtype;
};