#include<iostream>
#include "Item.h"

Item::Item(std::string Name, int Value, ItemType itemtype) :
	m_name{ Name },
	m_value{ Value },
	m_itemtype{ itemtype }
{
}

std::string Item::getName() const {
	return m_name;
};

int Item::getValue() const {
	return m_value;
};

ItemType Item::getItemType() const {
	return m_itemtype;
};

//std::string Name = "Sword";
//int Value = 10;
//ItemType itemtype = ItemType::Weapon;

