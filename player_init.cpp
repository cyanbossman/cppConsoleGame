#include "player_init.h"
#include "InputHandling.h"

void initializePlayer(Player& player) {

	Stats BaseStats{};
	int ClassChoice{};
	std::string Name{};

	std::cout << "What is your name?\n";
	std::cin >> Name;
	player.SetName(Name);

	while (true) {

		std::cout << "Which class do you want to play as?\n";
		for (int i = 0; i < Classes.size(); i++) {
			std::cout << i + 1 << ". " << Classes[i].name << "\n";
		};

		if (!(std::cin >> ClassChoice)) {
			input::ClearBadInput();
			continue;
		}
		if (ClassChoice < 1 || ClassChoice > Classes.size()) {
			input::ClearBadInput();

			continue;
		}
		else
			break;
	};

	ClassChoice -= 1;
	player.SetPlayerClass(Classes[ClassChoice]);
	player.SetPlayerStats(Classes[ClassChoice].stats);
	std::cout << "You have chosen to play as '" << player.GetPlayerClass().name << "', " << Name << "\n";
	player.SetSkills(SkillType::Punch);
	return;
};