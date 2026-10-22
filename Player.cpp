#include<iostream>
#include<array>
#include "Player.h"

extern const std::array<PlayerClass, 3> Classes{
	PlayerClass{"Knight", {150, 20, 50}},
	PlayerClass{"Mage", {100, 35, 0}},
	PlayerClass{"Assassin", {70, 50, 10}}
};

//Should be a template to handle both enemy and player inside its own file!
//^no idea what i meant here, will investigate later
//  - update: no i won't


int Player::getActHp() {
	return m_getActHp;
}

void Player::CalculateStats() {
	//Logic for additional modifiers planned
	m_stats = m_playerClass.stats;
};

void Player::printInventory() {
	m_inventory.printInventory();
}



void Player::addItem(std::unique_ptr<Item> item) {
	m_inventory.addItem(std::move(item)); 
}

void Player::removeItem(std::size_t index, RoomContainer& container) {
	m_inventory.removeItem(index, container);
};

void Player::SetSkills(SkillType skill) {
	m_skills.push_back(skill);
};

void Player::TakeDamage(int amount) {
	m_getActHp = m_getActHp - amount;
};

