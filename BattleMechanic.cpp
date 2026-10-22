#include "BattleMechanic.h"

void runBattle(Player& player, Enemy& enemy) {
	std::cout << "A battle with " << enemy.GetName() << "is initiated!\n\n";
	int roundCounter = 0;
	int j = 0;//test
	std::vector<Skill> playerSkills;
	const std::vector<SkillType>& skillEnums = player.GetSkills();
	for (auto& s : skillEnums) {
		playerSkills.push_back(getSkillDefinition(s));
	}
	int playerHP = player.getActHp();

	//while (true){//(enemy.GetHp() > 0 && playerHP > 0) {
	for(int i = 0; i < 10; i++){
		roundCounter++;
		std::cout << "\n\n======ROUND " << roundCounter << ".======\n\n";
		for (auto& s : playerSkills) {
			j++;
			std::cout <<j<< ". " << s.getName() << "\n";
		}
		j = 0;
		//std::cin >> roundCounter; // just to pause the infinite loop
	}
	return;
}