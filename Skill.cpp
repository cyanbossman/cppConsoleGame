#include "Skill.h"

Skill::Skill(SkillType skill,std::string name, Stats stats) :
	m_skill{skill},
	m_name {name},
	m_stats {stats}
{ }

SkillType Skill::getSkill() const {
	return m_skill;
}

std::string Skill::getName() const {
	return m_name;
};

Stats Skill::getStats() const {
	return m_stats;
};

