#include<iostream>
#include "Item.h"

Item::Item(std::string Name, ItemType itemtype, Stats stat, int weight) :
	m_name{ Name },
	m_itemtype{ itemtype },
	m_stat{stat},
	m_weight{weight}
{ }

std::string Item::getName() const {
	return m_name;
};

ItemType Item::getItemType() const {
	return m_itemtype;
};

Stats Item::getStat() const {
	return m_stat;
};

int Item::getWeight() const {
	return m_weight;
}

//std::string Name = "Sword";
//int Value = 10;
//ItemType itemtype = ItemType::Weapon;

