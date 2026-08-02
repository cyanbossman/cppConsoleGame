#pragma once

#include <string>
#include <vector>

#include "Item.h"
#include "StatDefinition.h"

enum class SkillType {
	Punch,
	Bite,
	Kick,
	SwingSword
};


class Skill {
public:
	Skill(SkillType skill, std::string name, Stats stats);
	SkillType getSkill() const;
	std::string getName() const;
	Stats getStats() const;

private:
	SkillType m_skill;
	std::string m_name;
	Stats m_stats;
};