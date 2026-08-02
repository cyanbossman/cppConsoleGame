#include "EnemyData.h"

const std::vector<EnemyData> enemies{
	{EnemyType::Goblin, "Goblin", 80, 10, {SkillType::Punch}},
	{EnemyType::Rat, "Rat", 30, 5, {SkillType::Bite}},
	{EnemyType::Skeleton, "Skeleton", 50, 15, {SkillType::Punch}},
	{EnemyType::Ghost, "Ghost", 20, 25, {SkillType::Punch}}
};
