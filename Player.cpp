#include<iostream>
#include<array>
#include "Player.h"

extern const std::array<PlayerClass, 3> Classes{
	PlayerClass{"Knight", {150, 20, 50}},
	PlayerClass{"Mage", {100, 35, 0}},
	PlayerClass{"Assassin", {70, 50, 10}}
};

//Should be a template to handle both enemy and player inside its own file!

void Player::CalculateStats() {
	//Logic for additional modifiers planned
	m_stats = m_playerClass.stats;
};

void Player::printInventory() {
	m_inventory.printInventory();
}

void Player::SetSkills(SkillType skill) {
	m_skills.push_back(skill);
};

