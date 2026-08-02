#pragma once
#include<iostream>
#include<array>
#include<vector>
#include<string>
#include "Inventory.h"
#include "StatDefinition.h"
#include "Skill.h"

struct PlayerClass {
	const char* name;
	Stats stats;
};

extern const std::array<PlayerClass, 3> Classes;

class Player {
public:
	Player() = default;

	Player(std::string name, PlayerClass playerClass)
		: m_name(std::move(name)),
		m_playerClass(playerClass)

	{
		CalculateStats();
	}
	
	void SetName(const std::string& name) {
		m_name = name;
	};
	void SetPlayerClass(const PlayerClass& playerclass) {
		m_playerClass = playerclass;
	};
	void SetPlayerStats(const Stats& stats) {
		m_stats = stats;
	};
	void SetSkills(SkillType skill);

	const std::string& GetName() const {return m_name;}
	const PlayerClass& GetPlayerClass() const {return m_playerClass;}
	const std::vector<SkillType>& GetSkills() const { return m_skills; }
	
	void CalculateStats();
	void printInventory();


	void TakeDamage(int amount);

private:
	std::string m_name;
	Stats m_stats;
	PlayerClass m_playerClass;
	Inventory m_inventory;
	std::vector<SkillType> m_skills;
};